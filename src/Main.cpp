//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <ostream>
#include <stdexcept>
#include "Stack.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Generics - Stack with templates" << endl << endl;

    try {
        Stack<int> intStack;  // stack of ints
        Stack<string> stringStack;    // stack of strings

        // manipulate int stack
        intStack.push(16);
        intStack.push(25);
        cout << "Top element in the INT stack: " << intStack.top() <<endl;

        // manipulate string stack
        stringStack.push("university");
        cout << "Top element in the STRING stack: " << stringStack.top() << std::endl;
        stringStack.pop();

    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}