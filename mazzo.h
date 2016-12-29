#ifndef MAZZO_H
#define MAZZO_H

#include <time.h>
#include <stdio.h>
#include "tipi.h"

#define MAX_C 72
#define TYP_C 19


extern int next; // Next card to extract


/***********
 * METHODS *
 ***********/

/* Crea Mazzo
 * ptom = Pointer to deck global array variable
 * return: 0 ok, !0 error
 */
int createDeck(card_t *ptom);

/* Carica Mazzo da File e crea la matrice associata
 * ptom = Pointer to deck global array variable
 * matrix = Pointer to the grid of the game
 * return: 0 ok, !0 error
 */
int loadCards(card_t *matrix[MAX_C][MAX_C], card_t *ptom);

/* Salva singola carta su file. Per carte già posizionate con coordinate
 * ptoc = Pointer to one card already positioned on the grid
 * x,y = coordinates
 * return: 0 ok, !0 error
 */
int saveCard(card_t *ptoc, int x, int y);

/* Salva un determinato numero di carte su file senza coordinate
 * ptom = Pointer to deck global array variable
 * index = INdex of the first card to put on the file
 * return: 0 ok, !0 error
 */
int saveDeck(card_t *ptom, int index);

#endif
