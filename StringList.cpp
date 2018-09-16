  #include <stdio.h>

class String {
  public:
  const char* string
  String(const char *s = "")
  {
    string = s;
  }
};

class ListNode {
private:
  String string;
  ListNode *next;
 public:
  ListNode(String a)
    { string = a; next=NULL }
  ListNode* getNext() 
  {
    return next;
  }
  void setNext(ListNode *n) 
  {
  next = n;
  }
 string getstring() 
  {
  return string;
  }
 };
 
class List {
private:
    ListNode *head;
    ListNode *tail;
 public:
    List();
    void push_back(String a);
    bool remove_front(String &copy);
    };
void List::push_back(String a)
{
    ListNode *node = newListNode(a);
    if (head==NULL) {
    head = node;
    tail = node;
    } else {
        tail->setNext(node);
        tail = node;
     }
  }
  bool List::remove_front(String &copy)
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
List::List()    //constructor
{
  head = NULL;
  tail = NULL;
}
  List::~List() //deconstructor
  {
    Item t;
    while(!empty())
      remove(t);
  }
  int List::length() 
  { 
    int counter = String.size();
    return counter;
  }

  
