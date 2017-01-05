#ifndef PLAYER_H
#define PLAYER_H

#include "tipi.h"

#define MAX_PLAY 8


extern int playNum; // How many players are in the game


/***********
 * METHODS *
 ***********/

/* Player initialization
 * ptop = Pointer to player global array variable
 * return: 0 ok, !0 error
 */
int createPlayer(player_t ptop[MAX_PLAY]);

/* Carica Giocatori da File
 * ptop = Pointer to player global array variable
 * return: 0 ok, !0 error
 */
int loadPlayer(player_t ptop[MAX_PLAY]);

/* Salva Giocatori nel File
 * ptop = Pointer to player global array variable
 * return: 0 ok, !0 error
 */
int savePlayer(player_t ptop[MAX_PLAY]);

/* Routa Carta
 * vett = Pointer to the card's array
 * index = Actual position of the future first element
 * dim = Dimension of the array
 * return: 0 ok, !0 error
 */
int shift(int vett[N], int index, int dim);

/* Verifica che le tessere combacino
 * element = Pointer to the array of the card's element
 * matrix = Pointer to the matrix
 * return: true ok, false error
 */
bool setCard(int element[N], card_t *matrix[MAX_C][MAX_C]);

/* Stampa interfaccia per gestire tessere e seguaci
 * curPlay = Pointer to current Player struct
 */
void printGUI(player_t *curPlay);

#endif
