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
