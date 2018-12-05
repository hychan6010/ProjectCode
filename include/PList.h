namespace ece309{
#include <stddef.h>
#include <stdio.h>

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
  class ListNode {
  public:
    Object *obj;
    ListNode *next;
  public:
    ListNode(Object *o, ListNode *n=NULL)
    {
      obj = o;
      next=n;
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
  void removeAfter(iterator it);
  void insertAfter(iterator it, Object *o);
};
}
