/* 
 * File:   gas_gallon_calc.cpp
 * Author: Elizabeth
 * Purpose: Calculate the cost of a gallon of gas, given the numbers by Doc Lehr
 * Created on June 27, 2015, 5:01 PM
 */

//Global Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototype

//Execution--Deploy!
int main(int argc, char** argv) {

    //Declare them Variables
    //Initialize them Values from Doc Lehr's BB
    //Be depressed at the cost of a freaking gallon of gas
    float fedTax=0.18f; //Fed tax $'s
    float caTax=0.36f;  //CA Tax $'s
    float slsTax=0.08f; //CA Sales Tax $'s
    float galGas=3.69f; //Gallon of gas $'s with all tax included
    float gasNoTax;     //Gallon of gas without any ol' tax at all
    
    //Calculate the percentage of cost, minus the taxes
    //Cuz I'm the tax man, baby.
    
    gasNoTax = (galGas)-(galGas*fedTax)-(galGas*caTax)-(galGas*slsTax);
    
    //Output the depressing results
    
    cout<<"The cost of a gallon of gas without any tax = "
            << " $" << gasNoTax << endl;
    cout<<"What kind of nonsensical BS is this?" << endl;
    
    //Exit pursued by a bear
    
    return 0;
}

