//
//  MouseInput.cpp
//  GroupProjectStarter
//
//  Created by Jonah Beck on 12/2/23.
//

#include "MouseInput.h"

MouseInput::MouseInput(SDL_Plotter& plotter) : plotter(plotter), mouseDown(false) {}

bool MouseInput::isMouseDown() {
    return mouseDown;
}

point_t MouseInput::getMouseClick() {
    point_t clickPoint = {0, 0};  // Initialize with default values
    if (plotter.mouseClick() && !mouseDown) {
        mouseDown = true;
        point tempPoint = plotter.getMouseClick();
        clickPoint = point_t(tempPoint.x, tempPoint.y);  // Explicit conversion
    } else if (!plotter.mouseClick()) {
        mouseDown = false;
    }

    return clickPoint;
}
