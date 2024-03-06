//
// Created by benra on 3/6/2024.
//

#include "Line.h"
Line::Line(float coords, int iden) {
    id = iden;
    coordinate = coords;
}
Line::Line() {}
int Line::checkHits(std::vector<Rectangle>& rectanglesList, int hits) {
    int counter = 0;
    if (!used){
        for (int i = 0; i < rectanglesList.size(); i++){
            if (rectanglesList[i].checkHit(coordinate,hits)){
                counter++;
            }
        }
    }
    hitCount = counter;
    return counter;
}