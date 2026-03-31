#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    //how to get input;;
    int n,second=INT_MIN,first=INT_MIN;
    cout<<"Enter the Size of vector:";
    cin>>n;
    vector<int> v(n);
    for(int &x:v) cin>>x;
    for(int k:v)
    {
        if(k>first)
        {
            second=first;
            first=k;
        }
        else if(k!=first && k>second)
        {
            second=k;
        }
    }
    cout<<second<<"\n";
    
}