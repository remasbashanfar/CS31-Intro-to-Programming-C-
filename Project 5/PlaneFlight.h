//
//  PlaneFlight.h
//  Project 5
//
//  Created by Remas Bashanfar on 2/25/21.
//

#ifndef PlaneFlight_h
#define PlaneFlight_h
#include <iostream>
#include <string>
using namespace std;

class PlaneFlight{
private:
    double mCost= 0.000000;
    string mFromCity= "?from?";
    string mToCity="?to?";
    string mName="?name?";
    double mMileage= 0.000000;
    
public:
    PlaneFlight ( string passengerName, string fromCity, string toCity, double cost, double mileage);
    
    //GETTERS
    double getCost();
    double getMileage();
    string getName();
    string getFromCity();
    string getToCity();
    
    //SETTERS
    void setCost( double cost);
    void setMileage( double mileage);
    void setName( string name);
    void setFromCity ( string from);
    void setToCity ( string to);
    
};


#endif /* PlaneFlight_h */
