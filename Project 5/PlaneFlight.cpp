//
//  PlaneFlight.cpp
//  Project 5
//
//  Created by Remas Bashanfar on 2/25/21.
//
#include <iostream>
#include <string>
#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"
using namespace std;

//Function, set all values
PlaneFlight::PlaneFlight ( string passengerName, string fromCity, string toCity, double cost, double mileage){

     mName= passengerName;
     mFromCity= fromCity;
     mToCity= toCity;
     mCost= cost;
     mMileage= mileage;
}

void PlaneFlight::setCost( double cost){
    mCost = cost;
}

double PlaneFlight::getCost(){
    if ( mCost < 0){
        return -1;
    }
    return(mCost);
}
//condition: name cant be empty
void PlaneFlight::setName( string name){
    
    if ( name != ""){
        mName = name;
    }
}
string PlaneFlight::getName(){
        return mName;
}
void PlaneFlight::setMileage( double mileage){
    mMileage = mileage;
}
//condition: mileage cant be less than 0, if that happens, return -1
double PlaneFlight::getMileage(){
    if ( mMileage < 0){
        return -1;
    }
    return( mMileage);
}
//from cant be empty and cant be equal to "to"
void PlaneFlight::setFromCity ( string from){
    if (from != ""){
    if ( from != mToCity){
        mFromCity= from;
        }
    }
}

string PlaneFlight::getFromCity(){
    return( mFromCity);
}
//to cant be empty and cant be equal to "from"
void PlaneFlight::setToCity ( string to){
    if (to != ""){
        if (to != mFromCity){
            mToCity= to;
        }
         
    }
}

string PlaneFlight::getToCity(){
    return( mToCity);
}



