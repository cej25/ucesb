# -*- Makefile -*-

# This file is part of UCESB - a tool for data unpacking and processing.
#
# Copyright (C) 2016  Haakan T. Johansson  <f96hajo@chalmers.se>
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
# MA  02110-1301  USA

EXT_WRITER_TEST=$(UCESB_BASE_DIR)/hbook/example/ext_writer_test

$(EXT_WRITER_TEST): $(EXT_WRITER_TEST).cc
	@echo "  BUILD  $@"
	@$(CXX) -O3 -g -D__LAND02_CODE__ \
	  -DEXT_WRITER_PREFIX="\"$(UCESB_BASE_DIR)/hbook/\"" \
	  -I$(UCESB_BASE_DIR)/file_input \
	  -I$(UCESB_BASE_DIR)/eventloop \
	  -I$(UCESB_BASE_DIR)/threading \
	  -I$(UCESB_BASE_DIR)/lu_common \
	  -I$(UCESB_BASE_DIR)/mapcalib \
	  -I$(UCESB_BASE_DIR)/hbook \
	  -I$(UCESB_BASE_DIR)/acc_def \
	  -I$(UCESB_BASE_DIR) \
	  -I$(GENDIR) \
	  -o $@ $<

.PHONY: ext_writer_test
ext_writer_test: $(EXT_WRITER_TEST)
