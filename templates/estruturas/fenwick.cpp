// Fenwick Tree (BIT) — soma de prefixo com update pontual
// update/query: O(log n), índices 0-based
struct Fenwick {
    int n;
    vector<long long> bit;
    Fenwick(int n) : n(n), bit(n + 1, 0) {}
    void add(int i, long long v) {
        for (++i; i <= n; i += i & -i) bit[i] += v;
    }
    long long sum(int i) { // soma de [0, i]
        long long r = 0;
        for (++i; i > 0; i -= i & -i) r += bit[i];
        return r;
    }
    long long sum(int l, int r) { return sum(r) - (l ? sum(l - 1) : 0); }
};
