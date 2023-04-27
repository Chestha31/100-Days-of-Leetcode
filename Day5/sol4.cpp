class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
        int n =(int)str.size();
        int num=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(str[i]>='0' && str[i]<='9'){
                num = num*10 + (str[i]-'0');
            }
            else{
                sum+=num;
                num=0;
            }
        }
        return sum+num;
    	// Your code here
    	
    }
};
