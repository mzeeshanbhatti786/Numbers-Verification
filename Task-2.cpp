#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter your number"<<endl;
    cin >>number;
    if (number < 0)
    {
        cout << "Negative number";
    }
    else if (number > 0)
    {
        cout << "Positive number";
    }
    else
    {
        cout << "zero";
    }

    return 0;
}