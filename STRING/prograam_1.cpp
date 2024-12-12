#include<iostream>
#include <string>
using namespace std;
int main()
{
    string str = "RISHABH SANGAL";
    cout << str <<endl;

    string str2 = "risShabhSangal";
    str2 = "heloo";
    cout << str2 << endl;
    string str3 = str2  + str;
    cout<< str3 << endl;
    cout <<(str == str2) << endl;

    return 0;
}