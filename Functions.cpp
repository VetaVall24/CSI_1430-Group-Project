#include "Functions.h"

void NewRow(const int& min) {
    int x;
    int health;

    for(int i = 0; i < 3; i++) {
        x = rand() % 5;
        if(x > 0) {
            health = (rand() % 4) + min;
            CreateObject(x, i, health);
        }
    }
    
}

void Collision();
void CreateObject(int x, int loc, int health) {
    int width, height, locX, locY = 3;
    color c;
    if(x == 1 || x == 2) {
        width = height = 1;
    }
    else if (x == 3) {
        width = height = 1;
    }
    else {
        width = height = 1;
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
