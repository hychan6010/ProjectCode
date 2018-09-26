#include "PList.h"
int main()
{
    OList o;
    
    String words ("Hello");
    Integer number(5);
    Double double(2.5);
    o.append(words);
    o.append(number);
    o.append(double);
    
    
    List::iterator it = o.begin();
  while(!it.end())
    {
      Object &object = it.getObject();

   object->print();

      it.increment();
}

    }
