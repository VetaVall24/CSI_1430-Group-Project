#include "Functions.h"

void NewRow() {
    int x;

    for(int i = 0; i < 3; i++) {
        x = rand() % 5;
        if(x > 0) {
            CreateObject(x, i);
        }
    }
    
}

void Collision();
void CreateObject(int x, int loc);
void LoseGame();

void DifficultyIncrease(int& min, int& max) {
    min++;
    max++;
}

void Disappear();
void Shoot();

void IncreaseBalls(int& numBalls) {
    numBalls++;
}
