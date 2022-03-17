struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *dummy = new ListNode(0, head);
        ListNode *pre = dummy, *cur = head;
        while (cur != nullptr) {
            // 跳过重复的元素
            if (cur->next != nullptr && cur->val == cur->next->val) {
                int val = cur->val;
                while (cur != nullptr && cur->val == val) cur = cur->next;
            } else {
                pre->next = cur;
                pre = pre->next;
                cur = cur->next;
            }
        }
        pre->next = nullptr;
        return dummy->next;
    }
};