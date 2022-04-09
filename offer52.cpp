#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA, *p2 = headB;
        while (p1 != p2) {
            p1 = p1 == nullptr ? headB : p1->next;
            p2 = p2 == nullptr ? headA : p2->next;
        }
        return p1;
    }
};

int main(int argc, char **argv) {

}