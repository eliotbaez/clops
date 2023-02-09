#include <stdlib.h>

#include "clopsui.h"
#include "clops.h"

struct Player *getPlayer() {
    echo();
    double re, im;

    struct Player *player = malloc(sizeof(struct Player));
    if (player == NULL)
        return NULL;

    mvprintw(0, 0, "% -18s : ", "Player name");
    scanw("%31s", &player->name);

    printw("% -18s : ", "Initial score (Re)");
    scanw("%lf", &re);

    printw("% -18s : ", "Initial score (Im)");
    scanw("%lf", &im);

    player->score = re + j*im;
    player->scoreGoal = NoGoal;
    player->angularDistance = 0;
    player->angularDisplacement = 0;

    noecho();
    return player;
}