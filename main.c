#include <stdio.h>
#include "mazzo.h"
#include "follower.h"
#include "player.h"
#include "gui.h"


/**************
 * Global Var *
 **************/

card_t deck[MAX_C];
card_t *matrix[MAX_C][MAX_C];
player_t players[MAX_PLAY]; //forse meglio non definire MAX_PLAY come costante ma usare il valore acquisito da terminale (Non possibile in C)
follower_t follwers[MAX_PLAY*8];


/****************
 * Test Methods *
 ****************/

void printDeck() {
	printf("\n******prova******");
	int i;
	for (i=0;i<1;i++) {
		printf ("\nprova %d : %d %d %d %d %d\n", i, deck[i].edges[0], deck[i].edges[1], deck[i].edges[2], deck[i].edges[3], deck[i].wifi);
	}
}

void printPlayer() {
	printf("\n******prova******");
	int i;
	for (i=0;i<MAX_PLAY;i++) {
		printf ("\nprova %d: %c %d\n", i, players[i].symbol, players[i].follower_left);
    }
}

int main () {
    int selection; //User choices
    int i,j; // Counter for loops

    //MATRIX INITIALIZATION
    for(i = 0; i<MAX_C; i++)
        for(j = 0; j<MAX_C; j++)
            matrix[i][j]= 0;

    printf("\a\n");     //pretty starting sound
    printf("\033[1;35m ______      _ _\n");
    printf("\033[1;35m(_____ \\    | (_)   \n");
    printf("\033[1;35m _____) )__ | |_  ___  ___  ___  ____   ____\n");
    printf("\033[1;35m|  ____/ _ \\| | |/___)/___)/ _ \\|  _ \\ / _  )\n");
    printf("\033[1;35m| |   | |_| | | |___ |___ | |_| | | | ( (/ / \n");
    printf("\033[1;35m|_|    \\___/|_|_(___/(___/ \\___/|_| |_|\\____)\033[0m\n");
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
        //loadPlayer(players);
        //loadFollower();
    break;
    case 3: return 0;
    default: printf ("Non consentito!"); return 0;
    }

    //MANCA LA PRIMA CARTA
    //printDeck();
    //printPlayer();

    while (next<MAX_C) {
        //uselfull var
        //Probabilmente in c non e' possibile dichiararle qui
        boolean cardSet = FALSE;

        //Graphics & Menu
        while (!cardSet) {
        	printDeck();
            printGUI(&players[(next % playNum)]);
            //printMatrixZoom();
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
