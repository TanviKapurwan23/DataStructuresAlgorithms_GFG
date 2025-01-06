bool isSubSeq(string &s1, string &s2, int n, int m) {
    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (s1[i] == s2[j]) {
            j++;
        }
    }
    return (j == m);
}

// Time: o(n+m)
// Aux space: O(1)

bool isSubSeq(string s1, string s2, int n, int m) {
    if (m == 0) 
        return true; // If `s2` is empty, it's a subsequence.
    if (n == 0) 
        return false; // If `s1` is exhausted and `s2` is not, return false.
    if (s1[n - 1] == s2[m - 1]) 
        return isSubSeq(s1, s2, n - 1, m - 1); // Match found, reduce both strings.
    return isSubSeq(s1, s2, n - 1, m); // Skip current character of `s1`.
}
