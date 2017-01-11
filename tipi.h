#ifndef TIPI_H
#define TIPI_H

#define MAX_C 72
#define N 4

/* -- ELEMENT TYPE --*/
#define street 0
#define park 1
#define building 2

typedef enum {FALSE,TRUE} campus_t, wifi_t, boolean;

typedef struct {
	int edges[N];
	campus_t campus; //Department's presence
	wifi_t wifi; //Wifi's presence
} card_t;

typedef struct {
	char name[100]; // Basic player's information
	char symbol ;
	int follower_left; // Better a small int;
	int score; // Total game's score
} player_t;

typedef struct {

    /* TYPE:
     * 'X' Not used;
     * 'P' Paninaro
     * 'S' Studente
     * 'D' Docente
     * 'N' Nonno
    */ char type;

    /*POSITION
     * [0] X coord;
     * [1] Y coord;
     * [2] Card's edge
    */ int position[3];

    // Better a small int
    int element; // Element's type. See above (--)
    int player_id; // Position of the player on the Player's array (main variable)
    int score; // Point gained by the follower
    int molt; // It'll be usefull for performance.

} follower_t;


#endif

