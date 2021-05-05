//Program.cpp

#include <iostream>                                           //Including an Important header 

using namespace std;     

int main()                                                   //The main function
{
    string Num_In_String = "-1";
    while(true)
    {
        Num_In_String = to_string((stoi(Num_In_String))+1);   //First, converts the string to an integer and then adds 1 to it and then converts it back to a string.
        cout << (Num_In_String) << "\n";                      //Prints out the number and then goes to the next line.
        if(Num_In_String=="9")                                //If the value of the Num_In_String is "9", the loop should break.
        break;
    }
    
return NULL;
}
