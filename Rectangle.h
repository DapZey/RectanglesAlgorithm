//
// Created by benra on 3/6/2024.
//

#ifndef UNTITLED1_RECTANGLE_H
#define UNTITLED1_RECTANGLE_H


class Rectangle {
public:
    float start = 0;
    float end = 0;
    bool hit = false;
    Rectangle(float start, float end);
    bool checkHit(float line, int hits);
};


#endif //UNTITLED1_RECTANGLE_H
