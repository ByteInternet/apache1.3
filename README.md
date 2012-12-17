Building a new package
======================

You need:

- this repo;
- the orig.tar.gz tarball (see below);
- a git-pbuilder environment for your target environment (see below).

Then: 

 ```bash
 git-buildpackage --git-pbuilder --git-dist=squeeze --git-arch=i386
 ```


Creating the build environment
------------------------------

Please see the documentation in the Byte wiki for a complete guide.


The short instructions without pinning information:

 ```bash
 sudo DIST=squeeze ARCH=i386 git-pbuilder create
 # Fix any repo definitions in the resulting etc/apt/ dir.
 ```

Creating the tarball
--------------------

When currently located in the repo root directory:

  ```bash
  cd ..  # leave the repo dir
  tar czvf apache_1.3.42.orig.tar.gz apache/upstream/
  ```
