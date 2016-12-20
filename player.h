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
int createPlayer(player_t ptop[MAX_PLAY]); // TODO: 1-Sceglere se farli tutti insieme o uno alla volta

/* Carica Giocatori da File
 * ptop = Pointer to player global array variable
 * return: 0 ok, !0 error
 */
int loadPlayer(player_t ptop[MAX_PLAY]);

/* Salva Giocatori nel File
 * ptop = Pointer to player global array variable
 * return: 0 ok, !0 error
 */
int savePlayer(player_t ptop[MAX_PLAY]); //vedi mazzo.c

/* Salva Giocatori nel File
 * card = Pointer to one card of the global array variable
 * matrix = Pointer to the game's field
 * return: 0 ok, !0 error
 */
int setCard(card_t *card, int *matrix);
    /* Hidden Method:
     * - Shift(int *array)  Metodo per ruotare l'array e quindi la tessera
     * - CheckFit(int x, int y, int elemType, card_t *nearCard) Metodo per verificare che le tessere combacino
     */

/* Stampa interfaccia per gestire tessere e seguaci
 * curPlay = Pointer to current Player struct
 */
void printGUI(player_t *curPlay);

#endif
