//
//  main.cpp
//  HW03
//
//  Created by Josiah on 10/5/16.
//  Copyright © 2016 Josiah. All rights reserved.
//

#include <iostream>
#include "HW03.cpp"

int main(){
    Fan fan1, fan2;
    
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.setOn(true);
    
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.setOn(false);
    
    string status1;
    string status2;
    
    if (fan1.getOn()){
        status1 = "On";
    }
    else{
        status1 = "Off";
    }
    if (fan2.getOn()){
        status2 = "On";
    }
    else{
        status2 = "Off";
    }
    
    cout<<"First Fan:\nSpeed - "<<fan1.getSpeed()<<"\nRadius - "<<fan1.getRadius()<<"\nStatus - "<<status1<<"\nSecond Fan:\nSpeed - "<<fan2.getSpeed()<<"\nRadius - "<<fan2.getRadius()<<"\nStatus - "<<status2<<endl;
}