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
{
   table = new int[size];
   for(int i=0; i<size; i++)
      table[i] = -1;  // -1 means empty
}

bool IntegerSet::insert(int data)
{
   if ( table[hash(data)] == -1)
   {
     // if the entry is not being used, put the
    // data there
     table[ hash(data) ] = data;
     return true;
   }
  // otherwise give up
   return false;
}

bool IntegerSet::search(int data) const
{
  // data can only be in one location, check it
  return table[hash(data)]==data;
}

void IntegerSet::remove(int data)
{
   if ( table[hash(data)] == data )
       table[hash(data)] = -1;
}

