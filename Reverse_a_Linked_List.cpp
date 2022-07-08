SinglyLinkedListNode *reverseLinkedList(SinglyLinkedListNode *head)
{
//write your code here
    SinglyLinkedListNode* current=head;
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* next=NULL;
    while(current!=NULL){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    }
    head=prev;
    return prev;
}
