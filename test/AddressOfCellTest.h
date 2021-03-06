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
#ifndef ADDRESSOFCELLTEST_H
#define ADDRESSOFCELLTEST_H

#include <QtTest>
#include "field/AddressOfCell.h"


class AddressOfCellTest : public QObject
{
	Q_OBJECT
private slots:
	void x_and_y_of_Address_should_be_same_as_given_in_constructor();
	void default_constructor_makes_invalid_Address();
	void Address_is_invalid_for_negative_x_or_y();
	void Address_compared_with_itself_is_equal();
	void Addresses_with_same_x_and_y_are_equal();
	void Addresses_with_different_x_and_y_are_NOT_equal();
	void max_x_and_y_should_be_at_least_10000();
};

#endif // ADDRESSOFCELLTEST_H
