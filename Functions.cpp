//Jacob Dieguez
//Group Project

#include "Functions.h"

bool NewRow(const int& min, string shapes[], int healths[]) {
    int x;
    int health;
    bool lost;

    lost = LoseGame(healths[]);
    for(int j = 5; j >= 0; j--) {
        for(int k = 0; k < 3; k++) {
            shapes[j+1][k] = shapes[j][k];
            healths[j+1][k] = healths[j][k];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        x = rand() % 5;
        if(x > 0) {
            health = (rand() % 4) + min;
            shapes[0][i] = CreateObject(x, i);
            healths[0][i] = health;
        }
    }
    return lost;
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

bool LoseGame(int healths[]) {
    bool lost;
    for(int i = 0; i < 3; i++) {
        if(healths[6][i] != -1) {
            lost = true;
        }
    }
    return lost;
}

void DifficultyIncrease(int& min) {
    min++;
}

void Disappear(int row, int col, string shapes[], int healths[]) {
    shapes[row][col] = "";
    healths[row][col] = -1;
}

void Shoot();

void IncreaseBalls(int& numBalls) {
    numBalls++;
}
