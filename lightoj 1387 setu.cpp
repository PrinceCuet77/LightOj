#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long long sum,k;
    int t,time,caseN=0;
    char ch[100];

    cin>>t;
    while(t--){
        sum=0;
        ++caseN;
        cin>>time;
        cout<<"Case "<<caseN<<":"<<endl;
        while(time--){
            cin>>ch;
            if(strcmp(ch,"donate")==0){
                cin>>k;
                sum+=k;
            }
            else
                cout<<sum<<endl;
        }
    }

    return 0;
}

