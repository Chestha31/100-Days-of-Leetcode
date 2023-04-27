class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        //step 1
        
        int count=1;
        int res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[res]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                count=1;
                res=i;
            }
        }
        //step 2
        count =0;
        for(int i=0;i<n;i++){
            if(arr[res]==arr[i]){
                count++;
            }
        }
        if(count<=n/2){
            return -1;
        }
        else{
            return arr[res];
        }
        // your code here
        
    }
};
