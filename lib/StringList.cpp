  #include <stdio.h>

class String {
  public:
  const char* string;
  String(const char *s = "")
  {
    string = s;
  }
};

class List {
private:
  
class ListNode {
private:
  String string;
  ListNode *next;
 public:
  ListNode(String a)
    { 
    string = a;
    next=NULL; 
    }
  ListNode *getNext() 
  {
    return next;
  }
  void setNext(ListNode *n) 
  {
  next = n;
  }
 String getString() 
  {
  return string;
  }
 };
 

    ListNode *head;
    ListNode *tail;

  public:
  int counter;
    List();
    void push_back(String a);
    String get(int n);
     int length();
    bool remove_front(String &copy);
    bool empty();
    ~List();
    };
void List::push_back(String a)
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

  String List::get(int n){
    ListNode *node = head -> getNext();
    for(int i = 0; i<n; i++){
      node = node ->getNext();
    }
    return node -> getString();
  }
bool List::empty()
{
  return head==NULL;
}
  
