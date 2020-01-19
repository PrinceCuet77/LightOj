#include<iostream>
using namespace std;

int main()
{
    int x1,x2,y1,y2,x,y,caseN=0,test,n,i;

    cin>>test;
    while(test--){
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        cout<<"Case "<<++caseN<<":"<<endl;
        for(i=1;i<=n;i++){
            cin>>x>>y;
            if((x1<=x && x<=x2) && (y1<=y && y<=y2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }

    return 0;
}
