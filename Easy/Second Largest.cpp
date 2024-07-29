class Solution{
public:	

	int print2largest(int arr[], int n) {
	    int largest=arr[0];
	    int slargest=-1;
	    for(int i=1;i<=n-1;i++){
	        if(arr[i]>largest){
	            slargest=largest;
	            largest=arr[i];
	        } else if(arr[i]<largest && arr[i]>slargest){
	            slargest=arr[i];
	        }
	    }
	    return slargest;
	}
};