/**********************************************************************
 * Copyright (C) 2017-2019 Ololuki
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
#ifndef SOLVERWORKER_H
#define SOLVERWORKER_H

#include "../field/WholeField.h"
#include "field/FieldSolverObserver.h"
#include <QObject>
#include <memory>
class AbstractFieldSolver;


class SolverWorker : public QObject, public FieldSolverObserver
{
	Q_OBJECT
public:
	SolverWorker();
	
	void setFieldSolver(std::shared_ptr<AbstractFieldSolver> solver);
	void solve(WholeField wholeField);
	void stop();

signals:
	void queueNextJob();
	void cellChanged(Cell cell);
	void isSolvingChanged(bool isSolving);
	
private:
	void onCellChanged(Cell cell) override;

	void doJob();
	std::shared_ptr<AbstractFieldSolver> solver;
	bool solving = false;
};

#endif // SOLVERWORKER_H
