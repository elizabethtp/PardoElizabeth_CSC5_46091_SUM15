/* 
 * File:   Savitch_8thEd_Chap1_Proj10_main.cpp
 * Author: Elizabeth T Pardo
 * Purpose: To output characters in the shape of a letter
 * Purpose cont'd: In this case, I'd like to make a big ol' E instead of a C.
 * Created on June 28, 2015, 12:37 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {
    
    char anyKey;
    
    cout << "Press RETURN after entering a key " << endl;
    
    cout << "Input any key:" << endl;
    
    cin >> anyKey;
    
    cout << "Your key will create the letter E." << endl;
    
    cout << anyKey << anyKey << anyKey << endl;
    cout << anyKey << endl;
    cout << anyKey << endl;
    cout << anyKey << anyKey << anyKey << endl;
    cout << anyKey << endl;
    cout << anyKey << endl;
    cout << anyKey << anyKey << anyKey << endl;
    
    //Exit pursued by lions, tigers AND bears--oh my!
    return 0;
}

