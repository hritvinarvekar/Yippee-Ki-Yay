#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter: ";
        cin>>a[i];
    }
    cout<<"Your array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int high=0,index;
    cout<<"Second largest is: ";
    for(int i=0;i<n;i++){
        if(a[i]>high){
            high=a[i];
            index=i;
        }
    }
    int second_high=0;
    for(int i=0;i<n;i++){
        if(a[i]>second_high && i!=index){
            second_high=a[i];
        }
    }
    cout<<"The second high is "<<second_high;
}
