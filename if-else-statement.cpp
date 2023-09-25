#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the entered age is valid (positive integer)
    if (age <= 0) {
        cout << "Invalid age. Age must be a positive integer." << endl;
    }
    else if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible for voting. You are a minor." << endl;
    }

    return 0;
}
