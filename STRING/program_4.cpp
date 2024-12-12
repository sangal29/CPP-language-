// a program to reverse the string using stl function and in this reverse keyword is use when we include algorithem 
// other wise it show not declared error 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "Rishabh";
    reverse(str.begin(),str.end());
    cout << str << endl;
    return 0;
}