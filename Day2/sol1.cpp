class Solution {
public:
    int convert(string s){
        int base =1;
        int dec =0;
        int n = (int)s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                dec+=base; 
            }
            base*=2;
        }
        return dec;
    }
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL){
            char c = (head->val)?'1':'0';
            
            s+=c;
            head = head->next;
        }
        int ans = convert(s);
        return ans;
    }
};
