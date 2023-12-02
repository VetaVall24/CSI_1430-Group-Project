#include "Functions.h"

void NewRow(const int& min, const int& max) {
    int x;
    int health;

    for(int i = 0; i < 3; i++) {
        x = rand() % 5;
        if(x > 0) {
            health = (rand() % max) - min;
            CreateObject(x, i, health);
        }
    }
    
}

void Collision();
void CreateObject(int x, int loc, int health);
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
