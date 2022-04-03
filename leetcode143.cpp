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
    void reorderList(ListNode* head) {
        auto *dumpy = new ListNode(0, head);
        vector<ListNode*> nodes;
        while (head != nullptr) {
            nodes.push_back(head);
            head = head->next;
        }
        int left = 0, right = static_cast<int>(nodes.size()) - 1;
        head = dumpy;
        while (left <= right) {
            head->next = nodes[left];
            head = head->next;
            head->next = nullptr;
            if (left != right) {
                head->next = nodes[right];
                head = head->next;
                head->next = nullptr;
            }
            ++left;--right;
        }
        head = dumpy->next;
    }
};
