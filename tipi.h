#ifndef TIPI_H
#define TIPI_H
#define N 4


typedef enum {FALSE,TRUE} campus_t, wifi_t;

typedef struct {
	int lati[N];
	campus_t campus; //presenza campus centro
	wifi_t wifi; //presenza wifi
} carta_t;

#endif

