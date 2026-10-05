// Aritmética modular: exponenciação rápida, inverso, combinações
// binpow: O(log e). Inverso via Fermat (MOD primo).
const long long MOD = 1e9 + 7;

long long binpow(long long b, long long e, long long m = MOD) {
    long long r = 1;
    b %= m;
    while (e > 0) {
        if (e & 1) r = r * b % m;
        b = b * b % m;
        e >>= 1;
    }
    return r;
}

long long inv(long long a) { return binpow(a, MOD - 2); }

// nCr com fatoriais pré-computados — chame init(N) antes
vector<long long> fact, ifact;
void init(int n) {
    fact.assign(n + 1, 1);
    ifact.assign(n + 1, 1);
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i % MOD;
    ifact[n] = inv(fact[n]);
    for (int i = n; i > 0; i--) ifact[i - 1] = ifact[i] * i % MOD;
}
long long C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * ifact[k] % MOD * ifact[n - k] % MOD;
}
