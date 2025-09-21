class Solution
{
public:
    void nextPermutation(vector<int> &A)
    {
        int piv = -1;
        int n = A.size();
        // Find the Pivot Element
        for (int i = n - 2; i >= 0; i--)
        {
            if (A[i] < A[i + 1])
            {
                piv = i;
                break;
            }
        }
        if (piv == -1)
        {
            int i = 0, j = n - 1;
            while (i <= j)
            {
                swap(A[i], A[j]);
                i++;
                j--;
            }
            return;
        }
        // Find the RightMost Element
        for (int i = n - 1; i > piv; i--)
        {
            if (A[i] > A[piv])
            {
                swap(A[i], A[piv]);
                break;
            }
        }
        // Reverse the Elements from piv+1 to n-1
        int i = piv + 1, j = n - 1;
        while (i <= j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
};