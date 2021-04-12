/*

   Programmer’s name:   Wk5_Lab2_EricTan.cpp

   Programmer:     Eric Tan

   Date:     4/11/2021

   Version: 7.3

   Description of the program: This program uses a loop to get the sum of all integers from 1 up to the number entered.

*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    

    int row; //row position
    int column; //column position
    int space; //number of spaces to print
    

    cout << "___________________________________" << endl;
    cout << "Pattern A" << "\t   " << "Pattern B" << endl;
    cout << "___________________________________" << endl;
        
        //first triangle
        
   for (int row = 1; row <= 10; row++)                  //Sets amount of rows for both triangles
            
   {
       for (column = 1; column <= row; column++)        //sets the columns for first triangle then prints out the symbol on the next line.
           cout << "+";
            
       for (space = -8; space <= 10 - row; space++)      //creates space between first triangle and second triangle.
                    
           cout << " ";
       

       // Second triangle

       for (column = 10; column >= row; column--)      // sets columns for second triangle and prints out the symbol on the next line.
                    
           cout << "+";
           cout << endl;
          
                
   }
   {  
       cout << "___________________________________" << endl; 
   }
         return 0;
    
}