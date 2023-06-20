#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={1,2,3,4,5,6,7};
    // list<int>newlist={100,200,300};
    // vector<int>v={100,200,700};
    // mylist.push_front(100);
    // mylist.push_back(200);
    // mylist.pop_back();
    // mylist.pop_front(); 
    //mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    //mylist.erase(next(mylist.begin(),2));
    // replace(mylist.begin(),mylist.end(),3,9);
    // for(int val:mylist)
    // {
    //     cout<<val<<endl;
    // }
    auto it = find(mylist.begin(),mylist.end(),7);
    if(it==mylist.end())
    {
        cout<<"Not Found!!";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}