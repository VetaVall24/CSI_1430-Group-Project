#ifndef Functions_h
#define Functions_h

#include "SDL_Plotter.h"
#include "force.h"

using namespace std;

void NewRow(const int&, const int&);
void Collision();
void CreateObject(int, int);
void LoseGame();
void DifficultyIncrease(int&, int&);
void Disappear();
void Shoot();
void IncreaseBalls(int&);


#endif /* Functions_h */
