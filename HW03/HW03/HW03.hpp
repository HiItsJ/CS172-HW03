//
//  HW03.hpp
//  HW03
//
//  Created by Josiah on 10/5/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

#ifndef HW03_hpp
#define HW03_hpp

#include <stdio.h>

class Fan{
private:
    int speed;
    bool on;
    double radius;
public:
    Fan();
    
    int getSpeed();
    void setSpeed(int spd);
    bool getOn();
    void setOn(bool state);
    double getRadius();
    void setRadius(int r);

};
#endif /* HW03_hpp */
