make_selfsigned_cert() {
# Make self-signed certificate
    if [ ! -f /etc/apache-ssl/apache.pem ]; then
        /usr/sbin/make-ssl-cert /usr/share/ssl-cert/ssleay.cnf /etc/apache-ssl/apache.pem
    fi
}

make_selfsigned_cert

