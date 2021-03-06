/**********************************************************************
 * Copyright (C) 2017 Ololuki
 * https://ololuki.pl
 * 
 * This file is part of Nonograms
 * https://github.com/ololuki/nonograms
 * 
 * Nonograms is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Nonograms is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Nonograms.  If not, see <http://www.gnu.org/licenses/>.
 *********************************************************************/
#ifndef NONOGRAMFILEWRITER_H
#define NONOGRAMFILEWRITER_H

#include "FileWriter.h"
#include <QJsonObject>
#include <QJsonArray>

#include "field/Cell.h"
#include "field/LineOfHints.h"
#include "field/Hint.h"


///
/// Serialize whole field to JSON and writes it to file
///
class NonogramFileWriter : public FileWriter
{
public:
	NonogramFileWriter();
	~NonogramFileWriter();
	
	void setField(const WholeField& field) override;
	bool write(const std::string &fileDir) override;
	
private:
	WholeField field;
	
	QJsonObject serializeSize();
	QJsonArray serializeDrawingArea();
	QJsonObject serializeCell(Cell cell);
	
	QJsonArray serializeColumnsDescription();
	QJsonArray serializeRowsDescription();
	QJsonObject serializeLineDescription(int lineNumber, Orientation orientation);
	QJsonArray serializeHintsInLine(int lineNumber, int lineLength, Orientation orientation);
	QJsonObject serializeHint(AddressOfHint address);
};

#endif // NONOGRAMFILEWRITER_H
