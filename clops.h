#ifndef CLOPS_H
#define CLOPS_H

#include <complex.h>
#undef I
#define j _Imaginary_I

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

struct Player {
    char name[32];
    double _Complex score;
    int scoreGoal;
    double angularDistance;
    double angularDisplacement;
};

#endif /* CLOPS_H */
