/*
 * boxes - Command line filter to draw/remove ASCII boxes around text
 * Copyright (c) 1999-2021 Thomas Jensen and the boxes contributors
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License, version 2, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */

/*
 * Unit tests of the 'cmdline' module
 */

#ifndef CMDLINE_TEST_H
#define CMDLINE_TEST_H


void test_indentmode_none(void **state);
void test_indentmode_invalid_long(void **state);
void test_indentmode_invalid_short(void **state);
void test_indentmode_box(void **state);
void test_indentmode_text(void **state);

void test_killblank_true(void **state);
void test_killblank_false(void **state);
void test_killblank_invalid(void **state);
void test_killblank_multiple(void **state);

void test_padding_top_bottom(void **state);
void test_padding_invalid(void **state);
void test_padding_negative(void **state);
void test_padding_notset(void **state);
void test_padding_invalid_value(void **state);
void test_padding_novalue(void **state);

void test_tabstops_zero(void **state);
void test_tabstops_500(void **state);
void test_tabstops_4X(void **state);
void test_tabstops_4e(void **state);
void test_tabstops_4ex(void **state);
void test_tabstops_7(void **state);

void test_alignment_invalid_hX(void **state);
void test_alignment_invalid_vX(void **state);
void test_alignment_invalid_jX(void **state);
void test_alignment_notset(void **state);
void test_alignment_incomplete(void **state);


#endif

/*EOF*/                                          /* vim: set cindent sw=4: */