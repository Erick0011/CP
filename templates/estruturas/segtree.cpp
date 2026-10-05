// Segment Tree iterativa — query em intervalo [l, r) e update pontual
// Troque `op` e `NEUTRO` para min/max/gcd etc.
// update/query: O(log n), índices 0-based
struct SegTree {
    using T = long long;
    static constexpr T NEUTRO = 0;
    T op(T a, T b) { return a + b; }

    int n;
    vector<T> t;
    SegTree(int n) : n(n), t(2 * n, NEUTRO) {}
    SegTree(const vector<T>& a) : n(a.size()), t(2 * a.size()) {
        for (int i = 0; i < n; i++) t[n + i] = a[i];
        for (int i = n - 1; i > 0; i--) t[i] = op(t[2 * i], t[2 * i + 1]);
    }
    void set(int i, T v) {
        for (t[i += n] = v; i > 1; i >>= 1) t[i >> 1] = op(t[i & ~1], t[i | 1]);
    }
    T query(int l, int r) { // [l, r)
        T resl = NEUTRO, resr = NEUTRO;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) resl = op(resl, t[l++]);
            if (r & 1) resr = op(t[--r], resr);
        }
        return op(resl, resr);
    }
};
