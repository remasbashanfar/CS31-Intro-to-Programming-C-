//
//  FrequentFlyerAccount.cpp
//  Project 5
//
//  Created by Remas Bashanfar on 2/25/21.
//
#include <iostream>
#include <string>
#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"
using namespace std;

//if from and to isnt empty and take mileage, then subtract mileage from total balance and set cost to 0 and return true
bool FrequentFlyerAccount::freeFlight ( string from ,  string to , double mileage, PlaneFlight& flight){
    if ( FrequentFlyerAccount::canEarnFreeFlight(mileage) && from !="" && to !="" && from != to ){
        mBalance -=mileage;
        flight.setCost(0);
        flight.setName(mName);
        flight.setFromCity("x");//temporary
        flight.setToCity( "y");
        flight.setFromCity(from);
        flight.setToCity(to);
        flight.setMileage(mileage);
        return true;
    }
    else return false;
}

double FrequentFlyerAccount::getBalance(){
    return mBalance;
}
string FrequentFlyerAccount::getName(){
    return mName;
}

FrequentFlyerAccount::FrequentFlyerAccount ( string name){
     mName= name;
}
//if names are equal, the location from and to is not equal, and cost is not free (greater than 0) then true
bool FrequentFlyerAccount::addFlightToAccount( PlaneFlight flight){
    bool addflight( false);
    if ( flight.getName() == mName && flight.getFromCity() != flight.getToCity() && flight.getCost() > 0){
        addflight= true;
        mBalance= mBalance+ flight.getMileage();
    }
     return addflight;
}

//if mileage is greater than 0 and balance is greater than or equal mileage
bool FrequentFlyerAccount::canEarnFreeFlight ( double mileage){
    bool canearn (false);
    if ( mBalance >= mileage && mileage > 0){
        //mBalance= mBalance - mileage;
        canearn= true;
    }
     return canearn;
    
}



