class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int maximum = INT_MIN;//0.5,12.75,
        // int average = 0;//0/5,51
    int n = nums.size();
      int sum =0;
      int left=0;

            for( int i = 0;i<k;i++){
           sum += nums[i];

            }
            maximum = sum;
             for( int i =k;i<n;i++ ){

                   sum = sum-nums[left];
                   sum = sum+nums[i];
                   left++;

                   maximum = max(maximum, sum);
             }
               return  (double) maximum/k;
    }
};