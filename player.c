#include "player.h"
#include <stdio.h>

int playNum = 0;

int createPlayer(player_t ptop[MAX_PLAY]) {
    int i=0;

	printf ("Inserisci il numero di giocatori: ");

	while (scanf ("%d", &playNum) != 1 || playNum > MAX_PLAY || playNum <= 0) {
		fflush(stdin);
		printf ("Valore non valido, riprova!\n");
	};

	while (i<playNum) {
		printf("Player %d inserisci il tuo nome: ", i+1);
		scanf("%s",ptop[i].name);
		ptop[i].symbol=2+i;
		ptop[i].follower_left=8;
		ptop[i].score=0;
		i++;
	}
	return 0;
}
