#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x:v) cin>>x;
    set<int> s(v.begin(),v.end());
    for(int i:s) cout<<i<<" ";
}