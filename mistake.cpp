#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;
    int t=n;
    for(int i=1;i<=n;i++){
        for(int j=(2*t-1);j>=1;j=j-2){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        t--;
        cout<<endl;
    }
}
