###############################################################################
# BRLTTY - A background process providing access to the console screen (when in
#          text mode) for a blind person using a refreshable braille display.
#
# Copyright (C) 1995-2025 by The BRLTTY Developers.
#
# BRLTTY comes with ABSOLUTELY NO WARRANTY.
#
# This is free software, placed under the terms of the
# GNU Lesser General Public License, as published by the Free Software
# Foundation; either version 2.1 of the License, or (at your option) any
# later version. Please see the file LICENSE-LGPL for details.
#
# Web Page: http://brltty.app/
#
# This software is maintained by Dave Mielke <dave@mielke.cc>.
###############################################################################

LOCALE = C
SETLOCALE = LC_ALL=$(LOCALE)

all: all-yes
all-yes: txt html
all-no:
	@echo linuxdoc is not installed - document will not be made

txt: $(DOCUMENT_NAME).txt
html: html.made

LINUXDOC_OPTIONS = -l $(DOCUMENT_LANGUAGE) -c utf-8

$(DOCUMENT_NAME).txt: $(SRC_DIR)/$(DOCUMENT_NAME).sgml
	$(SETLOCALE) linuxdoc -B txt -f $(LINUXDOC_OPTIONS) $<
	sed -e 's/\x1B\[[0-9][0-9]*m//g' -i $@

html.made: $(SRC_DIR)/$(DOCUMENT_NAME).sgml
	$(SETLOCALE) linuxdoc -B html $(LINUXDOC_OPTIONS) $<
	touch $@

clean::
	-rm -f -- *.txt *.html *.made

