//
//  main.cpp
//  Patient Fees
//
//  Created by Ali Elalaoui on 9/30/18.
//  Copyright © 2018 Ali Elalaoui. All rights reserved.
//

#include <iostream>
using namespace std;

class PatientAccount{
private:
    double total;
    int numOfDays;

public:
    double dailyRate;
    
    //Methods
    double getTotal();
    int getNumOfDays();
};

double PatientAccount::getTotal(){
    return this->total;
}

int PatientAccount::getNumOfDays(){
    return this->numOfDays;
}

int main() {
  
    return 0;
}
