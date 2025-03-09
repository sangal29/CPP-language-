

// program to find the persen is capable for vote or note using if else conditon ..
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age = ";
    cin >> age;
    if (18 <= age)
    {
        cout << " person is capable for vote ";
    }
    else
    {
        cout << "person is not capable for vote ";
    }

    return 0;
}
