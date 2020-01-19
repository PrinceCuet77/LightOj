#include<iostream>
using namespace std;

int main()
{
    long test,a,b,sum;

    cin>>test;
    while(test--){
        cin>>sum;
        a=sum/2;
        b=sum-a;
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
