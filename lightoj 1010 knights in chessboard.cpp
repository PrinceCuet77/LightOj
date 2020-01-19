#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,test,caseN=0,x,mul,ans;

    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&m,&n);
        mul=m*n;
        if(m==1 || n==1)
            ans=mul;
        else if(m==2 || n==2){
            if(m==2)
                x=n;
            else
                x=m;
            if(x%4==0)
                ans=x;
            else if(x%4==1)
                ans=x+1;
            else if(x%4==2)
                ans=x+2;
            else
                ans=x+1;
        }
        else if(mul%2==0)
            ans=mul/2;
        else
            ans=(mul/2)+1;
        printf("Case %d: %d\n",++caseN,ans);
    }

    return 0;
}
