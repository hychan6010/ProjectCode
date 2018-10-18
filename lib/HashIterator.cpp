#include <stdio.h>
#include <stdlib.h>
#include <ctime>
class IntegerSet {
protected:
   int size;
   int hash(int key) const { return (key * 997) % size; }
public:
   IntegerSet(int htsize):size(htsize) {}
   virtual bool insert(int) = 0;
   virtual bool search(int) const = 0;
   virtual void remove(int) = 0;
};

// Hash Table with Linear Probing
class IntegerSetHT : public IntegerSet {
protected:
  int *table;
  int probeDistance;
  const int empty_since_start = -2;
  const int empty_after_removal = -1;
public:
   IntegerSetHT(int htsize);
       int collision;
   virtual bool insert(int) override;
   virtual bool search(int) const override;
   virtual void remove(int) override;
};

IntegerSetHT::IntegerSetHT(int htsize)
:IntegerSet(htsize)
{
collision=0;
  probeDistance = 20;
   table = new int[size];
   for(int i=0; i<size; i++)
      table[i] = empty_since_start;  // -1 means empty
}

bool IntegerSetHT::insert(int data)
{

  int index = hash(data);
  int bucketsProbed = 0;
  while( bucketsProbed++ < probeDistance )
  {
   if ( table[index] < 0 )
   {
       if(bucketsProbed=2){
           collision++;
       
       }
     // if the entry is not being used, put the
    // data there
     table[ index ] = data;
     return true;
   }
   index = (index+1) % size;
  }
  // otherwise give up
   return false;
}

bool IntegerSetHT::search(int data) const
{
  int index = hash(data);
  int bucketsProbed = 0;
  while( table[index] != empty_since_start &&
         bucketsProbed++ < probeDistance )
  {
   if ( table[index] == data )
   {
     return true;
   }
   index = (index+1) % size;
  }

  // data can only be in one location, check it
  return false;
}

void IntegerSetHT::remove(int data)
{
  int index = hash(data);
  int bucketsProbed = 0;
  while( table[index] != empty_since_start &&
         bucketsProbed++ < probeDistance )
  {
   if ( table[index] == data )
   {
     table[index] = empty_after_removal;
     //return;
   }
   index = (index+1) % size;
  }
}

int main()
{
    
    IntegerSetHT set;
set.insert(5);
set.insert(99);
set.insert(0);

IntegerSetHT::iterator sit = set.begin();
while(!sit.end())
{
   printf(“%d “, sit.getInt()); 
   sit.increment();
}

	

}
