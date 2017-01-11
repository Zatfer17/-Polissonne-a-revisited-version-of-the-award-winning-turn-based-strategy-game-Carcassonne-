#include <stdio.h>
#include "tipi.h"

/* Come mai abbiamo una gui.h?

#include "player.h"//includo per "dimensione" stampa... Non ho capito :| */


// Cool stuff here for texts
#define red   "\033[0;31m"        /* 0 -> normal ;  31 -> red */
#define cyan  "\033[1;36m"        /* 1 -> bold ;  36 -> cyan */
#define green "\033[4;32m"        /* 4 -> underline ;  32 -> green */
#define blue  "\033[9;34m"        /* 9 -> strike ;  34 -> blue */

#define black  "\033[0;30m"
#define brown  "\033[0;33m"
#define magenta  "\033[0;35m"
#define gray  "\033[0;37m"

#define none   "\033[0m"        /* to flush the previous property */

/***********
 * METHODS *
 ***********/
 /* Prints a zoomed view of the scenario
  * matrix = pointer to game-grid
  * ptom = pointer to deck
  */
void printMatrixZoom(card_t *matrix, card_t *ptom);

/* Prints game options for player
 * 3 kind of actions allowed:
 *  1- Change Zoom
 *  2- Rotate Card
 *  3- Insert Card
 */
int printMenu();

/* Prints graphical interface which displays:
 *  1- Name
 *  2- Points
 *  3- Followers left
 */
void printGUI(player_t *curPlay);

/* Prints development credits */
void printCredits();
