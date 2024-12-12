// Program teel us the grade system usig if else if coditon  and && oprator 

#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << " Enter the score = ";
    cin >> score;

    if ( score  <= 20 )
    {
        cout << " GRADE E ";
    }

    else if ( score >= 21 && score <= 40)
    {
        cout << " GRADE D ";
    }

    else if ( score >= 41 && score <= 60)
    {
        cout << " GRADE C ";
    }

    else if ( score >= 61 && score <= 80)
    {
        cout << " GRADE B ";
    }

    else
    {
        cout << " GRADE A ";
    }

    return 0;
}