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

IntegerSet::IntegerSet(int htsize)

   array = new int[size];
   for(int i=0; i<size; i++)
      array[i] = -1;  // -1 means empty
}

bool IntegerSet::insert(int x)
{
   if ( array[hash(x)] == -1)
   {
     array[ hash(x) ] = x;
     return true;
   
   return false;
}

bool IntegerSet::search(int x) const
{
  // data can only be in one location, check it
  return array[hash(x)]==x;
}

void IntegerSet::remove(int x)
{
   if ( array[hash(x)] == x )
       array[hash(x)] = -1;
}

