#ifndef CLOPS_H
#define CLOPS_H

#include <complex.h>
#undef I
#define j _Complex_I

enum Goals {
    NoGoal,
    LargeReal,
    SmallReal,
    LargeImaginary,
    SmallImaginary,
    LargeMagnitude,
    SmallMagnitude,
    MostRotations
};

extern const char *GoalNames[8];

struct Player {
    char name[32];
    double _Complex score;
    int scoreGoal;
    double angularDistance;
};

#endif /* CLOPS_H */
