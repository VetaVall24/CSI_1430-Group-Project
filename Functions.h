//Jacob Dieguez
//Group Project

#ifndef Functions_h
#define Functions_h

#include "SDL_Plotter.h"
#include "force.h"
#include "ball.h"

using namespace std;

bool NewRow(const int&, string, int);
void Collision(int, int, string, int);
void CreateObject(int, int);
bool LoseGame(int);
void DifficultyIncrease(int&);
void Disappear(int, int, string, int);
void Shoot();
void IncreaseBalls(int&);


#endif /* Functions_h */
