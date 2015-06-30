/* 
 * File:   ViolentCrimePerPopulation_main.cpp
 * Author: Elizabeth
 * Purpose: To calculate the violent crime per population, US vs. UK showdown
 * Created on June 27, 2015, 3:58 PM
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
using namespace std;
 
//User Libraries
 
//Global Constants
const char CNVPCT=100;//Conversion to a percentage
 
//Function Prototypes
 
//Execution--Deploy!
int main() {
 
	//Declare Variables and Initialize according to the reference
	float nUSVlnc =  11.88f;//US Violent Crimes in 10^6 million crimes
	float nUKVlnc =   6.52f;//England Violent Crimes in 10^6 million crimes
	float USPop   = 318.00f;//US Population in millions
	float UKPop   =  64.00f;//English Population in millions
	float pUSVlnc,pUKVlnc;  //Percentage of violence in both cultures
 
    //Calculate the Percentages
    pUSVlnc=nUSVlnc/USPop*CNVPCT;//Simple Percentage of US Violence
    pUKVlnc=nUKVlnc/UKPop*CNVPCT;//Simple Percentage of UK Violence
 
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The US has "<<nUSVlnc<<" million violent crimes which is ";
    cout<<pUSVlnc<<" % of the population"<<endl;
    cout<<"The UK has "<<nUKVlnc<<" million violent crimes which is ";
    cout<<pUKVlnc<<" % of the population"<<endl;
    cout<<"Though there are "<<nUSVlnc/nUKVlnc;
    cout<<" times the violent crimes in America,"<<endl;
    cout<<"by comparison there is "<<pUKVlnc/pUSVlnc;
    cout<<" times more violence in the UK given the population"<<endl;
 
    //Exit stage right!
	return 0;
}