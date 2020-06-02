#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Resume
{
    public:

    virtual  void CandidateName(string Name,string collegeName,int RollNo)
    {
         cout<<"Unknown Person"<<endl;
    }

    virtual string CandidateResume(ifstream &copy)=0;
};

class Microsoft:public Resume
{
    public:

    void CandidateName(string Name,string collegeName,int RollNo)
    {
        cout<<"Name of the candidate: "<<Name<<endl;
        cout<<"College Name: "<<collegeName<<endl;
        cout<<"RollNo: "<<RollNo<<endl;
    }

    string CandidateResume(ifstream &copy)
    {
         return "Your Resume has been submitted will be contacted for the interviews";
    }

};

int main(void)
{
    Resume *student =new Microsoft();
    string Name,collegeName;
    int  RollNo;

    cout<<"Enter the Name of the candidate:"<<endl;
    cin>>Name;
    cout<<"Enter your college Name"<<endl;
    cin>>collegeName;
    cout<<"Enter your RollNo"<<endl;
    cin>>RollNo;
   
    r:
    cout<<"Browse Your file"<<endl;
     cout<<"1. Desktop"<<endl;
     cout<<"2. Documents"<<endl;
    cout<<"Please select one option"<<endl;
    int n;
    cin>>n;
    switch(n)
    {
        case 1:{
                        
                        cout<<"Opening Desktop"<<endl;
                        char fileName[50];
                        cout<<"Enter the file Name:"<<endl;
                        cin>>fileName;

                         ifstream copy(fileName,ios::in);
                        
                        cout<<student->CandidateResume(copy)<<endl;

                        cout<<"Thank You"<<endl;

                        break;
                      }

                      case 2:{
                          cout<<"Opening Documents"<<endl;
                        char fileName[50];
                        cout<<"Enter the file Name:"<<endl;
                        cin>>fileName;

                        ifstream copy(fileName,ios::in);
                        
                        student->CandidateResume(copy);

                        cout<<"Thank You"<<endl;

                        break;
                      }

                      default:{

                          cout<<"Wrong option!!Try again"<<endl;
                          goto r;
                      }
    }
        
}