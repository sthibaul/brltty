###############################################################################
# BRLTTY - A background process providing access to the Linux console (when in
#          text mode) for a blind person using a refreshable braille display.
#
# Copyright (C) 1995-2002 by The BRLTTY Team. All rights reserved.
#
# BRLTTY comes with ABSOLUTELY NO WARRANTY.
#
# This is free software, placed under the terms of the
# GNU General Public License, as published by the Free Software
# Foundation.  Please see the file COPYING for details.
#
# Web Page: http://mielke.cc/brltty/
#
# This software is maintained by Dave Mielke <dave@mielke.cc>.
###############################################################################

all install uninstall install-programs install-help install-tables install-drivers:
	cd $(PGM_DIR) && $(MAKE) $@

include setup.mk

ITERATE = -for directory in $(PGM_DIR) $(TBL_DIR) $(UCD_DIR); do (cd $$directory && $(MAKE) $@); done
clean::
	$(ITERATE)
distclean:: clean
	$(ITERATE)
	-rm -f brltty.spec brltty.lsm
	-rm -f config.log config.cache config.status
	-rm -f config.mk config.h
