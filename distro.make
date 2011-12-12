; drush make --working-copy distro.make <target directory>

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7

projects[learn][type] = profile
projects[learn][download][type] = git
projects[learn][download][url] = git://github.com/wulff/learn.git
