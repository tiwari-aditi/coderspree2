#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c=0;
        cin>>n;
        c=0;
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                c++;
                break;
            }
        }
        if(c==0){
            cout<<"prime"<<endl;
        }
        else
        {
            cout<<"not prime"<<endl;
        }
    }
    return 0;
}