#include <bits/stdc++.h>
using namespace std;
 
int main()
{
        int t;
        scanf("%d", &t);
        for ( int caseNo = 1; caseNo <= t; caseNo++ ) {
                string ch, url;
                stack < string > Forward, Backward;
                url = "http://www.lightoj.com/";
                printf("Case %d:\n", caseNo);
                while ( cin >> ch ) {
                        if ( ch == "QUIT" )
                                break;
                        else if ( ch == "VISIT" ) {
                                Backward.push(url);
                                cin >> url;
                                cout << url << endl;
                                while ( !Forward.empty() )
                                        Forward.pop();
                        }
                        else if ( ch == "BACK" ) {
                                if ( Backward.size() == 0 ) {
                                        cout << "Ignored" << endl;
                                        continue;
                                }
                                Forward.push(url);
                                url = Backward.top();
                                Backward.pop();
                                cout << url << endl;
                        }
                        else if ( ch == "FORWARD" ) {
                                if ( Forward.size() == 0 ) {
                                        cout << "Ignored" << endl;
                                        continue;
                                }
                                Backward.push(url);
                                url = Forward.top();
                                Forward.pop();
                                cout << url << endl;
                        }
                }
        }
 
        return 0;
}
