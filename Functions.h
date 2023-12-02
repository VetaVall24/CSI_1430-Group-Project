#ifndef Functions_h
#define Functions_h

#include "SDL_Plotter.h"
#include "force.h"
#include "ball.h"

using namespace std;

void NewRow(const int&);
void Collision();
void CreateObject(int, int, int);
void LoseGame();
void DifficultyIncrease(int&);
void Disappear();
void Shoot();
void IncreaseBalls(int&);


#endif /* Functions_h */
