//
// This file is part of the Marble Desktop Globe.
//
// This program is free software licensed under the GNU LGPL. You can
// find a copy of this license in LICENSE.txt in the top directory of
// the source code.
//
// Copyright 2007      Murad Tagirov <tmurad@gmail.com>
//


#ifndef KMLPLACEMARK_H
#define KMLPLACEMARK_H

#include "PlaceMark.h"

class KMLPlaceMark
  : public PlaceMark
{
 public:
    KMLPlaceMark();
    virtual ~KMLPlaceMark();

    QString toString() const;
};

#endif // KMLPLACEMARK_H
