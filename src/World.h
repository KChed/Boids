#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED

#include "Drawable.h"

namespace Boids {

namespace World {

// ============================================= //

void initialize();
void run();
void terminate();

/* Callback functions */
void keyPressed(int key, int status);

// ============================================= //

};
};

#endif // WORLD_H_INCLUDED