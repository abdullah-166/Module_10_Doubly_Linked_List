#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={1,2,3,4,5};
     //cout<<mylist.front();
    //cout<<mylist.back();
    cout<<*next(mylist.begin(),3)<<endl;
    return 0;
}