//
//  ball.cpp
//  GroupProjectStarter
//
//  Created by Jonah Beck on 11/7/23.
//

#include "ball.h"

Ball::Ball() {
    loc.x = 80;
    loc.y = 80;
    
    _color.R = 255;
    _color.G = 25;
    _color.B = 25;
    
    radius = 25;
    f.setDirection(PI / 4);
    f.setMagnitude(5);
}

//Setters
void Ball::setColor(color c) {
    _color = c;
}

void Ball::setLocation(point_t p) {
    loc = p;
}

void Ball::setRadius(int r) {
    radius = r;
}

//Getters
color Ball::getColor() const {
    return _color;
}

point_t Ball::getLocation() const {
    return loc;
}

int Ball::getRadius() const {
    return radius;
}

//Display
void Ball::display(SDL_Plotter& g, bool ERASE) {
    color c = _color;
    if (ERASE) {
        c.R = 255;
        c.G = 255;
        c.B = 255;
    }
    for (int x = -radius; x <= radius; x++) {
        for (int y = -radius; y <= radius; y++) {
            if (sqrt(pow(x, 2) + pow(y, 2)) <= radius) {
                g.plotPixel(x + loc.x, y + loc.y, _color);
            }
        }
    }
}

void Ball::move() {
    loc.y += f.getMagnitude() * sin(f.getDirection());
    loc.x += f.getMagnitude() * cos(f.getDirection());
    f.apply(GRAVITY);
    
    if (loc.y > 775) {
        f.setDirection(3 * PI / 2);
        f.setMagnitude(0.8 * f.getMagnitude());
    }
}
