// Prefix function (KMP)
// pi[i] = tamanho do maior prefixo próprio de s[0..i] que também é sufixo. O(n)
// Para achar padrão p em t: rode em p + '#' + t e procure pi[i] == |p|.
vector<int> prefix_function(const string& s) {
    int n = s.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}
