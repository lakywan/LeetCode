class Solution 
{
public:
    int findNumbers(vector<int>& nums) 
    {
        int count = 0;  // count: to keep track of the number of elements with even number of digits
        // loop through nums
        for (int i : nums)
        {
            // convert element in the vector to string and get the size of the string
            if (to_string(i).size() % 2 == 0)  // if the size of converted string is even
                count++;  // then update count
        }
        return count;
    }
};