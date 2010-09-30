dnl Copyright (C) 1999-2005 Open Source Telecom Corporation.
dnl Copyright (C) 2006-2008 David Sugar, Tycho Softworks.
dnl  
dnl This program is free software; you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 2 of the License, or
dnl (at your option) any later version.
dnl 
dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl 
dnl You should have received a copy of the GNU General Public License
dnl along with this program; if not, write to the Free Software 
dnl Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
dnl 
dnl As a special exception to the GNU General Public License, if you 
dnl distribute this file as part of a program that contains a configuration 
dnl script generated by Autoconf, you may include it under the same 
dnl distribution terms that you use for the rest of that program.

AC_DEFUN([OST_AUTOMAKE_MODE],[
	AC_MSG_CHECKING([for genorated automake files])
	if test -z "[$1]" ; then
		ost_AUTOMAKE_TEST=Makefile.in
	else
		ost_AUTOMAKE_TEST=[$1]
	fi
	if test ! -f $ost_AUTOMAKE_TEST ; then 
		AC_MSG_RESULT(missing)
		automake -a 
	else
		AC_MSG_RESULT(found)
	fi]
)

AC_DEFUN([OST_MAINTAINER_MODE],[
	AM_MAINTAINER_MODE
	if test -z "$MAINT" ; then
		AC_MSG_CHECKING([for maintainer ftp distribution directory])
		if test -d ~ftp/pub ; then
			FTPDIR=~ftp/pub
			AC_MSG_RESULT(found)
		else
			AC_MSG_RESULT(missing)
		fi
	fi
	AC_SUBST(FTPDIR)
	]
)

