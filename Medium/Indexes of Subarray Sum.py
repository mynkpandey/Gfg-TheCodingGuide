#Function to find a continuous sub-array which adds up to a given number.
class Solution:
    def subArraySum(self,arr, n, s): 
        for i in range(n + 1):
            cs = arr[i]
            for j in range(i + 1, n):
                cs += arr[j]
                if cs == s:
                    return arr[i], arr[j]
            return -1

class Solution:
    def subArraySum(self,arr, n, s): 
        start=0
        i=1
        currsum=arr[0]
        while i<=n:
            while currsum>s and start<i-1:
               currsum=currsum-arr[start]
               start+=1
            if currsum==s:
                return [(start+1),i]
            if i<n:
                currsum+=arr[i]
            i+=1
        return [-1]
 