#include<iostream>
#include<vector>
using namespace std;
void sonnapariya(vector<int> barath)
{
    for(auto i:barath)
    {
        cout<<i<<" ";
    }
}
void welcometoafrica(vector<int> barath,int n)
{
   for(int k=0;k<n;k++)
   {
     cout<<(char)barath[k]<<" ";
   }
}
int main()
{
    int n,his=0;
    scanf("%d",&n);
    vector<int> barath(n);
    for(int i=0;i<n;i++)
    {
        cin>>barath[i];
    }
    for(int j=1;j<n;j++)
    {
        if(barath[j]!=barath[his])
        {
            his++;
            barath[his]=barath[j];
        }
    }
    sonnapariya(barath);
    cout<<"\n";
    welcometoafrica(barath,n);
    return 0;

}