//#include <iostream>
//using namespace std;
//
//// Definition for a singly-linked list
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//// Function to remove the nth node from the end
//ListNode* removeNthFromEnd(ListNode* head, int n) {
//    ListNode* dummy = new ListNode(0, head);
//    ListNode* first = dummy;
//    ListNode* second = dummy;
//
//    // Advance first pointer by n+1 steps to create a gap
//    for (int i = 0; i <= n; i++) {
//        if (first == nullptr) return head; // If n is greater than the length of the list
//        first = first->next;
//    }
//
//    // Move both pointers until the first pointer reaches the end
//    while (first != nullptr) {
//        first = first->next;
//        second = second->next;
//    }
//
//    // Remove the nth node
//    ListNode* toDelete = second->next;
//    second->next = second->next->next;
//    delete toDelete;
//
//    ListNode* newHead = dummy->next;
//    delete dummy;
//    return newHead;
//}
//
//// Function to print the linked list
//void printList(ListNode* head) {
//    while (head != nullptr) {
//        cout << head->val << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//int main() {
//    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
//    ListNode* head = new ListNode(1);
//    head->next = new ListNode(2);
//    head->next->next = new ListNode(3);
//    head->next->next->next = new ListNode(4);
//    head->next->next->next->next = new ListNode(5);
//
//    cout << "Original List: ";
//    printList(head);
//
//    // Remove the 2nd node from the end
//    int n = 2;
//    head = removeNthFromEnd(head, n);
//
//    cout << "After Removing 2nd Node from End: ";
//    printList(head);
//
//    // Clean up memory
//    while (head != nullptr) {
//        ListNode* temp = head;
//        head = head->next;
//        delete temp;
//    }
//
//    return 0;
//}
