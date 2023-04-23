class Solution {
public:

    // 1st solution
    // ListNode* middleNode(ListNode* head) {
    //     ListNode* hair, *tort;
    //     hair = tort= head;
    //     while(hair && hair->next){
    //         hair = hair->next->next;
    //         tort = tort->next;
    //     }
    //     return tort;
    // }

    // 2nd solution
    // ListNode* middleNode(ListNode* head){
    //     int count=0;
    //     ListNode* temp= head;
    //     while(temp!=NULL){
    //         count++;
    //         temp = temp->next;
    //     }
    //     count/=2;
    //     int i=0;
    //     ListNode* ans;
    //     while(i<=count){
    //         ans = head;
    //         head=head->next;
    //         i++;
    //     }
    //     return ans;
    // }

    // 3rd solution
    ListNode*  middleNode(ListNode* head){
        vector<ListNode*> v = {head};
        while(v.back()->next != NULL){
            v.push_back(v.back()->next);
        }
        return v[(int)v.size()/2];
    }
};
