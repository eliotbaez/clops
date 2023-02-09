#ifndef CLOPS_UI_H
#define CLOPS_UI_H

#include <curses.h>
#include "clops.h"

struct Player *getPlayer();
void showPlayer(struct Player *p);

#endif /* CLOPS_UI_H */