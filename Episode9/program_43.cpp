//  basics of vactor (This is the first stl containar).
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
//  method 1 for insalization of vector
    vector<int>vec;


    // method 2 for insalization of vector 
    vector<int>veecc ={1,2,3,4,5,6};
    // cout <<veecc[0];

// method 3 for insalization for vector 3
     for ( int i : veecc)
     cout << i << endl; 


//  to check the size of vector we use [  vector name.size ]
cout<< veecc.at(3) << endl;

vector<int>ex;
ex.push_back(1);
ex.push_back(2);
ex.push_back(3);


cout<<ex.size()<<endl;
cout<<ex.capacity()<<endl;




    return 0;
    
}
