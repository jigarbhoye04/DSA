#include<bits/stdc++.h>
using namespace std;
 
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next){}
};

class TreeSolution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k){
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* end = dummy;
        while(end->next){
            for(int i=0;i<k && end;i++){
                end = end->next;
            }
            if(!end) break;
            ListNode* start = pre->next;
            ListNode* next = end->next;
            end->next = nullptr;
            pre->next = reverse(start);
            start->next = next;
            pre = start;
            end = pre;
        }
        return dummy->next;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    TreeSolution obj;
    int t;cin>>t;
    while(t--){
        ListNode* head = new ListNode(1);
        obj.reverseKGroup(head,1);
    }
    return 0;
}