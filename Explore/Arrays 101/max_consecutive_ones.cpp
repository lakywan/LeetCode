class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int count = 0;  // count: to keep track of the number of current consecutive 1s
        int maxCount = 0;  // maxCount: to update the max count of consecutive 1s

        // loop through the given vector
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)  // if the value of current element is equal to 1
                count++;  // then update count
            else  // if the value of current element is 0
            {
                maxCount = max(count, maxCount);  // update the maxCount by using comparing current count and maxCount
                count = 0;  // change count back to 0
            }
        }
        // NOTE: Since it's possible that the max consecutive 1s are at the very end of the vector (e.g. [1, 1, 0, 1, 1, 1]),
        //   in this case, count will be updated but it will not be compared to previous maxCount.
        //   We need to compare one more time before finally returning the result;
        return max(count, maxCount);
    }
};
