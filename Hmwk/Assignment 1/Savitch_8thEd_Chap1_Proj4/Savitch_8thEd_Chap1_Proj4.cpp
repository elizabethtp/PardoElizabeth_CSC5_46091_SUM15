/* 
 * File:   Savitch_8thEd_Chap1_Proj4.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: Mod to the mod of the original PVZ2:GW project
 * Created on June 27, 2015, 10:28 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Global Constants

//Execution--Deploy!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    //This one will include more than just the pea plants this time
    //I will now introduce you to the other plant team members
    int snflwr, cactus, peaPlnt, chmpr, plntTot;
    
    cout << "Press Return after entering a number" << endl;
    
    cout << " Enter how many Sunflowers you have on your team: " << endl;
    //The sunflower is the healer of the team, meant as a back-up
    cin >> snflwr;
    
    cout << " Enter how many Cactus you have on your team: " << endl;

    cin >> cactus;
    //The cactus is the sniper of the team, meant for long-range
    
    cout << " Enter how many Pea Plants you have on your team: " << endl;
    
    cin >> peaPlnt;
    //The pea plant is the assault member of the team, meant for up-close shooting
   
    cout << "Enter how many Chompers you have on your team: " << endl;
    
    cin >> chmpr;
    //The chomper is the heavy, meant for aggro up-close assaults, wherein it eats the zombies
    
    plntTot = snflwr + cactus + peaPlnt + chmpr;
    //Result output is below
    cout << "If you have " << endl;
    cout << snflwr;
    cout << " sunflowers, " << endl;
    cout << cactus;
    cout << " cactus, " << endl;
    cout << peaPlnt;
    cout << " pea plants, and " << endl;
    cout << chmpr;
    cout << " chompers " << endl;
    cout << "you have "
            << plntTot << " plants on your team... " << endl;
    cout <<" enough to take out a few undead!" << endl;
    cout <<" Those zombies better watch out!" << endl;
    
    //Exit pursued by a bear!
    
    return 0;
}