class Solution {
public:
    const int MOD = 1e9 + 7;

    int power(long long x,long long N){
        long long ans=1;
        x%=MOD;
        while (N > 0) {
            if (N % 2 == 1) {
                ans = (ans * x)%MOD;
                N = N - 1;
            } else {
                x =(x * x)%MOD;
                N = N / 2;
            }
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd_count = n/2;
        long long even_count = n-(n/2);
        long long even_part = power(5, even_count);
        long long odd_part = power(4, odd_count);

        return (even_part * odd_part) % MOD;
    }
    
};
