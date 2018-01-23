//
// kernel.h
//
// Circle - A C++ bare metal environment for Raspberry Pi
// Copyright (C) 2014  R. Stange <rsta2@o2online.de>
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
#ifndef _kernel_h
#define _kernel_h

#include <circle/memory.h>
#include <circle/actled.h>
#include <circle/koptions.h>
#include <circle/devicenameservice.h>
#include "screen8.h"
#include <circle/serial.h>
#include <circle/logger.h>
#include <circle/types.h>
#include <circle/multicore.h>
#include <SDCard/emmc.h>
#include <fatfs/ff.h>

enum TShutdownMode
{
	ShutdownNone,
	ShutdownHalt,
	ShutdownReboot
};

#ifdef ARM_ALLOW_MULTI_CORE
class MyMulticore 
: public CMultiCoreSupport 
{
	tms9918 vdp;
public:	
	MyMulticore (CMemorySystem *pMemorySystem)
	: CMultiCoreSupport (pMemorySystem)
	{}
	void Initialize(tms9918 vdp)  
	{
		this->vdp = vdp;
		CMultiCoreSupport::Initialize();
	}
	void Run (unsigned nCore)
	{
		int time = 0;
		while(true)
		{
			time++;
			if (time > 250000000/30/261)
			{
				tms9918_periodic(vdp);
				time = 0;
			};
		}
	}
};
#endif
class CKernel
{
public:
	CKernel (void);
	~CKernel (void);

	boolean Initialize (void);
	TShutdownMode Run (void);
	CScreenDevice8		m_Screen;

private:
	// do not change this order
	CMemorySystem		m_Memory;
	//MyMulticore	m_Core;
	CActLED			m_ActLED;
	CKernelOptions		m_Options;
	CDeviceNameService	m_DeviceNameService;
	CSerialDevice		m_Serial;
	CInterruptSystem	m_Interrupt;	
	CTimer			m_Timer;	
	CLogger			m_Logger;
	CEMMCDevice		m_EMMC;
	FATFS			m_FileSystem;
	char files[256*256];
	char files2[256*256];
	char drive[256];
	char pattern[256];
	char *fnRPI_FILES(char *drive, char *pattern);
};

#endif
