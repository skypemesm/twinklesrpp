/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "definitions.h"
#include "hdr_rseq.h"
#include "util.h"

t_hdr_rseq::t_hdr_rseq() : t_header("RSeq") {
	resp_nr = 0;
}

void t_hdr_rseq::set_resp_nr(unsigned long l) {
	populated = true;
	resp_nr = l;
}

string t_hdr_rseq::encode_value(void) const {
	if (!populated) return "";

	return ulong2str(resp_nr);
}

bool t_hdr_rseq::operator==(const t_hdr_rseq &h) const {
	return (resp_nr == h.resp_nr);
}
