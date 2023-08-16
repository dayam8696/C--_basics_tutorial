//switch case statement 
#include<iostream>
using namespace std;
        int main(){
int age;
        cout<<"Enter your age "<<endl;
        cin>>age;
        switch (age)
        {
        case 12:
        cout<< "You are a kid"<< endl ;
            break;
        case 18:
        cout << "you can adult";
  break;
        case 60:
        cout <<" you are an old man ";
          break;
        default:
        cout<<"your age is not correct" ;
            break;
        }

        }