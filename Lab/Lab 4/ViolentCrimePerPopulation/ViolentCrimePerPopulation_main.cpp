/* 
 * File:   ViolentCrimePerPopulation_main.cpp
 * Author: Elizabeth
 * Purpose: To calculate the violent crime per population, US vs. UK showdown
 * Created on June 27, 2015, 3:58 PM
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //Secondary I/O Library
using namespace std;

//User Libraries 

//Global Constants
const unsigned char CNVPT=100; //Conversion to Percentage

//Function Prototype

//Execution--Deploy!
int main(int argc, char** argv) {
    
    //Declarin' my Variables
    float USPop;    //US Population
    float USVC;      //US Violent Crime
    float UKPop;    //UK Population, not to be confused with the UK Top of the Pops
    float UKVC;     //UK Violent Crime
    float USPctg;   //US Percentage
    float UKPctg;   //UK Percentage
    
    //Initialize values from reference website
    //http://www.nationmaster.com/country-info
    //  /stats/Crime/Total-crimes#date
    USPop = 3.18e+6; //318 Million
    USVC = 1.188e+7; //11.88 Million
    UKPop = 6.4e+6; //64 Million
    UKVC = 6.52e+7; //6.52 Million
    
    //Calculate the percentage of both the US and the UK VC's versus their population
    
    USPctg = (USPop/USVC)*CNVPT;
    UKPctg = (UKPop/UKVC)*CNVPT;
    
    //Output these scary results
    
    std::cout << std:: fixed << "Percentage of Violent Crimes in the Unites States = "
            << std::setprecision(2) << USPctg << " % " << std::endl;
    //These required using the iomanip stream but it was totally worth it. Because my numbers worked.
    std::cout << std::fixed << "Percentage of Violent Crimes in the United Kingdom = "
            << std::setprecision(2)<< UKPctg << " % " << std::endl;
    
    //Exit pursued by a bear. Rawr!
    
    return 0;
}

