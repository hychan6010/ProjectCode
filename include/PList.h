#include <stdio.h>
#include <stddef.h>

class Object {
public:
  virtual void print() = 0;
};

class Double : public Object {
  double x;
public:
  Double(double a):x(a) {}
  void print() { printf("%lf",x); }
};

class Integer : public Object {
  int x;
public:
  Integer(int a):x(a) {}
  void print() { printf("%d",x); }
};

class String : public Object {
  const char *x;
public:
  String(const char *a):x(a) {}
  void print() { printf("%s",x); }
};

class PList {
private:

// ListNode represents each
// node of the list
  class ListNode {
  public:
    Object *obj; // data in the list
    ListNode *next;
  public:
    ListNode(Object *o, ListNode *n=NULL)
    {
      obj = o;
      next=n; // automatically serves as a list tail
    }
    ListNode* getNext()
    {
      return next;
    }
    void setNext(ListNode *n)
    {
      next = n;
    }
    Object* getObject()
    {
      return obj;
    }
  };

  // add head and tail pointer
  ListNode *head;
  ListNode *tail;

public:

  class iterator {
  private:
    ListNode *node;

  public:
    iterator(ListNode *n=NULL) { node = n; }
    Object* getObject() { return node->getObject(); }
    void increment() { node = node->next; }
    bool end() {  return node==NULL; }

    friend class PList;
  };


public:
  PList();
  void append(Object *o);
  bool remove(Object*& o);
  bool empty();

  iterator begin()
  {
    return iterator(head);
  }

  void removeAfter(iterator it); // pseudocode in zyBook 2.4
  void insertAfter(iterator it, Object *o);
};
