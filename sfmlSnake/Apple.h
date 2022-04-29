#ifndef SFMLSNAKE_APPLE_H
#define SFMLSNAKE_APPLE_H

#include <string>

using namespace std;

class Apple {
    int sizeX;
    int sizeY;
    int weight;
    string color;

public:
    Apple(int, string);

    friend bool eatApple(Apple& apple, bool);
};


#endif //SFMLSNAKE_APPLE_H
