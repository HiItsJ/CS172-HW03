//
//  HW03.cpp
//  HW03
//
//  Created by Josiah on 10/5/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

#include "HW03.hpp"
#include <iostream>
using namespace std;
    int speed;
    bool on;
    double radius;
Fan::Fan(){
    speed = 1;
    on = false;
    radius = 5;
}
int Fan::getSpeed(){
    return speed;
}
void Fan::setSpeed(int spd){
    speed = spd;
}
bool Fan::getOn(){
    return on;
}
void Fan::setOn(bool state){
    on = state;
}
double Fan::getRadius(){
    return radius;
}
void Fan::setRadius(int r){
    radius = r;
}