//
//  MouseInput.h
//  GroupProjectStarter
//
//  Created by Jonah Beck on 12/2/23.
//

#ifndef MouseInput_h
#define MouseInput_h

#include "point.h"
#include "SDL_Plotter.h"

class MouseInput {
public:
    MouseInput(SDL_Plotter& plotter);

    bool isMouseDown();
    point_t getMouseClick();

private:
    SDL_Plotter& plotter;
    bool mouseDown;
};


#endif /* MouseInput_h */
