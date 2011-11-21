; makefile for farouteffects.dk

; define core version and drush make compatibility

core = 7.x
api = 2

; modules

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc1

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.x-dev

projects[devel][subdir] = contrib
projects[devel][version] = 1.2

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

; TODO: remove?
projects[entity][subdir] = contrib
projects[entity][version] = 1.0-rc1

projects[features][subdir] = contrib
projects[features][version] = 1.0-beta4

projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.x-dev

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.1

projects[l10n_client][subdir] = contrib
projects[l10n_client][version] = 1.0

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = 1.0-beta2

projects[media][subdir] = contrib
projects[media][version] = 2.x-dev

projects[menu_block][subdir] = contrib
projects[menu_block][version] = 2.x-dev

projects[menu_position][subdir] = contrib
projects[menu_position][version] = 1.0

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.0-beta3

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta4

projects[token][subdir] = contrib
projects[token][version] = 1.0-beta7

projects[transliteration][subdir] = contrib
projects[transliteration][version] = 3.0

projects[variable][subdir] = contrib
projects[variable][version] = 1.1

projects[views][subdir] = contrib
projects[views][version] = 3.x-dev

projects[workbench][subdir] = contrib
projects[workbench][version] = 1.1

projects[workbench_files][subdir] = contrib
projects[workbench_files][version] = 1.0

projects[workbench_media][subdir] = contrib
projects[workbench_media][version] = 1.0

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.1

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
