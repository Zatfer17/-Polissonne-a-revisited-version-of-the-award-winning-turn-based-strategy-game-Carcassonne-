#include <stdio.h>
#include "mazzo.h"
#include "follower.h"
#include "player.h"


/**************
 * Global Var *
 **************/

card_t deck[MAX_C];
card_t *matrix[MAX_C][MAX_C];
player_t players[MAX_PLAY]; //forse meglio non definire MAX_PLAY come costante ma usare il valore acquisito da terminale (Non possibile in C)
follower_t follwers[MAX_PLAY*8];


/**********
 * Method *
 **********/
void printMenu() {};

void printCredits();


int main () {
  int selection; //User choices
  int i; // Counter for loops

  printf ("Benvenuto in Polissone, scegli cosa fare:\n1) Nuova partita\n2) Carica partita\n3) Esci");
  printf ("\nSelezione : ");
  scanf ("%d", &selection);
  switch (selection) {
    case 1: printf("%d", createDeck(deck)); createPlayer(players); break;
    case 2: //cose; break;
    case 3: return 0;
    default: printf ("Non consentito!"); return 0;

  }

  /*for (i=0;i<MAX_C;i++) {
  	printf ("%d  ", deck[i].wifi);
  }
  printf("\n");
  for (i=0;i<playNum;i++) {
  	printf ("%c ", players[i].symbol);
  }
  return 0;*/
}
