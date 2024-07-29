// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        int xor1=0,xor2=0;
        for(int i=0;i<n-1;i++){
            xor1^=arr[i];
            xor2^=(i+1);
        }
        xor2^=n;
        return xor1 ^ xor2;
    }
};