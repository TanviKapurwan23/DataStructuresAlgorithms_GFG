class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        //code here
        int n = A.length();
        int m = B.length();
        int j = 0;
        for(int i=0; i<m && j<n; i++){
            if(B[i] == A[j]){
                j++;
            }
        }
        return (j == n);
    }
};