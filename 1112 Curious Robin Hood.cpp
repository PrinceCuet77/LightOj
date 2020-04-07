#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mx 100005
ll ar[mx], tree[4*mx];

void build(ll node, ll b, ll e) {
        if ( b == e ) {
                tree[node] = ar[b];
                return;
        }
        ll left = 2 * node;
        ll right = 2 * node + 1;
        ll mid = (b + e) / 2;
        build(left, b, mid);
        build(right, mid+1, e);
        tree[node] = tree[left] + tree[right];
}

ll query(ll node, ll b, ll e, ll i, ll j) {
        if ( e < i || j < b )
                return 0;
        if ( b >= i && j >= e )
                return tree[node];
        ll left = 2 * node;
        ll right = 2 * node + 1;
        ll mid = (b + e) / 2;
        ll p1 = query(left, b, mid, i, j);
        ll p2 = query(right, mid+1, e, i, j);
        return p1 + p2;
}

void update(ll node, ll b, ll e, ll i, ll newValue) {
        if ( e < i || i < b )
                return;
        if ( b >= i && i >= e ) {
                tree[node] = newValue;
                return;
        }
        ll left = 2 * node;
        ll right = 2 * node + 1;
        ll mid = (b + e) / 2;
        update(left, b, mid, i, newValue);
        update(right, mid+1, e, i, newValue);
        tree[node] = tree[left] + tree[right];
}

int main()
{
        //freopen("file.txt", "r", stdin);
        ll testCase;
        scanf("%lld", &testCase);

        for ( ll c = 1; c <= testCase; c++ ) {
                printf("Case %lld:\n", c);
                ll n, q;
                scanf("%lld %lld", &n, &q);

                for ( ll i = 1; i <= n; i++ )
                        scanf("%lld", &ar[i]);

                build(1, 1, n);

                for ( ll k = 0; k < q; k++ ) {
                        ll no;
                        scanf("%lld", &no);
                        if ( no == 1 ) {
                                ll i;
                                scanf("%lld", &i);
                                printf("%lld\n", ar[i+1]);
                                update(1, 1, n, i+1, 0);
                                ar[i+1] = 0;
                        } else if ( no == 2 ) {
                                ll i, v;
                                scanf("%lld %lld", &i, &v);
                                update(1, 1, n, i+1, ar[i+1]+v);
                                ar[i+1] += v;
                        } else if ( no == 3 ) {
                                ll i, v;
                                scanf("%lld %lld", &i, &v);
                                printf("%lld\n", query(1, 1, n, i+1, v+1));
                        }
                }
        }

        return 0;
}
