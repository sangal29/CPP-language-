//  print the program which tell the samll latter or capitall letter using type casting , && oprator and if else if condition

#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << " Enter the letter = ";
    cin >> letter;
    int number = (int)letter;

    if (number >= 65 && number <= 90)
    {
        cout << " Letter is capital ";
    }

    else if (number >= 97 && number <= 122)
    {
        cout << " letter is small ";
    }

    else
    {
        cout << " not define ";
    }

    return 0;
}


//  we also use assii value in this code we  compare the code we direct like letter >=  65 && letter < = 90
//  in we don't nee to typecast beacuse in code letter store in form of number so we irect compare the code.