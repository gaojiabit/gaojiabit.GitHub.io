#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}


};

ListNode* addTwoNumbers(ListNode* numa, ListNode* numb)
{
    ListNode* result = new ListNode();
    ListNode* curr = result;
    int overflow = 0;
    int ret = 0;
    while (true)
    {
        if (numa == nullptr && numb == nullptr && overflow == 0)
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
        curr->next = new ListNode(ret);
        ret = 0;
        curr = curr->next;
    }
    ListNode* retp = result->next;
    delete result;
    return retp;


}


int main()
{
    ListNode* p0 = new ListNode(0);
    ListNode* p1 = new ListNode(1);
    ListNode* p2 = new ListNode(2);
    ListNode* p3 = new ListNode(3);
    ListNode* p4 = new ListNode(4);
    ListNode* p5 = new ListNode(5);
    ListNode* p6 = new ListNode(6);
    ListNode* a = new ListNode(0);
    a->next = p5;
    p5->next = p3;
    p3->next = p1;
    ListNode* b = new ListNode(0);
    b->next = p6;
    p6->next = p4;
    p4->next = p2;


    ListNode* ret = addTwoNumbers(a, b);

    delete p0;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;
    delete a;
    delete b;




    return 0;
}