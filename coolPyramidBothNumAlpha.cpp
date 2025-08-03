#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;
    char a= 'A' + n;
/* This is numbers one 
    for(int j=(n-1);j>=1;j--){
        cout<<" ";
    }
    cout<<1<<endl;
    for(int i=2;i<=n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<j;
        }
        cout<<i;
        for(int j=(i-1);j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    */
    for(int j=(n);j>=1;j--){
        cout<<" ";
    }
    cout<<'A'<<endl;
    for(int i=1;i<=n;i++){
        for(int j=(n-i);j>=1;j--){
            cout<<" ";
        }   
        char d= 'A'+i;
        for(char j = 'A'; j<d;j++){
            cout<<j;
        }
        cout<<d;
        for(char j= d-1; j>= 'A'; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
