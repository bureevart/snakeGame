#ifndef SFMLSNAKE_SNAKE_H
#define SFMLSNAKE_SNAKE_H


#include "Apple.h"

class Snake {
    int sizeX;
    int sizeY;

public:
    bool eatApple(Apple& apple, bool);

};


#endif //SFMLSNAKE_SNAKE_H
