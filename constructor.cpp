#include<iostream>
#include<string>
using namespace std;
class student {
    private :
    string name ;
    int  Rollnumber ;
    char grade;
    public:
    student(string n , int roll , char g){
        this->name = n;
        this ->Rollnumber=roll;
        this->grade=g;}
    
    void getData(){
        cout<<"the name of the student is: "<< name<<endl;
        cout<<"the name of the student is: "<< Rollnumber<<endl;
        cout<<"the name of the student is: "<< grade;
        }


    ~student(){
        cout<<"distructor called"<<endl;
    }
    };





int main() {
    student dym ("Dayam " , 61, 'A');
     dym.getData();

}