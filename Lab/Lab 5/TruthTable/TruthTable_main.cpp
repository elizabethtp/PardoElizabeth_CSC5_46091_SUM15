/* 
 * File:   TruthTable_main.cpp
 * Author: Elizabeth T. Pardo
 * Purpose: To get the truth, the whole truth and nothing but the truth, according to the table from class.
 * Created on June 30, 2015, 6:58 PM
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution--Deploy!
int main(int argc, char** argv) {
    
    //Declare variables
    bool x,y;
    
    //Output the heading of the table
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y ";
    cout<<"(X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Row 1 output
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'F':'F')<<"  ";
    cout<<(!y?'F':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'F':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'F':'F')<<"        ";
    cout<<(!x||!y?'F':'F')<<"        ";
    cout<<(!(x||y)?'F':'F')<<"      ";
    cout<<(!x&&!y?'F':'F')<<"      "<<endl;
    
    
    //Row 2 output
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'F':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'F':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'F':'F')<<"      ";
    cout<<(!x&&!y?'F':'F')<<"      "<<endl;
    
    //Row 3 output
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'F':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'F':'F')<<"        ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'F':'F')<<"      ";
    cout<<(!x&&!y?'F':'F')<<"      "<<endl;
    
    //Row 4 output
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'T')<<"  ";
    cout<<(!y?'T':'T')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'F':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"     ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'T')<<"        ";
    cout<<(!x||!y?'T':'T')<<"        ";
    cout<<(!(x||y)?'T':'T')<<"      ";
    cout<<(!x&&!y?'T':'T')<<"      "<<endl;
    
    //I'd like to thank Spotify for finally adding AC/DC to its music.
    //Without Hell's Bells, I may not have gotten through this.
    //Exit to "Rock and Roll Ain't Noise Pollution"
    
    return 0;
}