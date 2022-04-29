#include "Apple.h"

Apple::Apple(int weight, string color) {
    this->weight = weight;
    this->color = color;
}

bool eatApple(Apple &apple, bool) {
    if(apple.weight) {
        return true;
    } else {
        return false;
    }
}