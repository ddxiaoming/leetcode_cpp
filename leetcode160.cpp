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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *pA = headA, *pB = headB;
        while (pA != pB) {
            if (pA == nullptr) {
                pA = headB;
                continue;
            }
            if (pB == nullptr) {
                pB = headA;
                continue;
            }
            pA = pA->next;
            pB = pB->next;
        }
        return pA;
    }
};