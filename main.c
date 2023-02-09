#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <curses.h>

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

	struct Player *player;
	player = getPlayer();
	getch();
	free(player);

	endwin();
	return EXIT_SUCCESS;
}
