/* 
 * File: Gaddis, 7th Edition, Chapter 2, Problem 18 Version 2
 * Author: Elizabeth T. Pardo
 * Created on June 24, 2015, 7:49 PM
 * Purpose: 2nd version time
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned short cSurv=12467; //Number of customers surveyed
    unsigned short nEDrnks;     //Number of customers drinking 1 or more energy drinks per week
    unsigned short nCDrnks;     //Number of energy drinkers that prefer citrus flavor
    float pEDrnks=0.14f;        //Percentage surveyed that prefer energy drinks
    float pCDrnks=0.64f;        //Percentage of energy drinkers that prefer citrus flavor. Ew, still.
    //Calculate the number of Drinks
    nEDrnks=static_cast<int>(cSurv*pEDrnks);
    nCDrnks=static_cast<int>(nEDrnks*pCDrnks);
    //Output results
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    return 0;
}