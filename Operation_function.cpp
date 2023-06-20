#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int>mylist={1,2,1,4,5,1};
    list<int>mylist={1,2,3,4,5,6,2,7};
    // list<int>mylist={1,2,3,4,5,6};
    //mylist.remove(1);
    //mylist.sort(greater<int>());
   // mylist.sort(less<int>());
    //mylist.unique();
    mylist.reverse();
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}