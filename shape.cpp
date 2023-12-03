//
//  shape.cpp
//  GroupProjectStarter
//
//  Created by Jonah Beck on 12/2/23.
//

#include "shape.h"
#include "ball.h"


Shape::Shape() {
    loc = new point_t();
    _color.R = _color.G = _color.B = 0;
    width = height = 0;
}

Shape::Shape(int x, int y, int w, int h, color c) {
    loc = new point_t(x, y);
    _color = c;
    width = w;
    height = h;
}

bool Shape::isColliding(const Ball& ball) const {
    int x1 = loc->x;
    int y1 = loc->y;
    int x2 = loc->x + width;
    int y2 = loc->y + height;

    int ballX = ball.getLocation().x;
    int ballY = ball.getLocation().y;
    int ballRadius = ball.getRadius();

    return (ballX + ballRadius > x1 && ballX - ballRadius < x2 &&
            ballY + ballRadius > y1 && ballY - ballRadius < y2);
}

//ALL THE DISPLAYS
void Shape::displayCircle(SDL_Plotter& g) {

    int centerX = loc->x + width / 2;
    int centerY = loc->y + height / 2;

    int radius = width / 2;

    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y) {
        g.plotPixel(centerX + x, centerY - y, _color.R, _color.G, _color.B);
        g.plotPixel(centerX + y, centerY - x, _color.R, _color.G, _color.B);
        g.plotPixel(centerX - y, centerY - x, _color.R, _color.G, _color.B);
        g.plotPixel(centerX - x, centerY - y, _color.R, _color.G, _color.B);
        g.plotPixel(centerX - x, centerY + y, _color.R, _color.G, _color.B);
        g.plotPixel(centerX - y, centerY + x, _color.R, _color.G, _color.B);
        g.plotPixel(centerX + y, centerY + x, _color.R, _color.G, _color.B);
        g.plotPixel(centerX + x, centerY + y, _color.R, _color.G, _color.B);

        if (err <= 0) {
            y += 1;
            err += 2 * y + 1;
        } else {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}

void Shape::displaySquare(SDL_Plotter& g) {
    for (int x = loc->x; x < loc->x + width; x++) {
        g.plotPixel(x, loc->y, _color);
        g.plotPixel(x, loc->y + height - 1, _color);
    }

    for (int y = loc->y; y < loc->y + height; y++) {
        g.plotPixel(loc->x, y, _color);
        g.plotPixel(loc->x + width - 1, y, _color);
    }
}

void Shape::displayTriangle(SDL_Plotter& g) {
    for (int y = loc->y; y <= loc->y + height - 1; ++y) {
        int x = loc->x - (y - loc->y) * width / height;
        g.plotPixel(x, y, _color);
    }

    for (int y = loc->y; y <= loc->y + height - 1; ++y) {
        int x = loc->x + (y - loc->y) * width / height;
        g.plotPixel(x, y, _color);
    }

    for (int x = loc->x - width / 2; x <= loc->x + width / 2; ++x) {
        g.plotPixel(x, loc->y + height - 1, _color);
    }
}
