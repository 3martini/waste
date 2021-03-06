/*
    WASTE - m_ping.h (Ping message builder/parser class)
    Copyright (C) 2003 Nullsoft, Inc.

    WASTE is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    WASTE  is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with WASTE; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _C_MPING_H_
#define _C_MPING_H_

#include "shbuf.h"
#include "util.h"

class C_MessagePing
{
  public:
    C_MessagePing();
    C_MessagePing(C_SHBuf *in);
    ~C_MessagePing();

    C_SHBuf *Make(void);

    char m_nick[33];
    short m_port;
    int m_ip;
};

#endif//_C_MFILEREQ_H_
