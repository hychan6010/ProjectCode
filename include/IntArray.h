#ifndef INTARRAY_H
#define INTARRAY_H

#include <stdio.h>
#include <stdlib.h>

class IntArray {
private:
   int *array;
   int length;
public:
      IntArray(int le, int val=0):length(le) {
      array = new int[le];
      for(int i=0; i<le; i++)
        array[i] = val;
   }

   ~IntArray() {
     delete [] array;
}
   
Int Array(int size, int val=0){
   array = new int[size];
   for(int i = 0; i < size; i++){
      array[i] = val;
   }
}
   
   
   int* operator[](int index){
      return array[index];
   }
      
      
   
IntArray& operator+=(const IntArray &rhs) {
   if(this == &rhs) {
      return *this;
   }
      printf("Running operator=!\n");
      delete [] array;
      length = rhs.length;
      array = new int[length];
         for(int i=0; i<length; i++)
            array[i] = rhs.array[i];
            return *this; // reference to this object
}
