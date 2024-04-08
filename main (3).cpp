/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include <vector> 
using namespace std;
 
struct Person { 
    string name; 
    int age; 
}; 
 
int main() { 
    vector<Person> people; 
    people.push_back({ "Aditya", 20 }); 
    people.push_back({ "Alfiya", 20 }); 
    cout << people[0].name << " is " << people[0].age << " years old." << endl; 
    return 0; 
} 