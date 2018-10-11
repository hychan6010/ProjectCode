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
   IntegerSet(int size):size(size) {}  
   virtual bool insert(int) = 0;
   virtual bool search(int) const = 0;
   virtual void remove(int) = 0;
};

class IntegerSetArray : public IntegerSet {
protected:
  int *array;
public:
   IntegerSetArray(int size);
   virtual bool insert(int) override;
   virtual bool search(int) const override;
   virtual void remove(int) override;
};

IntegerSetArray::IntegerSetArray(int size):IntegerSet(size)
{
   array = new int[size];
   for(int i=0; i<size; i++)
      array[i] = -1;  // -1 means empty
}

bool IntegerSetArray::insert(int x)
{
     for(int i = 0; i <size;i++){
         if ( array[i]== -1)
         {
         array[i]=x;
         return true;
         
          }
       }
  return false;
}

bool IntegerSetArray::search(int x) const
{
  for(int i = 0; i<size; i++)
    {
       if ( array[i] == x )
       {
       return true;
       }
    }
       return false; 
}

void IntegerSetArray::remove(int x)
{
    for(int i = 0; i<size; i++)
    {
       if ( array[i] == x )
       {
        array[x]= -1;
       }
    }
}
