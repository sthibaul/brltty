core-debug:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_CORE_NAME):assembleDebug

core-release:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_CORE_NAME):assembleRelease

api-debug:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_API_NAME):assembleDebug

api-release:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_API_NAME):assembleRelease

app-debug:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):assembleDebug

app-release:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):assembleRelease

bundle-debug:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):bundleDebug

bundle-release:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):bundleRelease

lint-debug:
	$(GRADLE_WRAPPER_COMMAND) lintDebug

lint-release:
	$(GRADLE_WRAPPER_COMMAND) lintRelease

publish-package:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):publishApk

publish-bundle:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):publishBundle

install-debug:
	adb install -r -d $(GRADLE_DEBUG_PACKAGE)

install-release:
	adb install -r $(GRADLE_RELEASE_PACKAGE)

assets: drivers messages tables

drivers:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):addDrivers

messages:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):addMessages

tables:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):addTables

remove-assets: remove-drivers remove-messages remove-tables

remove-drivers:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):removeDrivers

remove-messages:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):removeMessages

remove-tables:
	$(GRADLE_WRAPPER_COMMAND) :$(GRADLE_APP_NAME):removeTables

tasks-dump:
	$(GRADLE_WRAPPER_COMMAND) $(GRADLE_DUMP_NAME) tasks --all >$(GRADLE_DUMP_FILE)

badging-dump configurations-dump permissions-dump resources-dump strings-dump xmlstrings-dump xmltree-dump: app-debug
	$(GRADLE_DUMP_COMMAND) --values $(GRADLE_DUMP_NAME) $(GRADLE_DEBUG_PACKAGE) >$(GRADLE_DUMP_FILE)

clean-dumps:
	-rm -f $(GRADLE_ROOT_NAME)-*.$(GRADLE_DUMP_EXTENSION)

useful-links:
	ln -s -f $(GRADLE_DEBUG_PACKAGE) $(GRADLE_ROOT_NAME)-$(GRADLE_DEBUG_VARIANT).$(GRADLE_PACKAGE_EXTENSION)
	ln -s -f $(GRADLE_RELEASE_PACKAGE) $(GRADLE_ROOT_NAME)-$(GRADLE_RELEASE_VARIANT).$(GRADLE_PACKAGE_EXTENSION)
	ln -s -f $(GRADLE_DEBUG_BUNDLE) $(GRADLE_ROOT_NAME)-$(GRADLE_DEBUG_VARIANT).$(GRADLE_BUNDLE_EXTENSION)
	ln -s -f $(GRADLE_RELEASE_BUNDLE) $(GRADLE_ROOT_NAME)-$(GRADLE_RELEASE_VARIANT).$(GRADLE_BUNDLE_EXTENSION)
	ln -s -f $(GRADLE_DEBUG_REPORT) $(GRADLE_REPORT_NAME)-$(GRADLE_DEBUG_VARIANT).$(GRADLE_REPORT_EXTENSION)
	ln -s -f $(GRADLE_RELEASE_REPORT) $(GRADLE_REPORT_NAME)-$(GRADLE_RELEASE_VARIANT).$(GRADLE_REPORT_EXTENSION)

clean-build:
	$(GRADLE_WRAPPER_COMMAND) clean

clean-more: clean
	-rm -f -r .gradle

distclean::
	-rm -f config.properties

