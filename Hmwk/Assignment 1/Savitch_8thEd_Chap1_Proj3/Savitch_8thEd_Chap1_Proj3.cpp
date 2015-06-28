/* 
 * File:   Savitch_8thEd_Chap1_Proj3.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: To Modify the PVZ2:GW project 
 * Created on June 27, 2015, 10:17 PM
 */
//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    
    int pPlants, pGtlng, pTotal;
    
    cout << "Press Return after entering a number" << endl;
    
    cout << " Enter how much ammo you have in total: " << endl;
    //The mod for this is going to be a division instead of a multiplication of ammo
    cin >> pGtlng;
    //The int is called pGtlng because the pea plant starts off with a gatling pea shooter, which later gets modified
    cout << " Enter how many pea plants you have on your team in total: " << endl;

    cin >> pPlants;
    //Calculate the amount of ammo per pea plant on your team
    pTotal = pGtlng / pPlants;
    //Result output is below
    cout << "If you have " << endl;
    cout << pGtlng;
    cout << " ammo in total for your pea plants " << endl;
    cout << "and " << endl;
    cout << pPlants;
    cout << " pea plants on your team, " << endl; //Here's the pay-out!
    cout << "you have "
            << pTotal << " pea bullets per pea plant... " << endl;
    cout <<" enough to take out a few undead!" << endl;
    cout <<" Those zombies better watch out!" << endl;
    
    //Exit pursued by a bear!
    
    return 0;
}