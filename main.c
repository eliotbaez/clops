#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <curses.h>
#include <assert.h>

#include "clops.h"
#include "clopsui.h"

int main(int argc, char **argv) {
	/* ncurses boilerplate */
	initscr();
	cbreak();
	keypad(stdscr, true);
	noecho();

	clear();
	refresh();

	struct Player *player1 = NULL;
	struct Player *player2 = NULL;
	
	while (player1 == NULL) {
		player1 = getPlayer();
	}
	while (player2 == NULL) {
		player2 = getPlayer();
	}

	getch();
	clear();
	showPlayer(player1);
	refresh();

	getch();
	clear();
	showPlayer(player2);
	refresh();

	getch();
	free(player1);
	free(player2);

	endwin();
	return EXIT_SUCCESS;
}
