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
    
    int numline;
  cin >> numline;
  int j;
  int i;
  int col;
  col = 1;
  int col2;
  numline = numline - 2;
   
  for (i = 0; i < numline; i++) {
     
      for (j = 0; j < col; j++) {
        cout << "+";  
      }    
     
    cout << endl;  
    col = col + 2;
}
 
  col2 = numline;
 
  int k;
  int m;
  
 
   
   
  for (k = 0; k < numline; k++) {
     
      for (m = 0; m < col2; m++) {
        cout << "+";  
      }    
     
    cout << endl;  
    col2 = col2 - 2;
}
    //Exit pursued by lions, tigers AND bears--oh my!
    return 0;
}

