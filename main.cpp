#include <iostream>
#include "SDL_Plotter.h"
#include "ball.h"
#include "shape.h"
#include "point.h"
#include "MouseInput.h"
using namespace std;


int main(int argc, char** argv) {
    
    //DATA ABSTRACTION
    SDL_Plotter g(800, 600, true);
    MouseInput input(g);
    Ball ball;
    Shape circle(200, 400, 50, 50, color{0, 255, 0});
    Shape triangle(400, 400, 25, 50, color{0, 0, 255});
    Shape square(500, 400, 50, 50, color{255, 0, 0});
    bool startMovement = false;
    
    //INPUT

    //PROCESS
    while (!g.getQuit()) {
        g.clear();
        
        //BLACK BACKGROUND
        for (int x = 0; x < 800; x++) {
            for (int y = 0; y < 600; y++) {
                g.plotPixel(x, y, 0, 0, 0);
            }
        }
        
        //MOUSE CLICKS
        if (!startMovement) {
            point_t clickPoint = input.getMouseClick();
            if (clickPoint.x != 0 && clickPoint.y != 0) {
                double magnitude = 10.0;
                ball.fire(point_t{clickPoint.x - ball.getLocation().x, clickPoint.y - ball.getLocation().y}, magnitude);
                startMovement = true;
            }
        }
        
        if (startMovement) {
            ball.move(circle, triangle, square);
            if (ball.getLocation().y >= g.getRow()) {
                ball.reset();
                startMovement = false;
            }
        }

        //OUTPUT
        circle.displayCircle(g);
        triangle.displayTriangle(g);
        square.displaySquare(g);
        ball.display(g);
        
        g.update();
        g.Sleep(17);
        
    }
    return 0;
}

