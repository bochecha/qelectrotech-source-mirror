/*
	Copyright 2006-2014 The QElectroTech Team
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
#ifndef XREFPROPERTIES_H
#define XREFPROPERTIES_H

#include "propertiesinterface.h"

/**
 * @brief The XRefProperties class
 * this class store properties used by XrefItem
 */
class XRefProperties : public PropertiesInterface
{
	public:
	XRefProperties();

	virtual void toSettings	  (QSettings &settings, const QString = QString()) const;
	virtual void fromSettings (const QSettings &settings, const QString = QString());
	virtual void toXml		  (QDomElement &xml_element) const;
	virtual void fromXml	  (const QDomElement &xml_element);

	bool operator == (const XRefProperties &xrp) const;
	bool operator != (const XRefProperties &xrp) const;

	void setShowPowerContac (const bool a) {m_show_power_ctc = a;}
	bool showPowerContact	() const	   {return m_show_power_ctc;}

	private:
	bool m_show_power_ctc;
};

#endif // XREFPROPERTIES_H