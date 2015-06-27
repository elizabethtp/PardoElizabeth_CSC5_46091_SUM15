/* 
 * File:   Military Spending
 * Author: Elizabeth T. Pardo
 * Purpose: Calculate federal budget for the military
 * Created on June 24, 2015, 8:22 PM
 */

#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries

//Global Constants

const unsigned char CNVPCT=100; //Conversion to Percentage

//Function Prototype

//Execution--deploy!

int main(int argc, char** argv) {
    
    //Declare Variables
    float fedBudg;  //Federal Budget in $'s
    float milBudg;  //Military Budget in $'s
    float milPctg;  //Percentage of federal spending on military
    
        //Initialize values from reference website
        //https://www.whitehouse.gov/sites/default/files
        // /omb/budget/fy2015/assets/tables.pdf
    fedBudg = 3.80e12f; //3.800 trillion dollars
    milBudg = 6.06e11f; //0.606 trillion dollars or 606 billion dollars
    
    //Calculate the percentage of the Federal Budget
    milPctg = (milBudg/fedBudg)*CNVPCT;
    
    //Output or putput, depending on if you are driving a golf cart
    cout << "Percentage of the Federal Budget spent on the Military = "
         << milPctg << " % " << endl;
    
    //Exit pursued by a bear
    return 0;
}

