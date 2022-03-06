#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x)
        : val(x), next(NULL) {}
};
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        dfs(head, res);
        return res;
    }
private:
    void dfs(ListNode* head, vector<int> &res) {
        if (head == nullptr) return;
        dfs(head->next, res);
        res.push_back(head->val);
    }
};