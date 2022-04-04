#include <vector>
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
    ListNode* partition(ListNode* head, int x) {
        auto *smallHead = new ListNode(0), *bigHead = new ListNode(0);
        auto *smallCur = smallHead, *bigCur = bigHead;
        while (head != nullptr) {
            if (head->val < x) {
                smallCur->next = head;
                smallCur = smallCur->next;
            } else {
                bigCur->next = head;
                bigCur = bigCur->next;
            }
            head = head->next;
        }
        bigCur->next = nullptr;
        smallCur->next = bigHead->next;
        return smallHead->next;
    }
};
int main(int argc, char **argv) {

}