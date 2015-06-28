/* 
 * File:   Savitch_8thEd_Chap1_Proj2_main.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: Homework, Proj2, editing the original Pea Pod program
 * Purpose 2: To modify this project beyond hello and goodbye output and give you a taste of Plants vs. Zombies 2: Garden Warfare
 * Created on June 27, 2015, 9:54 PM
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
    
    cout << " Enter the number of pea plants your team has: " << endl;
    //Each player gets to choose a different plant to play against a zombie
    //Most players choose the pea plant
    cin >> pPlants;
    
    cout << " Enter how much ammo your pea plant starts with: " << endl;
    //All pea plants start out with the same amount of ammo, depending on the level and kind of pea plant
    cin >> pGtlng;
    //Calculate the amount of ammo per pea plant on your team
    pTotal = pGtlng * pPlants;
    //Result output is below
    cout << "If you have " << endl;
    cout << pPlants;
    cout << " pea plants on your team " << endl;
    cout << "and " << endl;
    cout << pGtlng;
    cout << " peas to shoot per pea plant, " << endl; //Here's the pay-out!
    cout << "you have "
            << pTotal << " pea bullets... enough to take out a few undead!" << endl;
    cout <<" Those zombies better watch out!" << endl;
    
    //Exit pursued by a bear!
    
    return 0;
}