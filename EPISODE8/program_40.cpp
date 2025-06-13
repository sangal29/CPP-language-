40. write  a program tell that the target value is in the scope or not .

#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1 , 2, 4, 6, 8, 9};
    int index = -1;
    int target = 8;
    int size = sizeof(arr)/sizeof(int);
    for ( int i = 0; i < size; i++)
    {
        if ( arr[i] == target)
        {
            index = i;
        }
    }
    if ( index == -1)
    {
        cout <<" target is not in scope ";
    }
    else 
    cout << index;
    return 0;
}
