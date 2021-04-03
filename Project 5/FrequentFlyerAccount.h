//
//  FrequentFlyerAccount.h
//  Project 5
//
//  Created by Remas Bashanfar on 2/25/21.
//

#ifndef FrequentFlyerAccount_h
#define FrequentFlyerAccount_h
#include <iostream>
#include <string>
#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"
using namespace std;

class FrequentFlyerAccount{
    private:
    string mName;
    double mBalance= 0.000000;
    public:
    FrequentFlyerAccount ( string name);
    
    double getBalance();
    string getName();
    bool addFlightToAccount( PlaneFlight flight);
    bool canEarnFreeFlight ( double mileage);
    bool freeFlight ( string from, string to, double mileage, PlaneFlight& flight);
    
};
 
#endif /* FrequentFlyerAccount_h */
