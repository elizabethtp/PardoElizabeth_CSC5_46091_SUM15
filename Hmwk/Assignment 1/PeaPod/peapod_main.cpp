/* 
 * File:   Savitch, 8th Edition, Practice Sample, Pg. 20, Chapter 1
 * Author: Elizabeth T. Pardo
 * Purpose: to use a sample C++ program from Savitch to practice
 * Created on June 27, 2015, 3:08 PM
 */

//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    int podNum, podPeas, pTotal; //Defining my variables in shorter strings than Savitch
    
    cout << "Press Return after entering a number" << endl; //I don't like the slash-n for ending
    
    cout << "Enter the number of pods: " << endl;
    
    cin >> podNum;
    
    cout << "Enter the number of peas in a pod:" << endl;
    cin >> podPeas;
    //Calculate the total number of peas
    pTotal = podNum * podPeas;
    //Result output is below
    cout << "If you have " << endl;
    cout << podNum;
    cout << " pea pods " << endl;
    cout << " and "; //still refuse to use slash-n. I think it's cluttered and ugly
    cout << podPeas;
    cout << " peas in each pod, then " << endl; //Here's the pay-out!
    cout << "you have " << endl;
    cout << pTotal;
    cout << " peas in all of the pods" << endl;
    
    return 0;
}

