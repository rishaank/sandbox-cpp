//
//  main.cpp
//  Program2_C++
//
//  Created by Rishaan Kotian on 12/31/20.
//

#include <iostream>
using namespace std;

int main ()
{
    cout<< "Please input one number and this program will check if it is even\n";
    int e;
    cout<< "Your Number: ";
    cin >> e;
    if (e%2)
    {
        cout<< "Number is detected as odd\n";
    }
    else
    {
        cout<< "Number is detected as even\n";
    }
}
