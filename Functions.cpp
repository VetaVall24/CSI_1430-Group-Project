#include "Functions.h"

void NewRow(const int& min, string shapes[]) {
    int x;
    int health;

    for(int i = 0; i < 3; i++) {
        x = rand() % 5;
        if(x > 0) {
            health = (rand() % 4) + min;
            shapes[0][i] = CreateObject(x, i);
        }
    }
    
}

void Collision();
string CreateObject(int x, int loc) {
    int width, height, locX, locY = 3;
    color c;
    string name;
    
    if(x == 1 || x == 2) {
        width = height = 1;
        name = "circle";
    }
    else if (x == 3) {
        width = height = 1;
        name = "square";
    }
    else {
        width = height = 1;
        name = "triangle";
    }
    
    if(loc = 0) {
        locX = 1;
    }
    else if(loc = 1) {
        locX = 2;
    }
    else {
        locX = 3;
    }
    
    Shape(locX, locY, width, height, c);
    return name;
}

void LoseGame();

void DifficultyIncrease(int& min) {
    min++;
}

void Disappear();
void Shoot();

void IncreaseBalls(int& numBalls) {
    numBalls++;
}
