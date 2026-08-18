class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // Count how many times each number appears
        int freq[51] = {0};

        for (int num : nums) {
            freq[num]++;
        }

        int answer = -1;

        for (int i = 0; i < n; i++) {
            int num = nums[i];

            // If k == n, the whole array is one subarray,
            // so every number is considered.
            if (k == n) {
                answer = max(answer, num);
            }

            // If k == 1, only elements at the ends
            // can appear in exactly one subarray.
            else if (freq[num] == 1 && (k == 1 || i == 0 || i == n - 1)) {
                answer = max(answer, num);
            }
        }

        return answer;
    }
};