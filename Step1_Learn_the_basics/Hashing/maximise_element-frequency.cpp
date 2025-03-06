#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        int maxFrequency(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end()); 
            int left=0,right=0;
            int result=0;
            long long total=0;
            while(right<nums.size())
            {
                total+=nums[right];
                while((long long)nums[right]*(right-left+1)>total+k)
                {
                    total-=nums[left];
                    left+=1;
                }
                result=max(result,(right-left+1));
                right+=1;
            }
            return result;
        }
    };

    #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // ✅ Sort the array
        int left = 0, right = 0, result = 0;
        long long total = 0;  // ✅ Use long long to prevent overflow

        while (right < nums.size()) {
            total += nums[right];  // ✅ Expand window safely

            // ✅ Shrink window if the cost exceeds k
            while ((right - left + 1) * (long long)nums[right] > total + k) {
                total -= nums[left];  // Remove leftmost element
                left++;
            }

            // ✅ Update max frequency
            result = max(result, right - left + 1);
            right++;
        }

        return result;
    }
};

int main() {
    Solution sol; 

    int n, k;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];  
    }

    cout << "Enter value of k: ";
    cin >> k;  

    int result = sol.maxFrequency(nums, k);
    cout << "Maximum possible frequency: " << result << endl;

    return 0;
}