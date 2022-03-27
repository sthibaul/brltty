###############################################################################
# libbrlapi - A library providing access to braille terminals for applications.
#
# Copyright (C) 2006-2022 by Dave Mielke <dave@mielke.cc>
#
# libbrlapi comes with ABSOLUTELY NO WARRANTY.
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

AC_DEFUN([BRLTTY_LUA_BINDINGS], [dnl
LUA_OK=false

BRLTTY_HAVE_PACKAGE([lua], [lua], [dnl
   AC_CHECK_TOOL([LUA], [lua])

   if test -n "${LUA}"
   then
      AC_MSG_NOTICE([Lua shell: ${LUA}])

      LUA_OK=true
   fi
])

AC_SUBST([LUA_OK])
AC_SUBST([LUA])
])
