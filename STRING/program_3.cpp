// a program of reverse of string using swap function and tell the size of the string 

#include <iostream>
#include <string>
using namespace std;
int main()
{
string s = " sangal ";
int start = 0; 
int end = s.size() - 1 ;
while ( start < end)
{
    swap(s[start++],s[end--]);

}
cout<< s <<endl; 
cout << s.size();
return 0;
}