#include <iostream>
using namespace std;
class Empolyee
{
    int id;
    static int count;

public:
    void setid(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void despid(void)
    {
        cout << "The id of empolyee is " << id << " and the number is " << count << endl;
    }
    static void getcount()
    {
        cout << "Count is :" << count << endl;
    }
};
int Empolyee::count;
int main()
{
    Empolyee dayam, ayan, abuzar;
    dayam.setid();
    dayam.despid();
    Empolyee::getcount();

    ayan.setid();
    ayan.despid();
    Empolyee::getcount();
    
    abuzar.setid();
    abuzar.despid();
    Empolyee::getcount();
}