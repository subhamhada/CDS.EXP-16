//subham
//entc B2
//23070123132
//experiment 16
#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age <18) {
            throw age; 
        } else {
            
            cout << "Age = " << age <<"/napproved"<< endl;
        }
    } catch (int a) {
        cout << "ERROR :Underage! " << a << endl;
    }

    return 0;
}