#include<iostream>
using namespace std;

int main()
{
    int test,a,b,caseN=0;

    cin>>test;
    while(test--){
        cin>>a>>b;
        cout<<"Case "<<++caseN<<": "<<a+b<<endl;
    }

    return 0;
}
