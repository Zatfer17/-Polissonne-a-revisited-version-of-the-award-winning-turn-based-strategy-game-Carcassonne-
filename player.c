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
		printf("\033[0;31mPlayer %d\033[0m inserisci il tuo nome: ", i+1);
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

boolean checkFit(int elem, card_t *check, int vicino){
	//If per puntatore = 0
    return (elem == check->edges[(vicino+2)%5]) ? TRUE : FALSE;
}
boolean setCard(int element[N], card_t *matrix[MAX_C][MAX_C]) {
    int i, x,y;

    printf ("\nInserisci le coodinate dove verra'� posizionata la carta\n");
    printf ("Rispetta il formato (x,y)\n");
    printf ("Per tornare al menu precedente inserisci -1,-1\n");
    printf ("La tua scelta: ");
    while (scanf ("%d,%d",&x,&y) != 2 || (x<-1 || y<-1) || (x>72 || y>72)) {
		fflush(stdin);
		printf ("Valore non valido, riprova!\n");
	};
    if (x==-1 || y==-1) { return FALSE; }

    //Looping this is better but I don't know how to do it
    if( checkFit(element[0],matrix[x+0][y-1],0) && //Check if TOP fit
        checkFit(element[1],matrix[x+1][y+0],1) && //Check if RIGHT fit
        checkFit(element[2],matrix[x+0][y+1],2) && //Check if DOWN fit
        checkFit(element[3],matrix[x-1][y+0],3)    //Check if LEFT fit
    )    { return TRUE; }
    else { return FALSE; }
}
