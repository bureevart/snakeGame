#include <iostream>
#include "Apple.h"
#include "Snake.h"

int main() {
    Apple apple(100, "red");
    Snake snake;

    cout << snake.eatApple(apple, true);
    return 0;
}
