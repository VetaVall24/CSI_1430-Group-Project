//
//  force.h
//  GroupProjectStarter
//
//  Created by Jonah Beck on 11/7/23.
//

#ifndef force_h
#define force_h

#include <cmath>
#include <ostream>
using namespace std;


const double PI = M_PI;

class force{
    private:
        double magnitude;
        double direction;  // radian
    
    public:
        force();
        force(double m, double d);
    
        void setMagnitude(double m);
        void setDirection(double d);
        double getMagnitude()const;
        double getDirection()const;
    
        force operator+(const force& other) const;
        force operator=(const force& other);
        force add(const force& other) const;
        void apply(const force& other);
    
        void display(ostream& os)const{
            os << getMagnitude() << " " << getDirection() << endl;
        }
};

const force GRAVITY(0.1, PI / 2);

#endif /* force_h */
