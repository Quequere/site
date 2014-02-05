core = 7.x
api = 2

projects[kw_manifests][type] = "module"
projects[kw_manifests][download][type] = "git"
projects[kw_manifests][download][url] = "git://github.com/kraftwagen/kw-manifests.git"
projects[kw_manifests][subdir] = "kraftwagen"

projects[kw_itemnames][type] = "module"
projects[kw_itemnames][download][type] = "git"
projects[kw_itemnames][download][url] = "git://github.com/kraftwagen/kw-itemnames.git"
projects[kw_itemnames][subdir] = "kraftwagen"

; The Panopoly Foundation

projects[panopoly_core][version] = 1.1
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.1
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.1
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.1
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.1
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.1
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.1
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.1
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.1
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.1
projects[panopoly_search][subdir] = panopoly

; The Panopoly Apps
projects[panopoly_news][version] = 1.1
projects[panopoly_news][subdir] = panopoly
projects[panopoly_faq][version] = 1.1
projects[panopoly_faq][subdir] = panopoly

; The Panopoly Radix
projects[radix_core][download][type] = git
projects[radix_core][download][revision] = 472330c
projects[radix_core][download][branch] = 7.x-1.x
projects[radix_core][subdir] = panopoly
projects[radix_core][patch][] = https://raw2.github.com/Quequere/site/master/patches/radix_core_make.patch

; Localization
projects[l10n_update][version] = 2.x-dev
projects[l10n_update][subdir] = contrib
projects[l10n_update][download][type] = git
projects[l10n_update][download][revision] = 2919d7e
projects[l10n_update][download][branch] = 7.x-2.x
projects[l10n_client][version] = 1.3
projects[l10n_client][subdir] = contrib

; Extra Utilities
projects[transliteration][version] = 3.1
projects[transliteration][subdir] = contrib
