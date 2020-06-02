#include<iostream>
#include"Search_word.h"
#include"Replace_Word_Function.h"


using namespace std;

/* Name: Charan Sridhar Bhogaraju
   Date modified: 1/05/2020
   Time: 20:25 PM
   Project: File Input and Output operation(CBS1002-1010)
*/

int main(void)

{

    cout<<"OPERATION AVAILABLE IN TEXT EDITOR"<<endl<<endl;
    cout<<"1. Search a given word in the text file(of your desired file but must be a text file)"<<endl;
    cout<<"2. Replace a given word with your desired word in the text file "<<endl;
    cout<<"3. Exit"<<endl;

    r:
    cout<<"Enter your option"<<endl;  //Selecting a user operation from the following

    int option;
    cin>>option;

    switch(option)                   // creating a switch case for every option
    {
        case 1: {
                    SearchWord();
                     goto r;
                }

        case 2:{
                    ReplaceWordFunction();
                    goto r;
               }

        case 3:{
                  break;                      // Need to enter option 3 for ending the program
               }

        default:{
                    cout<<"Wrong option Entered Try again"<<endl;
                    goto r;
                }
    }

}
