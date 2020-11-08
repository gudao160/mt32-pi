//
// synthbase.h
//
// Copyright (C) 2020  Dale Whinham <daleyo@gmail.com>
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

#ifndef _synth_h
#define _synth_h

#include <circle/types.h>

class CSynthBase
{
public:
	virtual ~CSynthBase() = default;

	virtual bool Initialize() = 0;
	virtual void HandleMIDIShortMessage(u32 nMessage) = 0;
	virtual void HandleMIDISysExMessage(const u8* pData, size_t nSize) = 0;
	virtual bool IsActive() const = 0;
	virtual void AllSoundOff() = 0;
	virtual size_t Render(s16* pOutBuffer, size_t nFrames) = 0;
	virtual size_t Render(float* pOutBuffer, size_t nFrames) = 0;
};

#endif
