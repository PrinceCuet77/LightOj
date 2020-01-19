#include<iostream>
using namespace std;

int main()
{
    long long n;
    int test,caseN=0,ck,t;

    cin>>test;
    while(test--){
        cin>>n;
        ck=0;
        while(n!=0){
            t=n%2;
            n/=2;
            if(t==1)
                ck++;
        }
        if(ck%2==0)
            cout<<"Case "<<++caseN<<": even"<<endl;
        else
            cout<<"Case "<<++caseN<<": odd"<<endl;
    }

    return 0;
}
