; makefile for farouteffects.dk

; define core version and drush make compatibility

core = 7.x
api = 2

; modules

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc1

projects[cdn][subdir] = contrib
projects[cdn][version] = 2.0-beta1
; http://drupal.org/node/1025762#comment-5286654
projects[cdn][patch][] = http://drupal.org/files/use_scheme_correctly.patch

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.x-dev

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[entitycache][subdir] = contrib
projects[entitycache][version] = 1.1

projects[features][subdir] = contrib
projects[features][version] = 1.0-beta4

projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.x-dev

projects[geshifilter][subdir] = contrib
projects[geshifilter][version] = 1.x-dev
projects[geshifilter][patch][] = http://drupal.org/files/geshifilter-wysiwyg-bridge-1229894-4.patch

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.2

projects[l10n_client][subdir] = contrib
projects[l10n_client][version] = 1.0

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = 1.0-beta2

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.x-dev

projects[media][subdir] = contrib
projects[media][version] = 2.x-dev

projects[memcache][subdir] = contrib
projects[memcache][version] = 0.2

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.x-dev

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta4

projects[token][subdir] = contrib
projects[token][version] = 1.0-beta7

projects[transliteration][subdir] = contrib
projects[transliteration][version] = 3.0

projects[variable][subdir] = contrib
projects[variable][version] = 1.1

projects[views][subdir] = contrib
projects[views][version] = 3.0-rc3

projects[workbench][subdir] = contrib
projects[workbench][version] = 1.1

projects[workbench_files][subdir] = contrib
projects[workbench_files][version] = 1.0

projects[workbench_media][subdir] = contrib
projects[workbench_media][version] = 1.x-dev

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.1

; developer modules

projects[coder][subdir] = developer
projects[coder][version] = 1.0

projects[devel][subdir] = developer
projects[devel][version] = 1.2

projects[performance][subdir] = developer
projects[performance][version] = 1.3

projects[security_review][subdir] = developer
projects[security_review][version] = 1.0

; themes

projects[omega][subdir] = contrib
projects[omega][version] = 3.0

; libraries

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz

libraries[fancybox][download][type] = get
libraries[fancybox][download][url] = http://fancybox.googlecode.com/files/jquery.fancybox-1.3.4.zip
libraries[fancybox][destination] = themes/custom/learn/libraries

; fonts

libraries[League-Gothic][download][type] = get
libraries[League-Gothic][download][url] = http://www.fontsquirrel.com/fontfacekit/League-Gothic
libraries[League-Gothic][directory_name] = League_Gothic
libraries[League-Gothic][destination] = themes/custom/learn/fonts
