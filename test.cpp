#include <iostream>
#include <cmath>

using namespace std;
int main () {
    //variables
    string Name ="jules";
    int Age = 18;
    cout << "hello i am "<<Name<< " and i am "<< Age <<" years old" << endl;
    //datatypes zelfde als c#

    //cout << pow(2,5) << endl ;

    //getting input from user

   /*int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << age;*/

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "hello " << name;
    
    return 0;

}