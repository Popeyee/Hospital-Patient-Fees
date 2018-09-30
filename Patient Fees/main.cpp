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

class Surgeries{
private:
    string name;
    double price;
    
public:
    Surgeries(string, double);
    
    //Methods
    string getName();
    double getPrice();
};

Surgeries::Surgeries(string n, double p){
    this->name = n;
    this->price = p;
}

string Surgeries::getName(){
    return this->name;
}

double Surgeries::getPrice(){
    return this->price;
}

int main() {
    
    Surgeries s1("abc" , 234);
    
    Surgeries *surgiers[5] = {&s1};

    cout << "\n Please enter your surgery type: "  << endl;
    cout << " Surgery 1 "<< endl;
    cout << " Surgery 2 "<< endl;
    cout << " Surgery 3 "<< endl;
    cout << " Surgery 4 "<< endl;
    cout << " Surgery 5 "<< endl;
    cout << endl;
    cout << "\n Please enter your medication type: "  << endl;
    cout << " Medication 1 "<< endl;
    cout << " Medication 2 "<< endl;
    cout << " Medication 3 "<< endl;
    cout << " Medication 4 "<< endl;
    cout << " Medication 5 "<< endl;
    

    return 0;
}
