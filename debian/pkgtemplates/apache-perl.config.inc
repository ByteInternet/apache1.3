if [ "$1" = "configure" ]; then
  if dpkg --compare-versions "$2" lt "1.3.22-2-1.26-1"; then
    db_input high apache-perl/upgrade-from-apache-conflict || true
  fi
fi

# A common configuration mistake is to leave "PidFile /var/run/apache.pid"
# in the configuration file.  Warn if we see this.

if [ -f /etc/apache-perl/httpd.conf ]; then
  if grep 'apache\.pid' /etc/apache-perl/httpd.conf >/dev/null 2>/dev/null; then
    db_input high apache-perl/old-pidfile-set || true
  fi
fi
