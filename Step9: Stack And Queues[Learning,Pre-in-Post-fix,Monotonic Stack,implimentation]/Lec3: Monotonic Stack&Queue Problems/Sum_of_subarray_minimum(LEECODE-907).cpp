class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        vector<int> ple(n), nle(n);
        stack<int> s1, s2;

        for (int i = 0; i < n; i++) {
            while (!s1.empty() && arr[s1.top()] > arr[i]) {
                s1.pop();
            }
            ple[i] = s1.empty() ? (i + 1) : (i - s1.top());
            s1.push(i);
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!s2.empty() && arr[s2.top()] >= arr[i]) { 
                s2.pop();
            }
            nle[i] = s2.empty() ? (n - i) : (s2.top() - i);
            s2.push(i);
        }

        long long result = 0;
        for (int i = 0; i < n; i++) {
            result = (result + (long long)arr[i] * ple[i] * nle[i]) % MOD;
        }

        return result;
    }
};
