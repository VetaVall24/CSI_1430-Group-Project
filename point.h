//
//  point.h
//  GroupProjectStarter
//
//  Created by Jonah Beck on 12/2/23.
//

#ifndef point_h
#define point_h

#include "SDL_Plotter.h"

struct point_t {
    int x, y;

    point_t() : x(0), y(0) {}

    point_t(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
};

#endif /* point_h */
