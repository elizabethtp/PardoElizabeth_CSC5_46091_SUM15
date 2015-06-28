/* 
 * File:   Savitch_8thEd_Chap1_Proj8_main.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: Project 8, wherein I try to calculate numbers as a liberal arts major
 * Created on June 27, 2015, 8:54 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

const float QTRS=0.25f;
const float DMS=0.10f;
const float NCKS=0.05f;

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {

    //Declare Variables
    
    float qAmt, dAmt, nAmt, totQAmt, totDAmt, totNAmt, totAmt; //User-defined variables and totals
    
    //Output our results
    
    cout << "Press ENTER after entering a number " << endl;
    
    cout << "Enter the number of quarters: " << endl;
    
    cin >> qAmt;
    
    //Calculate the total cost of quarters
    totQAmt = qAmt * QTRS;
    
    cout <<"You have $ "
            << totQAmt << " in quarters " << endl;
    
    cout << "Enter the number of dimes: " << endl;
    
    cin >> dAmt;
    
    //Calculate the total cost of dimes
    totDAmt = dAmt * DMS;
    
    cout <<"You have $ "
            << totDAmt << " in dimes " << endl;
    
    cout <<"Enter the number of nickels: " << endl;
    
    cin >> nAmt;
    
    //Calculate the total cost of nickels
    totNAmt = nAmt * NCKS;
    
    cout <<"You have $ "
            << totNAmt << " in nickels " << endl;
    
    //Calculate the total because I'm cool like that
    totAmt = totQAmt + totDAmt + totNAmt;
    
    cout <<"Your TOTAL AMOUNT is $  " << totAmt << endl;
    
    //Exit, pursued by hungry, hungry hippos
    
    return 0;
}

