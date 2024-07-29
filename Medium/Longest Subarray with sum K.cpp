class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<long long, int> preSumMap;
        long long sum=0;
        int maxlen=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K) maxlen=max(maxlen, i+1);
            long long rem=sum-K;
            if(preSumMap.find(rem) != preSumMap.end()){
                int len=i-preSumMap[rem];
                maxlen=max(maxlen, len);
            }
            if(preSumMap.find(sum) == preSumMap.end()) preSumMap[sum]=i;
        }
        return maxlen;
    } 

};