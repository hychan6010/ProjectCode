#include "PList.h"

int main()

{
   List o;
    
    Object *o1 = new String ("Hello");
    Object *o2 = new Integer (5);
    Object o3* = new Double (2.5);
    o.append(o1);
    o.append(o2);
    o.append(o3);
    
    
    List::iterator it = o.begin();
  while(!it.end())
    {
      Object &object = it.getObject();

   object->print();

      it.increment();
}

    }
