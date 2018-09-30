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
    
    //Methods
    double getTotal();
    int getNumOfDays();
    double getCharger();
    
    void addCharge(double);
};

double PatientAccount::getCharger(){
    return this->charge;
}

double PatientAccount::getTotal(){
    return (this->numOfDays * this->dailyRate) + this->charge;
}

int PatientAccount::getNumOfDays(){
    return this->numOfDays;
}

//------------Surgeries CLASS------------

void PatientAccount::addCharge(double c){
    this->charge += c;
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

// --------------- prototypes-----------------
void displaySmenu(Surgeries ** surgeries){

    cout << "\n Please enter your surgery type: "  << endl;
    for (int i = 0 ; i < 5 ; i++){
    cout << " " << (*(surgeries + i))->getName() << endl;
    }
    }

int getSinput () {
    int stype;
    
    cin >> stype;
    
    while (stype < 1 || stype > 5){
        cout << " Please enter a number from the selection above"<< endl;
        cin >> stype;
    }
    return stype;
}

void displayMmenu(Pharmacy ** medications) {
    cout << " Please enter your medication type: "  << endl;
        for (int j = 0 ; j < 5 ; j++){
    cout << " " << (*(medications + j))->getName() << endl;
        }
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
    
    PatientAccount p;
    
    Surgeries s1("Surgery 0" , 1000);
    Surgeries s2("Surgery 1" , 2000);
    Surgeries s3("Surgery 2" , 3000);
    Surgeries s4("Surgery 3" , 4000);
    Surgeries s5("Surgery 4" , 5000);

    
    Surgeries *surgeries[5] = {&s1, &s2, &s3, &s4, &s5};
    
    Pharmacy p1("Medication 0", 75);
    Pharmacy p2("Medication 1", 100);
    Pharmacy p3("Medication 2", 90);
    Pharmacy p4("Medication 3", 110);
    Pharmacy p5("Medication 4", 65);

    
    Pharmacy *medications[5] = {&p1, &p2, &p3, &p4, &p5};

    displaySmenu(surgeries);
    
    int surgeryNum = getSinput();
    p.addCharge( (*(surgeries + surgeryNum))->getPrice() );
    cout << p.getCharger() << endl;
    
    displayMmenu(medications);
    getMinput();

    return 0;
}
