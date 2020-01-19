#include<iostream>
using namespace std;

int main()
{
    int test,add,i,n,caseN=0;
    long long sum;

    cin>>test;
    while(test--){
        cin>>n;
        sum=0;
        for(i=0;i<n;i++){
            cin>>add;
            if(add>0)
                sum+=add;
        }
        cout<<"Case "<<++caseN<<": "<<sum<<endl;
    }

    return 0;
}
