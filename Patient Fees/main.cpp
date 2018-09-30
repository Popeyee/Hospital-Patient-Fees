//
//  main.cpp
//  Patient Fees
//
//  Created by Ali Elalaoui on 9/30/18.
//  Copyright © 2018 Ali Elalaoui. All rights reserved.
//

#include <iostream>
using namespace std;
//------------Patien acc CLASS------------
class PatientAccount{
private:
    double charge;
    int numOfDays;

public:
    double dailyRate = 500.00;
    
//---------------Methods-------------------
    double getTotal();
    int getNumOfDays();
    
    void addCharge(double);
};

double PatientAccount::getTotal(){
    return (this->numOfDays * this->dailyRate) + this->charge;
}

int PatientAccount::getNumOfDays(){
    return this->numOfDays;
}

void PatientAccount::addCharge(double c){
    this->charge += c;
}

//------------Surgeries CLASS------------

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
//------------Pharmacy CLASS------------
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

// --------------- DISPLAY -----------------
void displaySmenu(Surgeries ** surgeries){

    cout << "\n Please enter your surgery type: "  << endl;
    for (int i = 0 ; i < 5 ; i++){
    cout << " " << (*(surgeries + i))->getName() << endl;
    }
    }

void displayMmenu(Pharmacy ** medications) {
    cout << " Please enter your medication type: "  << endl;
    for (int j = 0 ; j < 5 ; j++){
        cout << " " << (*(medications + j))->getName() << endl;
    }
}
// --------------- GET INPUT -----------------

int getSinput () {
    int stype;
    
    cin >> stype;
    
    while (stype < 1 || stype > 5){
        cout << " Please enter a number from the selection above"<< endl;
        cin >> stype;
    }
    return stype;
}

int getMinput() {
    int mtype;
    
    cin >> mtype;
    
    while (mtype < 1 || mtype > 5){
        cout << " Please enter a number from the selection above"<< endl;
        cin >> mtype;
    }
    return mtype;
    
}

int main() {
    
    Surgeries s1("Surgery 1" , 1000);
    Surgeries s2("Surgery 2" , 2000);
    Surgeries s3("Surgery 3" , 3000);
    Surgeries s4("Surgery 4" , 4000);
    Surgeries s5("Surgery 5" , 5000);

    
    Surgeries *surgeries[5] = {&s1, &s2, &s3, &s4, &s5};
    
    Pharmacy p1("Medication 1", 75);
    Pharmacy p2("Medication 2", 100);
    Pharmacy p3("Medication 3", 90);
    Pharmacy p4("Medication 4", 110);
    Pharmacy p5("Medication 5", 65);

    
    Pharmacy *medications[5] = {&p1, &p2, &p3, &p4, &p5};

    displaySmenu(surgeries);
    getSinput();
    displayMmenu(medications);
    getMinput();

    return 0;
}
