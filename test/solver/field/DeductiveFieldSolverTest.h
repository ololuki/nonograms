/**********************************************************************
 * Copyright (C) 2017 - 2019 Ololuki
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
#ifndef DEDUCTIVEFIELDSOLVERTEST_H
#define DEDUCTIVEFIELDSOLVERTEST_H

#include <QtTest>


class DeductiveFieldSolverTest : public QObject
{
	Q_OBJECT
private slots:
	void initialStateShouldBeNotStarted();
	void stateShouldBeDifferentThanNotStartedAfterSolve();

	void solving_test_data();
	void solving_test();
};

#endif // DEDUCTIVEFIELDSOLVERTEST_H
