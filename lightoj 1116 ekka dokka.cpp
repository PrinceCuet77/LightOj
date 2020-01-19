#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,caseN=0;
    long long w,i;

    scanf("%d",&test);
    while(test--){
        scanf("%lld",&w);
        if(w%2!=0)
            printf("Case %d: Impossible\n",++caseN);
        else{
            i=1;
            while(w%2==0){
                i*=2;
                w/=2;
            }
            printf("Case %d: %lld %lld\n",++caseN,w,i);
        }
    }

    return 0;
}
