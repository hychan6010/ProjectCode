#include <stdio.h>
#include <stddef.h>

class Object {
public:
  virtual void print();
 };
 
 class String : public Object {
 public:
        const char* str;
        String(const char *s = ""): str(s) {}
        void print();
  };
  
  class Integer : public Object {
  public:
        int x;
        Integer(int i = 0): x(i) {}
        void print();
   };
   
   class Double : public Object {
   public:
          double a;
          Double(double ii = 0.0) : a(ii) {}
          void print();
     };
     
 class List {
  private:
    int counter;
          class ListNode{
          public:
                 Object *object;
                 ListNode *next;
           public: 
                   ListNode(Object *o, ListNode *n = NULL) {
                          object = o;
                          next = NULL;
                     }
                     ListNode *getNext(){
                            return next;
                      }
                      void setNext(ListNode *n){
                             next = n;
                        }
                        Object getObject () {
                        return &object;
                        }
                      };
                      ListNode *head;
                      ListNode *tail;
                      
                      public:
                          class iterator {
                          public:
                          ListNode *node;
                          
                          public:
                          iterator(ListNode *n=NULL){
                                    node = n;
                           }
                           Object &getObject(){
                                    return node -> getObject();
                            }
                                    void increment (){
                                     node = node ->getNext();
                                    }
                             bool end() {
                                        return node == NULL;
                                        }
                             
                             
                          };
                             
                             List();
                             int length();
                             void append(Object *o);
                             bool remove(Object &o);
                             void removeAfter(iterator it);
                             void insertAfter(iterator it, Object *object);
                             bool empty();
                             iterator begin()
                             {
                             return iterator(head);
                             }
                             ~List();
                             };
                                    
              
      
