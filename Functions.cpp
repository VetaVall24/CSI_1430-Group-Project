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
void CreateObject(int x, int loc, int health);
void LoseGame();

void DifficultyIncrease(int& min) {
    min++;
}

void Disappear();
void Shoot();

void IncreaseBalls(int& numBalls) {
    numBalls++;
}
