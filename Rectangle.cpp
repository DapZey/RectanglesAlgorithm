//
// Created by benra on 3/6/2024.
//

#include "Rectangle.h"
Rectangle::Rectangle(float start, float end) {
    this->start = start;
    this->end = end;
}
bool Rectangle::checkHit(float line, int hits) {
    if (!hit) {
        if (line >= start && line <= end) {
            if (hits == 1) {
                hit = true;
            }
            return true;
        }
    }
    return false;
}