//Title:- printing the linked list in forward order
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 10/8/2021

/*
This is an to practice traversing a linked list. Given a pointer 
to the head node of a linked list, print each node's  element, one 
per line. If the head pointer is null (indicating the list is empty), 
there is nothing to pr
*/

void printLinkedList(SinglyLinkedListNode* head) {
    if(head==NULL)
    return;
    cout<<head->data<<endl;
    printLinkedList(head->next);
}