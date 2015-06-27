/*
 * File: Gaddis 7th Edition, Chapter 2, Problem 18
 * Author: Elizabeth T. Pardo
 * Created on June 24, 2015, 7:39 PM
 * Purpose: Homework, Energy Drinks
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std; //namespace for iostream

//User Libraries

//Global Constants
const float CNVPCT=100.0f; //Conversion

//Function Prototypes

//Execution--Deploy
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned short cSurv=12467; //Number of customers surveyed
    unsigned short nEDrnks;     //Number of customers drinking 1 or more energy drinks per week
    unsigned short nCDrnks;     //Number of energy drinkers that prefer citrus flavor **author's note: ew.
    unsigned char pEDrnks=14;   //Percentage surveyed that prefer energy drinks
    unsigned char pCDrnks=64;   //Percentage of energy drinkers that prefer citrus flavor
    //Calculate number of Drinkers
    nEDrnks=cSurv*pEDrnks/CNVPCT;
    nCDrnks=nEDrnks*pCDrnks/CNVPCT;
    //Output the results
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    return 0;
}