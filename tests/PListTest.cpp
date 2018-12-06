#include "PList.h"
using namespace ece309;
int main()
{
  PList l;

  l.append(new String("hello"));
  l.append(new Double(1.50));
  l.append(new Integer(5));

  PList::iterator it = l.begin();
  while(!it.end())
    {
      Object *o = it.getObject();

      printf("Next thing in list: ");
      o->print();
      printf("\n");

      it.increment();
    }

  return 0;
}
