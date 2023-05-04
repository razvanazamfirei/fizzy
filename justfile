version := "1.2.1"
tarball := "fzy-" + version + ".tar.gz"

build:
  make
clean:
  make veryclean
release:
  git archive --format=tar.gz -o tarballs/{{tarball}} --prefix=fzy/ master
