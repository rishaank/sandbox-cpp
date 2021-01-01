//
//  main.cpp
//  My first c++ program
//
//  Created by Rishaan Kotian on 12/31/20.
//

#include <iostream>
using namespace std;

void feedback ();
int main()
{
    
    cout << "This is a basic addition program made with C++ made by Rishaan\n";
    cout << "Please type in a number to add here>> ";
    int a;
    int b;
    cin >> a;
    cout << "Please type in another number to add here>> ";
    cin >> b;
    int sum = a+b;
    cout << "The sum is " << sum;
    cout << "\n";
    feedback ();
    return 0;
    
}

void feedback ()
{
    int fs;
    cout << "Please rate your experience on a scale of one to ten: ";
    cin >> fs;
    cout << "\nThank you, you rated this basic C++ program by Rishaan at ";
    cout << fs;
    cout << "\n";
}
