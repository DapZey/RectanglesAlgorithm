#include <iostream>

#include "Line.h"
#include "Rectangle.h"
#include <vector>
int checkMostHits(std::vector<Line>& linesList, std::vector<Rectangle>& reclist){
  Line l;
    Line *x = l;
    for (int i = 0; i < linesList.size(); i++){
        if (linesList[i].checkHits(reclist, 0) > x->hitCount){
            x = &linesList[i];
        }
    }
    x->checkHits(reclist , 1);
    x->used = true;
    std::cout<<x->hitCount<<"\n";
    return x->hitCount;
}
int main() {
    Rectangle rectangle(0.3, 6);
    Rectangle rectangle1(1.0, 5.0);
    Rectangle rectangle2(3, 5.5);
    Rectangle rectangle3(6, 8);
    Rectangle rectangle4(0.1, 9);
    Rectangle rectangle5(7, 9);
    std::vector<Rectangle> recList;
    recList.push_back(rectangle);
    recList.push_back(rectangle1);
    recList.push_back(rectangle2);
    recList.push_back(rectangle3);
    recList.push_back(rectangle4);
    recList.push_back(rectangle5);

    std::vector<Line> linesList;
    for (int i = 0; i < recList.size(); i++){
        Line line(recList[i].start, i);
        linesList.push_back(line);
    }
    do{
        checkMostHits(linesList, recList);
    } while (checkMostHits(linesList, recList) != 0);
    return 0;
}
