#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        return sortList(head, nullptr);
    }

private:
    ListNode* sortList(ListNode *head, ListNode *tail) {
        if (head == nullptr) return nullptr;
        if (head->next == tail) {
            head->next = nullptr;
            return head;
        }
        // 快慢指针寻找切割点
        ListNode *fast = head, *slow = head;
        while (fast != tail) {
            slow = slow->next;
            fast = fast->next;
            if (fast != tail) fast = fast->next;
        }

        return mergeList(sortList(head, slow), sortList(slow, tail));
    }
    ListNode* mergeList(ListNode* head1, ListNode* head2) {
        auto *dumpy = new ListNode(0);
        ListNode *cur = dumpy, *p1 = head1, *p2 = head2;
        while (p1 && p2) {
            if (p1->val < p2->val) {
                cur->next = p1;
                p1 = p1->next;
            } else {
                cur->next = p2;
                p2 = p2->next;
            }
            cur = cur->next;
            cur->next = nullptr;
        }
        if (p1) cur->next = p1;
        if (p2) cur->next = p2;
        ListNode *ret = dumpy->next;
        delete dumpy;
        return ret;
    }
};

int main(int argc, char **argv) {

}