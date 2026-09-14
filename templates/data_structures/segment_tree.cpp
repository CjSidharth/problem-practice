// Iterative segment tree: point update, range query on [l, r). O(log n)
// Change `op` and `id` for min/max/gcd etc.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SegTree {
    int n;
    vector<ll> t;
    static ll op(ll a, ll b) { return a + b; }
    static constexpr ll id = 0;
    SegTree(int n) : n(n), t(2 * n, id) {}
    void set(int i, ll v) {
        for (t[i += n] = v; i > 1; i >>= 1) t[i >> 1] = op(t[i], t[i ^ 1]);
    }
    ll query(int l, int r) {
        ll resl = id, resr = id;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) resl = op(resl, t[l++]);
            if (r & 1) resr = op(t[--r], resr);
        }
        return op(resl, resr);
    }
};
