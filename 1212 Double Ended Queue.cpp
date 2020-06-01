#include <bits/stdc++.h>
using namespace std;
 
int main()
{
        int t;
        scanf("%d", &t);
        for ( int caseNo = 1; caseNo <= t; caseNo++ ) {
                int n, m;
                scanf("%d %d", &n, &m);
                deque < int > d;
                printf("Case %d:\n", caseNo);
                for ( int i = 0; i < m; i++ ) {
                        string ch;
                        int x;
                        cin >> ch;
                        if ( ch == "pushLeft" || ch == "pushRight" ) {
                                scanf("%d", &x);
                                if ( d.size() == n )
                                        printf("The queue is full\n");
                                else {
                                        if ( ch == "pushLeft" ) {
                                                d.push_front(x);
                                                printf("Pushed in left: %d\n", x);
                                        }
                                        else {
                                                d.push_back(x);
                                                printf("Pushed in right: %d\n", x);
                                        }
                                }
                        }
                        else if ( ch == "popLeft" || ch == "popRight" ) {
                                if ( d.size() == 0 )
                                        printf("The queue is empty\n");
                                else {
                                        if ( ch == "popLeft" ) {
                                                printf("Popped from left: %d\n", d.front());
                                                d.pop_front();
                                        }
                                        else {
                                                printf("Popped from right: %d\n", d.back());
                                                d.pop_back();
                                        }
                                }
                        }
                }
        }
 
        return 0;
}
 
