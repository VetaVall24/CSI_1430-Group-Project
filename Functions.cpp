//Jacob Dieguez
//Group Project

#include "Functions.h"

void NewRow(const int& min, string shapes[], int healths[]) {
    int x;
    int health;

    for(int i = 0; i < 3; i++) {
        x = rand() % 5;
        if(x > 0) {
            health = (rand() % 4) + min;
            shapes[0][i] = CreateObject(x, i);
            healths[0][i] = health;
        }
    }
    
}

void Collision();

string CreateObject(int x, int loc) {
    string name;
    
    if(x == 1 || x == 2) {
        name = "circle";
    }
    else if (x == 3) {
        name = "square";
    }
    else {
        name = "triangle";
    }
    
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
