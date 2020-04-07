#include <bits/stdc++.h>
using namespace std;

#define mx 100005
int ar[mx], tree[4*mx];

void build(int node, int b, int e) {
        if ( b == e ) {
                tree[node] = ar[b];
                return;
        }
        int left = 2 * node;
        int right = 2 * node + 1;
        int mid = (b + e) / 2;
        build(left, b, mid);
        build(right, mid+1, e);
        tree[node] = min(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j) {
        if ( b >= i && j >= e )
                return tree[node];
        if ( e < i || j < b )
                return 1e9;
        int left = 2 * node;
        int right = 2 * node + 1;
        int mid = (b + e) / 2;
        int p1 = query(left, b, mid, i, j);
        int p2 = query(right, mid+1, e, i, j);
        return min(p1, p2);
}

int main()
{
        //freopen("file.txt", "r", stdin);
        int testCase;
        scanf("%d", &testCase);

        for ( int c = 1; c <= testCase; c++ ) {
                printf("Case %d:\n", c);
                int n, q;
                scanf("%d %d", &n, &q);

                for ( int i = 1; i <= n; i++ )
                        scanf("%d", &ar[i]);

                build(1, 1, n);

                for ( int k = 0; k < q; k++ ) {
                        int i, j;
                        scanf("%d %d", &i, &j);

                        printf("%d\n", query(1, 1, n, i, j));
                }
        }

        return 0;
}
