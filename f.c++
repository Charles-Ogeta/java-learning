#include <iostream>

using namespace std;
int globalVar = 10;

void displayScopes() {
    int localVar = 20;  

    cout << "Inside displayScopes():" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
}

int main() {
    displayScopes();

    return 0;
}

