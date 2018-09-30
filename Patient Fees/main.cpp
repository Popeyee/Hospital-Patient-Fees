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

class Pharmacy{
private:
    string name;
    double price;
    
public:
    Pharmacy(string, double);
    string getName();
    double getPrice();
};

Pharmacy::Pharmacy(string n, double p){
    this->name = n;
    this->price = p;
}

string Pharmacy::getName(){
    return this->name;
}

double Pharmacy::getPrice(){
    return this->price;
}

void Displaymenu(){
    cout << "\n Please enter your surgery type: "  << endl;
    cout << " Surgery 1 "<< endl;
    cout << " Surgery 2 "<< endl;
    cout << " Surgery 3 "<< endl;
    cout << " Surgery 4 "<< endl;
    cout << " Surgery 5 "<< endl;
    int stype, mtype;
    
    cin >> stype;
    
    while (stype < 1 || stype > 5){
        cout << " Please enter a number from the selection above"<< endl;
    }
    
    cout << "\n Please enter your medication type: "  << endl;
    cout << " Medication 1 "<< endl;
    cout << " Medication 2 "<< endl;
    cout << " Medication 3 "<< endl;
    cout << " Medication 4 "<< endl;
    cout << " Medication 5 "<< endl;
    cin >> mtype;
}

int main() {
    
    Surgeries s1("Surgery 1" , 1000);
    Surgeries s2("Surgery 2" , 2000);
    Surgeries s3("Surgery 3" , 3000);
    Surgeries s4("Surgery 4" , 4000);
    Surgeries s5("Surgery 5" , 5000);

    
    Surgeries *surgeries[5] = {&s1, &s2, &s3, &s4, &s5};

    Displaymenu();

    return 0;
}
