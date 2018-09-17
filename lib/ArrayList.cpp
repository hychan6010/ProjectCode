#include <stdio.h>


class String {
  public:
  const char* string;
  String(const char *s = "")
  {
    string = s;
  }
};

class ArrayList{
  public:
  ArrayList(int c = 10);          //constructor
  ~ArrayList();              //deconstructor
  String get(int n);
  void push_back(String a);
  int length(){
    return elements;
  }

  bool remove_front(String &copy);
  bool empty();
  private: 
  int elements;
  int ArraySize;
  String *array;
};
ArrayList::ArrayList(int c){      //default constructor
    array = new String[c];
    elements = 0;
    ArraySize = c;
 }
 void ArrayList::push_back(String a){
    if(elements >= ArraySize - 1){
     String *array2 = new String[ 2 * elements];
      for(int i = 0; i<elements;i++){
      *(array2 + i) = *(array + i);
     }
      array = array2;
      delete [] array2;
   }
   else {
     *(array + elements) = a;
        elements++;
     }
 }
  
 bool ArrayList::remove_front(String &copy){
   copy = *(array);
   array++;
   elements--;
   return true;
 }
 ArrayList::~ArrayList(){     //destructor, deletes array
 delete [] array;
 }
 
  String ArrayList::get(int n)
  {
   return *(array + n - 1);
  }
