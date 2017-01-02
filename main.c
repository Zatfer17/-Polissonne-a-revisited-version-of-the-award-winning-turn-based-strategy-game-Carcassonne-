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
void printCredits() {
    printf("Game realize by Fedeli Stefano & Matteo Ferrini ");
    printf("Polissone 2016");
};
int printMenu() {
    int choice;
    printf ("\n\n1) Change Zoom\n2) Rotate Card\n3) Insert Card");
    while (scanf ("%d", &choice) != 1 || choice > 3 || choice <= 0) {
		fflush(stdin);
		printf ("Valore non valido, riprova!\n");
	};
	return choice;
};

int main () {
    int selection; //User choices
    int i; // Counter for loops


    printf(" ______      _ _\n");
    printf("(_____ \    | (_)   \n");
    printf(" _____) )__ | |_  ___  ___  ___  ____   ____\n");
    printf("|  ____/ _ \| | |/___)/___)/ _ \|  _ \ / _  )\n");
    printf("| |   | |_| | | |___ |___ | |_| | | | ( (/ / \n");
    printf("|_|    \___/|_|_(___/(___/ \___/|_| |_|\____)\n");
    printf ("\n\n\nBenvenuto, scegli cosa fare:\n1) Nuova partita\n2) Carica partita\n3) Esci");
    printf ("\nSelezione : ");
    scanf ("%d", &selection);
    switch (selection) {
    case 1:
        createDeck(deck);
        createPlayer(players);
    break;
    case 2:
        loadCards(matrix, deck);
        loadPlayer(players);
        //loadFollower();
    break;
    case 3: return 0;
    default: printf ("Non consentito!"); return 0;

    while (next<MAX_C) {

    }

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
