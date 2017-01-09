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
		ptop[i].symbol = 2+i;
		ptop[i].follower_left = 8;
		ptop[i].score = 0;
		i++;
	}
	return 0;
}


void rverseArray(int vett[N], int start, int end) {
    int temp;
    while (start < end) {
        temp = vett[start];
        vett[start] = vett[end];
        vett[end] = temp;
        start++; end--;
    }
}
int shift(int vett[N], int index, int dim) {
    rverseArray(vett,0,index-1);
    rverseArray(vett,index,dim-1);
    rverseArray(vett,0,dim-1);
}

bool checkFit(card_t* newCard, card_t* check, int elem){
    return (newCard->edges[elem] == check->edges[(elem+2)%5]) ? true : false;
}
bool setCard(int element[N], card_t *matrix[MAX_C][MAX_C]) {
    int i, x,y;

    printf ("\nInserisci le coodinate dove verrà posizionata la carta\n);
    printf ("Rispetta il formato (x,y)\n");
    printf ("Per tornare al menu precedente inserisci -1,-1\n");
    printf ("La tua scelta: ");
    while (scanf ("%d,%d",&x,&y) != 1 || (x<-1 && y<-1) || (x>72 && y>72)) {
		fflush(stdin);
		printf ("Valore non valido, riprova!\n");
	};
    if (x==-1 || y==-1) { return false; }

    //Looping this is better but I don't know how to do it
    if( checkFit(element[0],matrix[x+0][y-1],0) && //Check if TOP fit
        checkFit(element[1],matrix[x+1][y+0],1) && //Check if RIGHT fit
        checkFit(element[2],matrix[x+0][y+1],2) && //Check if DOWN fit
        checkFit(element[3],matrix[x-1][y+0],3)    //Check if LEFT fit
    )    { return true; }
    else { return false; }
}

void printGUI(player_t *curPlay) {
    printf("\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n") //Some self-made clear screen ;)
    printf(" --------------------------------------------------------");
    printf("| %s | %5d points | %1d followeras left |", curPlay->name, curPlay->score, curPlay->follower_left);
    printf(" --------------------------------------------------------");
}
