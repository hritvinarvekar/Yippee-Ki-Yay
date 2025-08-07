#include<limits.h>
int reverse(int x){
    int d;
    long long int rev=0;
    while(x!=0){
        d=x%10;
        rev=rev*10 + d;
        if(rev> INT_MAX || rev<INT_MIN){
            return 0;
        }
        x=x/10;
    }
    return rev;
}
