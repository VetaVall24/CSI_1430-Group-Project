//
//  shape.h
//  GroupProjectStarter
//
//  Created by Jonah Beck on 12/2/23.
//

#ifndef SHAPE_H
#define SHAPE_H



#include "SDL_Plotter.h"
#include "point.h"

class Ball;

class Shape {
private:
    point_t* loc;
    color _color;
    int width, height;

public:
    Shape();
    Shape(int x, int y, int w, int h, color c);

    void displayCircle(SDL_Plotter& g);
    void displaySquare(SDL_Plotter& g);
    void displayTriangle(SDL_Plotter& g);

    bool isColliding(const Ball& ball) const;
};

#endif // SHAPE_H
