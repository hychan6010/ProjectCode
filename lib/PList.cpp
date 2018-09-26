#include <stdio.h>
#include <Plist.h>

List::List()    //constructor
{
  head = NULL;
  tail = NULL;
  counter = 0;
}
  List::~List() //deconstructor
  {
    String t;
    while(!empty())
      remove_front(t);
  }
  int List::length() 
  { 
   return counter;
  }


void List::append(Object o)
{
    ListNode *node = new ListNode(a);
    if (head==NULL) {
    head = node;
    tail = node;
    } else {
        tail->setNext(node);
        tail = node;
      counter++;
     }
  }
  bool List::remove(Object &o)
  {
    if(!empty())
    {
      copy = head->getString();
      ListNode *tmp = head->getNext();
      delete head;
      head=tmp;
      if(tmp==NULL)
          tail = NULL;
       return true;
    }
      return false;
}

bool List::empty()
{
  return head==NULL;
}
