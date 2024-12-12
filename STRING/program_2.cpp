#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Input the string = ";
    getline(cin,str);
    cout<<"Output = " << str << endl ;
    for( int i = 0 ;i < str.size() ; i++)
    {
        cout <<str[i] << endl;
    }
    cout<< str.size();

    return 0;
}