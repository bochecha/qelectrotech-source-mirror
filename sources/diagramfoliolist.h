/*
	Copyright 2006-2019 The QElectroTech Team
	This file is part of QElectroTech.
	
	QElectroTech is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.
	
	QElectroTech is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with QElectroTech.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DIAGRAMFOLIOLIST_H
#define DIAGRAMFOLIOLIST_H

#include "diagram.h"
#include "qetgraphicsitem/independenttextitem.h"

class DiagramFolioList : public Diagram
{
	public:
	DiagramFolioList(QETProject *project);
	~DiagramFolioList() override;
	virtual QList<QLineF *> lines() const		{return list_lines_;}
	virtual QList<QRectF *> rectangles() const	{return list_rectangles_;}
	void setId(int i) {id = i;}
	int getId() const {return id;}

	static qreal colWidths[7];

	protected:
	void drawBackground(QPainter *, const QRectF &) override;

	private:
	void fillRow(QPainter *, const QRectF &, const QString&, const QString&, const QString&, const QString&, const QString&, const QString&, const QString&);
	void buildGrid(QPainter *, const QRectF &, int, int, qreal[]);
	void fillHeader(QPainter *, const QRectF &);


	QList<QLineF *> list_lines_;
	QList<QRectF *> list_rectangles_;
	QRectF sheetRectangle;
	int id;

};

#endif // DIAGRAMFOLIOLIST_H
