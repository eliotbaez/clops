#include <stdlib.h>
#include <stdio.h>

#include "clopsui.h"
#include "clops.h"

struct Player *getPlayer() {
    clear();
    refresh();
    echo();
    double re, im;

    struct Player *player = malloc(sizeof(struct Player));
    if (player == NULL)
        return NULL;

    int r;
    mvprintw(0, 0, "% -18s : ", "Player name");
    r = scanw("%31s", &player->name);
    if (r == 0) {
        free(player);
        return NULL;
    }

    printw("% -18s : ", "Initial score (Re)");
    r = scanw("%lf", &re);
    if (r == 0)
        re = 0;

    printw("% -18s : ", "Initial score (Im)");
    r = scanw("%lf", &im);
    if (r == 0)
        im = 0;

    player->score = re + j*im;
    player->scoreGoal = NoGoal;
    player->angularDistance = 0;

    noecho();
    return player;
}

void showPlayer(struct Player *p) {
    clear();
    mvprintw(0, 0, "% -17s : %s\n", "Name", p->name);
    printw("% -17s : %lf%+lfi\n", "Score", creal(p->score), cimag(p->score));
    printw("% -17s : %s\n", "Score Goal", GoalNames[p->scoreGoal]);
    printw("% -17s : %lf rad\n", "Anglular Distance", p->angularDistance);
}