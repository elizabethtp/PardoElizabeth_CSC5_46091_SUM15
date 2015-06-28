/* 
 * File:   Savitch_8thEd_Chap1_Proj5.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: Homework, Project 5: onto the zombie portion of Plants versus Zombies 2: Garden Warfare
 * Created on June 27, 2015, 10:42 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Global Constants

//Execution--Deploy!
int main(int argc, char** argv) {

    //Declare all the fun variables!
    
    int pcZomb, npcZomb, totZomb;
    //PC stands for playable character
    //NPC stands for non-playable character
    //There are two kinds of zombie and two kinds of plants...
    //The classes you play (PCs) and the classes you don't play (NPCs)
    
    //Output time!
    cout << " Your team starts with " << endl;
    
    cin >> pcZomb;
    
    cout << " playable Zombie characters " << endl;
    
    cout << "and ";
    
    cin >> npcZomb;
    
    cout << " non-playable Zombie characters to make a total of " << endl;
    //Calculate the total number of Zombies that will fight the plants
    totZomb = pcZomb + npcZomb;
    
    cout << totZomb
            << " Zombies on your team!" << endl;
    cout << " Take out the plants, win the game! " << endl;
    
    //Exit pursued by a bear
    
    return 0;
}

