#
# Makefile
#   Copyright (C) 1999, 2002
#   Free Software Foundation
#
# This file is part of the libiberty library.
# Libiberty is free software; you can redistribute it and/or
# modify it under the terms of the GNU Library General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# Libiberty is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Library General Public License for more details.
#
# You should have received a copy of the GNU Library General Public
# License along with libiberty; see the file COPYING.LIB.  If not,
# write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
# Boston, MA 02110-1301, USA.
#

# This file was written by Tom Tromey <tromey@cygnus.com>.

#
# Makefile for libiberty/testsuite directory
#

srcdir = ../../../../gcc-4.1.1/libiberty/testsuite
VPATH = ../../../../gcc-4.1.1/libiberty/testsuite

SHELL = /bin/sh

CC = gcc
CFLAGS = -g -O2
LIBCFLAGS = $(CFLAGS)

# Multilib support variables.
MULTISRCTOP =

INCDIR=$(srcdir)/../$(MULTISRCTOP)../include

all:

# CHECK is set to "really_check" or the empty string by configure.
check: really-check

really-check: check-cplus-dem check-pexecute

# Run some tests of the demangler.
check-cplus-dem: test-demangle $(srcdir)/demangle-expected
	./test-demangle < $(srcdir)/demangle-expected

# Check the pexecute code.
check-pexecute: test-pexecute
	./test-pexecute

TEST_COMPILE = $(CC) -DHAVE_CONFIG_H $(LIBCFLAGS) -I.. -I$(INCDIR) $(HDEFINES)
test-demangle: $(srcdir)/test-demangle.c ../libiberty.a
	$(TEST_COMPILE) -o test-demangle \
		$(srcdir)/test-demangle.c ../libiberty.a

test-pexecute: $(srcdir)/test-pexecute.c ../libiberty.a
	$(TEST_COMPILE) -DHAVE_CONFIG_H -I.. -o test-pexecute \
		$(srcdir)/test-pexecute.c ../libiberty.a

# Standard (either GNU or Cygnus) rules we don't use.
info install-info clean-info dvi install etags tags installcheck:

# The standard clean rules.
mostlyclean:
	rm -f test-demangle
clean: mostlyclean
distclean: clean
	rm -f Makefile
maintainer-clean realclean: distclean

Makefile: $(srcdir)/Makefile.in ../config.status
	CONFIG_FILES=testsuite/Makefile CONFIG_HEADERS= \
	  cd .. && $(SHELL) ./config.status
