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
 /* Array Sorted or not?
    int c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            c++;
        }
    }
    if(c==n-1){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }
    */
    int c=0,record=100;
    for(int i=0;i<n;i++){
        c=0;
        int j=i+1;
        c=i+1;
        while(j!=(n-1) && a[i]==a[j]){
            c++;
            if(c>=1){
                record=j;
            }
        }
        for(int x=record; x<c;x++ ){
            a[j]=a[x];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
