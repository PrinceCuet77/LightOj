#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
#define EPS 1e-9
using namespace std;

double area(double a1,double b1,double c1){
    double s,t;
    s=(a1+b1+c1)/2.0;
    t=s*(s-a1)*(s-b1)*(s-c1);
    t=sqrt(t);

    return t;
}

int main()
{
    double a,b,c,a1,b1,c1,lo,hi,P,p,r,R,mid,ra;
    int test,caseN=0;

    cin>>test;
    while(test--){
        cin>>a>>b>>c>>r;
        lo=0.0;
        hi=a;
        P=area(a,b,c);
        while(fabs(hi-lo)>EPS){
            mid=(hi+lo)/2.0;
            a1=mid;
            c1=(a1*c)/a;
            b1=(c1*b)/c;
            p=area(a1,b1,c1);
            R=P-p;
            ra=p/R;
            if(ra==r)
                break;
            if(ra>r)
                hi=mid;
            else
                lo=mid;
        }
        cout<<"Case "<<++caseN<<": ";
        printf("%.10lf\n",a1);
    }

    return 0;
}
