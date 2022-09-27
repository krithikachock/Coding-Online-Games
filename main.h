#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //

/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
*
*
*
* Example of a struct to hold state machine data:
*
* typedef struct state {
*   int currentState;
*   int nextState;
* } State
*
*/



typedef struct {
        int xPos; //upper left corner
        int yPos; //upper left corner
        int xPrev;
        int yPrev;
        int xSpeed;
        int ySpeed;
} Player;


typedef struct {
        int x;
        int y;
} Checkpoint;

typedef struct {
        int x;
        int y;
        int xOld;
        int yOld;
        int xVel;
        int yVel;
        const u16* img;
} Obstacle;


int drawObstacle(int x, int y);


#endif
