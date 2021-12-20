#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ~ListNode() {
        while (this != nullptr)
        {
            ListNode* p = this;
            this = this->next;
            free(p);
        }
    }
};

ListNode* addTwoNumbers(ListNode* numa, ListNode* numb)
{
    ListNode* resultIterator = nullptr;
    ListNode* result = resultIterator;
    int overflow = 0;
    int ret = 0;
    while (true)
    {
        if (numa == nullptr && numb == nullptr)
            break;
        if (numa != nullptr)
        {
            ret += numa->val;
            numa = numa->next;
        }
        if (numb != nullptr)
        {
            ret += numb->val;
            numb = numb->next;
        }
        if (overflow)
        {
            ret += overflow;
            overflow = 0;
        }
        overflow = ret / 10;
        ret = ret % 10;
        resultIterator = new ListNode(ret);
        ret = 0;
        resultIterator = resultIterator->next;
    }
    return result;
}


int main()
{
    ListNode c0(0);
    ListNode c1(1);
    ListNode c2(2);
    ListNode c3(3);
    ListNode c4(4);
    ListNode c5(5);
    ListNode a(0);
    ListNode b(0);
    ListNode* ret = nullptr;

    ret = addTwoNumbers(&a, &b);




    return 0;
}