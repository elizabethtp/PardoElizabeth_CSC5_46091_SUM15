/* 
 * File:   Savitch, 9th Edition, Chapter 1, Problem 4 ProgProj
 * Author: Elizabeth T. Pardo
 * Purpose: Homework, Savitch
 * Created on June 24, 2015, 8:02 PM
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries

//Global Constants
const float GRAVITY=3.2174e1f; //Acceleration due to Gravity of the Earth (ft/sec^2)

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {
    //Declare Variables
    //dstnce=The Distance Dropped in (ft)
    //time=Time in (secs)
    float dstnce, time;
    //Prompt, then Input Time
    cout<<"To calculate the distance dropped\n";
    cout<<"One must input the Time in Seconds"<<endl;
    cout<<"Time should be in floating point format\n";
    cin>>time;
    //Calculate free-fall distance.
    //Might be tempted to sing that Tom Petty & The Heartbreakers song
    //Do it. You should. It's a great song.
    //dstnce=1/2*GRAVITY*time*time; //Incorrect
    //dstnce=1.0f/2*GRAVITY*time*time; //Correct
    //There's a freeway, running through the yard.
    //dstnce=1/2.0f*GRAVITY*time*time //Correct
    dstnce=GRAVITY*time*time/2; //Correct
    //Oh sorry. Output time
    cout<<"The distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit pursued by a bear
    return 0;
}