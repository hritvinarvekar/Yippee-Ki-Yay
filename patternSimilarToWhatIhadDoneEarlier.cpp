#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x& y";
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<y-1;i++){
        cout<<"*";
        for(int i=1;i<x-1;i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<x;i++){
        cout<<"*";
    }
    cout<<endl;
}
