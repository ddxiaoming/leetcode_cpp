struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *pointer = head;
        int listLen = 1;

        // 先接成环
        while (pointer->next != nullptr) {
            pointer = pointer->next;
            ++listLen;
        }
        pointer->next = head;

        // 再从 pos 处断开
        int pos = listLen - k % listLen;
        for (int i = 0; i < pos; ++i) pointer = pointer->next;
        head = pointer->next;
        pointer->next = nullptr;
        return head;
    }
};