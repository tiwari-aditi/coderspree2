#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||(i+j-1)==n)
            cout<<"*\t";
            else cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}