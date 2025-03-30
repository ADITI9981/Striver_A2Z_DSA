class Solution {
public:
    const long long MOD = 1e9 + 7;
    
    long long sumSubarrayMax(vector<int>& arr) {
        int n = arr.size();
        vector<long long> ple(n), nle(n);
        stack<int> s1, s2;

        // Previous Less or Equal (PLE)
        for (int i = 0; i < n; i++) {
            while (!s1.empty() && arr[s1.top()] <= arr[i]) {
                s1.pop();
            }
            ple[i] = s1.empty() ? (i + 1) : (i - s1.top());
            s1.push(i);
        }

        // Next Less (NL)
        for (int i = n - 1; i >= 0; i--) {
            while (!s2.empty() && arr[s2.top()] < arr[i]) {
                s2.pop();
            }
            nle[i] = s2.empty() ? (n - i) : (s2.top() - i);
            s2.push(i);
        }

        // Compute result
        long long result = 0;
        for (int i = 0; i < n; i++) {
            result = (result + arr[i] * ple[i] % MOD * nle[i] % MOD) % MOD;
        }

        return result;
    }

    long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<long long> ple(n), nle(n);
        stack<int> s1, s2;

        // Previous Greater (PG)
        for (int i = 0; i < n; i++) {
            while (!s1.empty() && arr[s1.top()] > arr[i]) {
                s1.pop();
            }
            ple[i] = s1.empty() ? (i + 1) : (i - s1.top());
            s1.push(i);
        }

        // Next Greater or Equal (NGE)
        for (int i = n - 1; i >= 0; i--) {
            while (!s2.empty() && arr[s2.top()] >= arr[i]) {
                s2.pop();
            }
            nle[i] = s2.empty() ? (n - i) : (s2.top() - i);
            s2.push(i);
        }

        // Compute result
        long long result = 0;
        for (int i = 0; i < n; i++) {
            result = (result + arr[i] * ple[i] % MOD * nle[i] % MOD) % MOD;
        }

        return result;
    }

    long long subArrayRanges(vector<int>& nums) {
        long long maxSum = sumSubarrayMax(nums);
        long long minSum = sumSubarrayMins(nums);
        return (maxSum - minSum + MOD) % MOD;  // Ensure non-negative result
    }
};
