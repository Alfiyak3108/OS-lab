/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <vector>

#include <algorithm>
using namespace std;

int main() {

vector<int> numbers = {10, 20, 30, 40, 50};

auto it = find(numbers.begin(), numbers.end(), 30);

if (it != numbers.end()) {

cout << "Element found at index: " << distance(numbers.begin(), it) << endl;

} else {

cout << "Element not found." << endl;}

return 0;

}