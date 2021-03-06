/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2013 Sleepwalking & rgwan <dv.xw@qq.com>
 * 
 * RSCCommon is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * RSCTool is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "LibCyberBase/SPKit/defs.h"
#include "LibCyberBase/SPKit/structure/string.h"
#include "LibCyberBase/SPKit/structure/array.h"
#include "LibCyberBase/SPKit/io/fileStream.h"
#include "LibCyberBase/SPKit/io/terminal.h"
#include "LibCyberBase/SPKit/misc/converter.h"

#include "LibCyberBase/CVDB/CVDB.h"
#include "LibCyberBase/CVDB/CBVIO.h"
#include "LibCyberBase/WaveBuffer.h"
#include "LibCyberBase/FrameBuffer.h"
#include "LibCyberBase/SlWave/wave.h"

#include "LibCyberBase/Overall.h"
#include "LibCyberBase/RDLIO.h"

#include "LibCVSCommon/CVSCommon.h"
#include "LibCVSCommon/CVSReader.h"
#include "LibCVSCommon/CVSWriter.h"

#include "LibRSCCommon/RSCCommon.h"
#include "LibRSCCommon/CDTCommon/CDTCommon.h"
#include "LibRSCCommon/CDTCommon/CDTReader.h"
#include "LibRSCCommon/RSCReader.h"

#include "LibRSCCommon/RSCWriter.h"

#include "LibCVE/Scheduler.h"

#include "LibRSCCommon/CVSGenerator/Generator.h"
#include "LibRSCCommon/CVSGenerator/Rearrager.h"
#include "LibRSCCommon/VSQXCommon/VSQ3Reader.h"
#include "LibRSCCommon/VSQXCommon/VSQXReader.h"
using namespace Overall;
using namespace converter;
int main()
{

	CBVFile::DataDir = "/tmp/CData/";
	Scheduler::Init();
	Scheduler::OpenCVS("/tmp/test.cvs");

	Scheduler::SetFileOutput("/tmp/RenaIsAlive.wav");
	Scheduler::RunSynthesizer();
	
	Scheduler::Exit();

	/*
	CVSCommon::CVS cvs;
	RSCCommon::RSC rsc,rscout;
	CVSCommon::CVSWriter w;
	VSQXCommon::VSQXReader r;
	RSCCommon::RSCReader r1;
	RSCCommon::RSCWriter wr;	
	CDTCommon::CDT cdt;
	CDTCommon::CDTReader cr;
	
	r1.Open("/tmp/test.rsc");
	r1.Read(rsc);
	r1.Close();
	
	cr.Open("/tmp/HMCHNDICT.cdt");
	cr.Read(cdt);
	cr.Close ();
	rscout = rsc;
	RSCCommon::GenerateCVS(rsc, cdt, cvs);
	w.Save("/tmp/test.cvs");
	w.Write(cvs);
	w.Close ();*/
	return 0; 
}

