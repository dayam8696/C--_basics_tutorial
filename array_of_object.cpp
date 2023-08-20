#include<iostream>
#include<string>
using namespace std;
class student {
    private :
    string name ;
    int  Rollnumber ;
    char grade;
    public:
    void setDeteils(void);
    void getData(void){
        cout<<"the name of the student is: "<< name<<endl;
        cout<<"the name of the student is: "<< Rollnumber<<endl;
        cout<<"the n ame of the student is: "<< grade<<endl;
    }



};
void student :: setDeteils (void){
        cout<<"Enter the name of the student"<<endl;
        cin>>name;
        cout<<"Enter the rollnumber of the student"<<endl;
        cin>>Rollnumber;
        cout<<"Enter the grade of the student"<<endl;
        cin>>grade;
        
 }
int main() {
    student dym [3];
    for (int  i = 0; i <3; i++)
    {
        cout<<" Detail of student "<<i+1<<endl<<"\n";
        dym[i].setDeteils();
    }

    for (int  i = 0; i <3; i++)
    {
        cout<<" Detail of student "<<i+1<<endl;
        dym[i].getData();
    }
    
    
}