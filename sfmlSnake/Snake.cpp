#include "Snake.h"

bool Snake::eatApple(Apple& apple, bool isCollision) {
    if (isCollision) {
        return true;
    } else {
        return false;
    }
}
