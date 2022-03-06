#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x)
        : val(x), next(NULL) {}
};
class Solution {
   public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *fast = dummy, *slow = dummy;
        // 快指针先走 K 步
        for (int i = 0; i < k; ++i) fast = fast->next;
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};
