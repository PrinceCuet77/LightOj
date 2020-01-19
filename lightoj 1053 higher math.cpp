#include<iostream>
using namespace std;

int main()
{
    int test,a,b,c,caseN=0;

    cin>>test;
    while(test--){
        cin>>a>>b>>c;
        if(((a*a)+(b*b)==c*c) || ((a*a)+(c*c)==b*b) || ((c*c)+(b*b)==a*a))
            cout<<"Case "<<++caseN<<": "<<"yes"<<endl;
        else
           cout<<"Case "<<++caseN<<": "<<"no"<<endl;
    }

    return 0;
}
