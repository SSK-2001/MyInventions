#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int  SearchWord()

{

    char fileName[50];

    cout<<"Enter the name of the file"<<endl;

      fflush(stdin);

    cin.getline(fileName,50);     //Getting the input from the user for fileName similar to(cin>>FileName)

    ifstream fin(fileName,ios::in);  // Creating a input stream 
    if(!fin)                         // Checking if input file is opening or not
    {
        cout<<"File Not found!!"<<endl;
        return 1;
    }

    string WordToBeSearched;

    cout<<"Enter the word to be searched in your Text file"<<endl;

    cin>>WordToBeSearched;

    string getString; // will take the string from the file

    int found=0;

    while(!fin.eof())
    {
         fin>>getString;   // getting the string from the file

         if(getString==WordToBeSearched)                 // Searching the word
         {
             cout<<"Word Searched Succeessfully"<<endl;
             found=1;
             break;
         }
    }

    if(found==0)          // to check if the word exists in the file or not
     {
         cout<<"Word not found in the given file"<<endl;
         return 1;
     }

     fin.close();
     return 0;
}


