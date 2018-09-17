#include <stdio.h>

class ArrayList{
  public:
  ArrayList();          //constructor
  ~ArrayList();         //deconstructor
  int get(int n);
  void push_back(String a);
  int length(){
    return elements;
  }
  bool remove_front();
  bool empty();
  private: 
  int ArraySize;
  int elements;
  double *array;
  void MakeSpace();
 
ArrayList::Array:List(){      //default constructor
    ArraySize = 0;
    elements = 0;
    array = NULL; 
 }
 
 ArrayList::~ArrayList(){     //destructor, deletes array
 delete [] array;
 }
 
 bool ArrayList::empty() {
    return elements = 0;
    }
  int ArrayList::get(int n)
  {
    for(int i = 0; i< elements; i++){
      if(array[i] == n) {
        return n; 
      }
    }
  }
