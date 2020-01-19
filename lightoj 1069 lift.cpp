#include<iostream>
using namespace std;

int main()
{
    int caseN=0,l,p,test,sum;

    cin>>test;
    while(test--){
        cin>>p>>l;
        sum=0;
        if(p==0){
            cout<<"Case "<<++caseN<<": "<<sum<<endl;
            continue;
        }
        else if(p<l){
            sum=(4*l)+9+10;
            cout<<"Case "<<++caseN<<": "<<sum<<endl;
        }
        else{
            p=p+(p-l);
            sum=(4*p)+9+10;
            cout<<"Case "<<++caseN<<": "<<sum<<endl;
        }
    }

    return 0;
}
