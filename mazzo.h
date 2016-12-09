#ifndef MAZZO_H
#define MAZZO_H

#include <time.h>
#include "tipi.h"

#define MAX_C 72
#define TYP_C 19


extern int next = 0; // Next card to extract


/***********
 * METHODS *
 ***********/

/* Crea Mazzo
 * ptom = Pointer to deck global array variable
 * return: 0 ok, !0 error
 */
int createDeck(card_t *ptom);

/* Carica Mazzo da File
 * ptom = Pointer to deck global array variable
 * return: 0 ok, !0 error
 */
int loadDeck(card_t *ptom, /*Filename?*/);

/* Salva Array on File
 * ptom = Pointer to deck global array variable
 * return: 0 ok, !0 error
 */
int saveDeck(card_t *ptom);

#endif
