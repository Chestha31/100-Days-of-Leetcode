class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       int n = (int)S.size();
       int charac = 256;
       int arr[256];
       fill(arr, arr+charac, 0);
       for(int i=0;i<n;i++){
           arr[S[i]]++;
       }
       for(int i=0;i<n;i++){
           if(arr[S[i]]==1){
               return (char)S[i];
           }
       }//Your code here
      return '$'; 
    }

};
