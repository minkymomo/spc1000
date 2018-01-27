//
// rpibox.h
//
// Circle - A C++ bare metal environment for Raspberry Pi
// Copyright (C) 2015  R. Stange <rsta2@o2online.de>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef _rpibox_h
#define _rpibox_h

#include <circle/multicore.h>
#include "screen8.h"
#include <circle/memory.h>
#include <circle/types.h>

class CRpiBox
#ifdef ARM_ALLOW_MULTI_CORE
	: public CMultiCoreSupport
#endif
{
public:
	CRpiBox (CScreenDevice8 *pScreen, CMemorySystem *pMemorySystem);
	~CRpiBox (void);

#ifndef ARM_ALLOW_MULTI_CORE
	boolean Initialize (void)	{ return TRUE; }
#endif
	void Run (unsigned nCore);
private:
	CScreenDevice8 *m_pScreen;
};

#endif
