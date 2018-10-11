#include <stdio.h>
#include <stdlib.h>
 
class IntegerSet {
protected:
   int size;
   int hash(int key) 
   {
   return (key * 997) % size; 
   }
public:
   IntegerSet(int htsize):size(htsize) {}  
   virtual bool insert(int) = 0;
   virtual bool search(int) const = 0;
   virtual void remove(int) = 0;
};

class IntegerSetArray : public IntegerSet {
protected:
  int *array;
public:
   IntegerSetArray(int htsize);
   virtual bool insert(int) override;
   virtual bool search(int) const override;
   virtual void remove(int) override;
};

IntegerSetArray::IntegerSetArray(int htsize):IntegerSet(htsize)
{
   array = new int[size];
   for(int i=0; i<size; i++)
      array[i] = -1;  // -1 means empty
}

bool IntegerSet::insert(int x)
{
   if ( array(x)== -1)
   {
     array(x) = x;
     return true;
   }
   return false;
}

bool IntegerSet::search(int x) const
{
  // data can only be in one location, check it
  return array(x)==x;
}

void IntegerSet::remove(int x)
{
   if ( array(x) == x )
       array(x)= -1;
}

