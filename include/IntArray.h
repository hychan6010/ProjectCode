
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

IntArray(const char* str) {
   length = strlen(str)
   array = 
   for(int i = 0; i < size; i++){
         array[i]
   

            
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
      
IntArray IntArray::operator + (const IntArray &rhs) const
{
  IntArray result(length); // make object to hold return value,
  	                       // make long enough to hold this object’s data
    int i=0;
    for(i=0; i<length && i<rhs.length; i++)
       result.array[i] = array[i] + rhs.array[i];
    for(;i<length;i++) // if rhs.length is shorter, copy rest of array
       result.array[i] = array[i];
    return result;
}
IntArray IntArray::operator - (const IntArray &rhs) const
{
  IntArray result(length); // make object to hold return value,
  	                       // make long enough to hold this object’s data
    int i=0;
    for(i=0; i<length && i<rhs.length; i++)
       result.array[i] = array[i] - rhs.array[i];
    for(;i<length;i++) // if rhs.length is shorter, copy rest of array
       result.array[i] = array[i];
    return result;
}
      
IntArray IntArray::operator * (const IntArray &rhs) const
{
  IntArray result(length); // make object to hold return value,
  	                       // make long enough to hold this object’s data
    int i=0;
    for(i=0; i<length && i<rhs.length; i++)
       result.array[i] = array[i] * rhs.array[i];
    for(;i<length;i++) // if rhs.length is shorter, copy rest of array
       result.array[i] = array[i];
    return result;
}

IntArray IntArray::operator / (const IntArray &rhs) const
{
  IntArray result(length); // make object to hold return value,
  	                       // make long enough to hold this object’s data
    int i=0;
    for(i=0; i<length && i<rhs.length; i++)
       result.array[i] = array[i] / rhs.array[i];
    for(;i<length;i++) // if rhs.length is shorter, copy rest of array
       result.array[i] = array[i];
    return result;
}      
      
IntArray IntArray::operator << (const IntArray &rhs) const
{
  IntArray result(length); // make object to hold return value,
  	                       // make long enough to hold this object’s data
    int i=0;
    for(i=0; i<length && i<rhs.length; i++)
       result.array[i] = array[i] - rhs.array[i];
    for(;i<length;i++) 
       result.array[i] = array[i];
    return result;
}      
