// Crivo de Eratóstenes — primos até n
// O(n log log n)
vector<int> crivo(int n) {
    vector<bool> composto(n + 1, false);
    vector<int> primos;
    for (int i = 2; i <= n; i++) {
        if (composto[i]) continue;
        primos.push_back(i);
        for (long long j = 1LL * i * i; j <= n; j += i) composto[j] = true;
    }
    return primos;
}
