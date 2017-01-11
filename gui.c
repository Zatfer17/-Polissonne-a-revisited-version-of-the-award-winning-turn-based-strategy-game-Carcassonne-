#include "gui.h"

int printMenu() {
    int choice;
    printf ("\n\n1) Change Zoom\n2) Rotate Card\n3) Insert Card\n");
    while (scanf ("%d", &choice) != 1 || choice > 3 || choice < 1) {
		fflush(stdin);
		printf ("Valore non valido, riprova!\n");
	};
	return choice;
};

/*Razer style ;) */
void printGUI(player_t *curPlay) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); //Some self-made clear screen ;)
    printf("\033[4;32m--------------------------------------------------------\033[0m\n");
    printf("\033[1;32m|   %s    |   %5d points    |   %1d followers left   |\033[0m\n", curPlay->name, curPlay->score, curPlay->follower_left);
    printf("\033[4;32m--------------------------------------------------------\033[0m\n");
};

void printCredits() {
    printf("Game realized by Fedeli Stefano & Ferrini Matteo");
    printf("Polissonne 2016");
};
