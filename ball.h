//
//  ball.h
//  GroupProjectStarter
//
//  Created by Jonah Beck on 11/7/23.
//

#ifndef ball_h
#define ball_h

#include "SDL_Plotter.h"
#include "force.h"
#include <cmath>

using namespace std;


//Point
struct point_t{
    double x,y;
    point_t(){
        x = y = 0;
    }

    point_t(double x, double y){
        this->x = x;
        this->y = y;
    }
};

//Ball
class Ball {
private:
    point_t loc;
    color _color;
    int radius;
    force f;
    
public:
    Ball();
    
    void setColor(color);
    void setLocation(point_t);
    void setRadius(int);
    
    color getColor() const;
    point_t getLocation() const;
    int getRadius() const;
    
    void display(SDL_Plotter&, bool = false);
    void move();
};


#endif /* ball_h */
