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
    while (scanf ("%d", &choice) != 1 || choice > 3 || choice < 1) {
		fflush(stdin);
		printf ("Valore non valido, riprova!\n");
	};
	return choice;
};

int main () {
    int selection; //User choices
    int i,j; // Counter for loops

    //MATRIX INITIALIZATION
    for(i = 0; i<MAX_C; i++)
        for(j = 0; j<MAX_C; j++)
            matrix[i][j]= 0;


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
    }

    while (next<MAX_C) {
        //uselfull var
        //Probabilmente in c non è possibile dichiararle qui
        bool cardSet = false;

        //Graphics & Menu
        while (!cardSet) {
            printGUI(players[next % playNum]);
            printMatrixZoom();
            //printCard() Stampa singola carta pescata
            switch (printMenu()) {
            case 1: continue; //Cambia Zoom sulla matrice
            case 2: shift(deck[next].edges,1,4); break;
            case 3: cardSet = setCard(deck[next].edges, matrix);
            }
        }
        /**
        Follower instruction
        .......
        ......
        .....
        ....
        ...
        ..
        .
        */

        next++; //pick the next card

        //Saving the game without asking
        for(i = 0; i<MAX_C; i++)
            for(j = 0; j<MAX_C; j++)
                if (matrix[i][j]==0)
                    saveCard(matrix[i][j],j,i);
        saveDeck(deck,next);
        //savePlayer();
        //saveFollower();
        //Maybe we should be merge this two methods commented

    }

  }
}
