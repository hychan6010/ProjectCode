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
   array = new int[htsize];
   for(int i=0; i<htsize; i++)
      array[i] = -1;  // -1 means empty
}

bool IntegerSet::insert(int x)
{
     for(int i = 0; i <htsize;i++){
         if ( array[i]== -1)
         {
         array[i]=x;
         return true;
          }
       }
  return false;
}

bool IntegerSet::search(int x) const
{
  for(int i = 0; i<htsize; i++)
    {
       if ( array[i] == x )
       {
       return true;
       }
    }
       return false; 
}

void IntegerSet::remove(int x)
{
    for(int i = 0; i<htsize; i++)
    {
       if ( array[i] == x )
       {
        array[x]= -1;
       }
    }

