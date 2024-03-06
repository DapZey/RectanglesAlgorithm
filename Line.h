//
// Created by benra on 3/6/2024.
//

#ifndef UNTITLED1_LINE_H
#define UNTITLED1_LINE_H
#include "Rectangle.h"
#include <vector>
#include <string>
class Line {
public:
    int hitCount = 0;
    float coordinate = 0;
    int id = 0;
    bool used = false;
    Line(float coords, int iden);
    Line();
    int checkHits(std::vector<Rectangle> &rectanglesList, int hits);
};


#endif //UNTITLED1_LINE_H
