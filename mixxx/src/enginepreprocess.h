/***************************************************************************
                          enginepreprocess.h  -  description
                             -------------------
    begin                : Mon Feb 3 2003
    copyright            : (C) 2003 by Tue and Ken Haste Andersen
    email                : 
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef ENGINEPREPROCESS_H
#define ENGINEPREPROCESS_H

#include "engineobject.h"

/**
  * Pre-processing of audio buffers before playback and handling by EngineBuffer::process()
  *
  *@author Tue and Ken Haste Andersen
  */

class EnginePreProcess : public EngineObject  {
	Q_OBJECT
public:
	EnginePreProcess();
	~EnginePreProcess();
	CSAMPLE *process(const CSAMPLE *source, const int buf_size);
private:
	CSAMPLE *buffer;
};

#endif
