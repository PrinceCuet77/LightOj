#include<iostream>t
using namespace std;

int main()
{
    long long a[101],caseN=0,test,n,m,j,k,temp,t,i,t1,t2;
    char ch;

    cin>>test;
    while(test--){
        ++caseN;
        cin>>n>>m;
        cout<<"Case "<<caseN<<":"<<endl;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<=m;i++){
            cin>>ch;
            if(ch=='S'){
                cin>>t1;
                for(k=0;k<n;k++)
                    a[k]+=t1;
            }
            else if(ch=='M'){
                cin>>t1;
                for(k=0;k<n;k++)
                    a[k]*=t1;
            }
            else if(ch=='D'){
                cin>>t1;
                for(k=0;k<n;k++)
                    a[k]/=t1;
            }
            else if(ch=='P'){
                cin>>t1>>t2;
                temp=a[t1];
                a[t1]=a[t2];
                a[t2]=temp;
            }
            else{
                t=n-1;
                for(k=0;k<n/2;k++){
                    temp=a[k];
                    a[k]=a[t];
                    a[t]=temp;
                    t--;
                }
            }
        }
        for(i=0;i<n;i++){
            cout<<a[i];
            if(i==n-1)
                cout<<endl;
            else
                cout<<" ";
        }
    }

    return 0;
}
