#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string ToReplaceWord(string s, string replaceWord, string newWord);     // Function inside ReplaceWord() to replace word


int ReplaceWordFunction()
{
    char fileName[50];

    cout<<"Enter the name of the file"<<endl;  // Getting the name of the file from the user
    fflush(stdin);
    cin>>fileName;

    ifstream fin(fileName);                  
    ofstream fout("temp.txt",ios::out);
    if(!fin)                                // to check if the input file works or not
    {
        cout<<"File not found!!!"<<endl;
        return 1;
    }

    string replacedWord,newWord,Word,s;

    cout<<"Enter the word to be replaced from the file"<<endl;     //to get input which word to be replaced
    cin>>replacedWord;

    cout<<"Enter the newWord to be used to replace with original Word"<<endl;      // to get new word to replace orginal
    cin>>newWord;

    int found=0;

    while(fin>>Word)
    {

        if(Word==replacedWord)
        {

        s=ToReplaceWord(Word,replacedWord,newWord);
        fout<<s;
        int position=fin.tellg();
        if(Word[position+3]==' ')
        {
            Word[position+3]='\n';
        }
        found=1;

        }

        else
        {

            Word+=" ";
            fout<<Word;

        }
        
    }

    if(found==0)
    {
        cout<<"Word not Found in the file"<<endl;
        return 1;
    }
    else
    {
        cout<<"Word replaced Successfully"<<endl;
    }

    fout.close();
    fin.close();

    remove(fileName);                        // to remove the orginal Source file
    rename("temp.txt",fileName);          // to rename the file 

    return 0;
}

string ToReplaceWord(string s, string replaceWord,string newWord)   // Function Declaration of To Replce Word
{
    newWord+=" ";
    s=newWord;
    return s;

}
