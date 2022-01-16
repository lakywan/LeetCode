class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // loop through arr
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                // move all the elements from arr[i] onwards one position to the right
                // NOTE: go backwards to avoid overwriting
                for (int j = arr.size() - 1; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }
                i++;  // NOTE: skip the zero that is duplicated
            }
        }
        return;
    }
};
