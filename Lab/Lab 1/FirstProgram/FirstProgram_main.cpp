    /* 
     * File:   main.cpp
     * Author: Elizabeth Pardo
     * Created on June 24, 2015, 7:03 PM
     * Purpose:  First program, second attempt.
     */
     
    //System Libraries
    #include <iostream>  //File I/O
    using namespace std; //std namespace -> iostream
     
    //User Libraries
     
    //Global constants
     
    //Function Prototypes
     
    //Execution Begins Here!
    int main(int argc, char** argv) {
        //Declare Variables Here
        float hours, rate, pay;
        //Input Values Here
        hours=40.0f;//Hours Worked Units = hours
        rate=1e1f; //Pay Rate     Units = $'s/hour
        //Process Input Here
        pay=hours*rate;//Units = $'s
        //Output Unknowns Here
        cout<<"Hours worked = "<<hours<<"(hrs)"<<endl;
        cout<<"Pay Rate     = $"<<rate<<"/(hrs)"<<endl;
        cout<<"My Paycheck  = $"<<pay<<endl;
        //Exit pursued by a bear
        return 0;
    }