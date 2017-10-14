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
#ifndef ADDRESSONDRAWINGAREA_H
#define ADDRESSONDRAWINGAREA_H


///
/// \brief Contains address of every Pixel (box) on drawing area in Pixels (boxes)
///
class AddressOnDrawingArea
{
public:
	AddressOnDrawingArea(int x, int y) : x(x), y(y) {}
	int getX() {return x;}
	int getY() {return y;}
	bool operator==(const AddressOnDrawingArea &address) const {
		return (this->x == address.x && this->y == address.y);
	}
private:
	int x;
	int y;
};

#endif // ADDRESSONDRAWINGAREA_H
