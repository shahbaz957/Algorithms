class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        // Using Dutch National Flag Algorithm
        int mid = 0;
        int low = 0;
        int h = arr.size() - 1;
        while (mid <= h)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else if (arr[mid] == 2)
            {
                swap(arr[mid], arr[h]);
                h--;
            }
        }
    }
};