class Solution
{
public:
    void merge(vector<int> &A, int m, vector<int> &B, int n)
    {
        int idx = m + n - 1;
        int i = m - 1;
        int j = n - 1;
        while (j >= 0 && i >= 0)
        {
            if (A[i] > B[j])
            {
                A[idx] = A[i];
                idx--;
                i--;
            }
            else
            {
                A[idx] = B[j];
                j--;
                idx--;
            }
        }
        if (i < 0)
        {
            while (j >= 0)
            {
                A[idx] = B[j];
                idx--;
                j--;
            }
        }
    }
};