class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int n = nums.size();  // n: to get the size of nums

        vector<int> result(n);  // create a new vector with the same size as nums

        int left_index = 0;  // set the index of the leftmost element to 0
        int right_index = n - 1;  // set the index of the rightmost element to n - 1

        // loop through result
        // Since we put the greatest element in the result from the end, we need to start from the last index of result
        for(int i = n - 1; i >= 0; i--)
        {
            // take advantage of the absolute value
            // compare the current leftmost element to the current rightmost element
            if (abs(nums[left_index]) < abs(nums[right_index]))  // if the rightmost element is greater
            {
                result[i] = nums[right_index] * nums[right_index];  // square the value of current rightmost element and put it in result
                right_index--;  // now the rightmost element moves one step to the left
            }
            else  // if the leftmost element is greater or they're equal
            {
                result[i] = nums[left_index] * nums[left_index];  // square the value of current leftmost element and put it in result
                left_index++;  // now the leftmost element moves one step to the right
            }
        }
        return result;
    }
};
