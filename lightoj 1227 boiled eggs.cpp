#include<iostream>
using namespace std;

int main()
{
    int test,caseN=0,sum,i,n,p,q,a[100],ck;

    cin>>test;
    while(test--){
        cin>>n>>p>>q;
        sum=ck=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++){
            sum+=a[i];
            if(sum>q)
                break;
            else
                ck++;
        }
        if(ct>p)
            ct=p;
        cout<<"Case "<<++caseN<<": "<<ck<<endl;
    }

    return 0;
}
