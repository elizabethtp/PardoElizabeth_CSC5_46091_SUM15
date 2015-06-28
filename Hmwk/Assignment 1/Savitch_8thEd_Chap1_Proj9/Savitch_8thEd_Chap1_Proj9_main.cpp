/* 
 * File:   Savitch_8thEd_Chap1_Proj9_main.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: To calculate, in seconds, how far an object would drop with parameters
 * Created on June 28, 2015, 11:48 AM
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
    //dstnce=1/2*GRAVITY*time*time; //Incorrect
    //dstnce=1.0f/2*GRAVITY*time*time; //Correct
    //dstnce=1/2.0f*GRAVITY*time*time //Correct
    
    dstnce=GRAVITY*time*time/2; //Correct
    cout<<"The distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    
    //Exit pursued by a bear
    return 0;
}