#ifndef FOLLOWER_H
#define FOLLOWER_H

#include "tipi.h"

#define MAX_FW 64

/***********
 * METHODS *
 ***********/

/* Controlla se carta inserita sia richiesta dai seguaci
 * matrix = Pointer to the game's field
 * playerID = index of the player who placed the card
 * x,y = coordinates
 * return: 0 ok, !0 error
 */
int CheckElem(card_t *matrix, int playerID, int x, int y);

/* Calcola i punteggi finali di un seguace
 * follower = Pointer to one follower of the global array variable
 * return: the score
 */
int checkScore(follower_t *follower);

/* Imposta follower
 * follower = Pointer to one follower of the global array variable
 * x,y = Coordinates
 * element = Index of the element where the follower was put
 * playerID = index of the player who placed the follower
 * return: 0 ok, !0 error
 */
int setFollower(follower_t *follower, int x, int y, int element, int playerID);

/******************
 * HIDDEN METHODS *
 ******************/

/* Controllo chiusura elementi di tipo Strada e Building
 * matrix = Pointer to the game's field
 * follower = Pointer to one follower of the global array variable
 * return ?
 */
int walk(card_t *matrix, follower_t *fw); //Funzione ricorsiva che controllo tessera per tessera calcolando punteggi e aggiungendo richieste

/* Controllo chiusura elementi di tipo Dipartimento
 * matrix = Pointer to the game's field
 * follower = Pointer to one follower of the global array variable
 */
int checkDep(card_t *matrix, follower_t *fw);

/* Non so come fuunziona
 */
int getParkScore(card_t *matrix, follower_t *fw);

/* TODO: 2- Write pointer on file or position's index on the array?
 */
void addReq(int x, int y, int playerID, follower_t *follower);

#endif
