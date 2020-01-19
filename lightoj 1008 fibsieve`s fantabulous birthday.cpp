#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,x,y,col,row,caseN=0;
    int test;
    double t;

    cin>>test;
    while(test--){
        cin>>n;
        t=sqrt(n);
        x=ceil(t);
        cout<<x<<endl;
        y=n-((x-1)*(x-1));
        if(x%2!=0){
            if(x>y){
                row=y;
                col=x;
            }
            else{
                row=x;
                col=1+(x*x)-n;
            }
        }
        else{
            if(x>y){
                row=x;
                col=y;
            }
            else{
                row=1+(x*x)-n;
                col=x;
            }
        }
        cout<<"Case "<<++caseN<<": "<<col<<" "<<row<<endl;
    }

    return 0;
}
