#include <iostream>
using namespace std;

int main() {
    int studentCode, taskVarCount;

    // Take user input for studentCode and taskVarCount
    cout << "Enter Student Code: ";
    cin >> studentCode;
    cout << "Enter Task Variable Count: ";
    cin >> taskVarCount;

    // Calculate and display the result of studentCode % taskVarCount
    cout << "Result: " << studentCode % taskVarCount << endl;
    
    

    return 0;
}
