#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;
    int c= (int)(log10(n)) + 1;
    cout<<c;
    int d,arm=0;
    int temp=n;
    while(n!=0){
        d=n%10;
        arm=arm+(int)(pow(d,c));
        n=n/10;
    }
    if(temp==arm){
        cout<<"ArmStronG YES.";
    }
    else{
        cout<<"NAY";
    }
}
