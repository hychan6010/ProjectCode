#ifndef INTARRAY_H
#define INTARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

class IntArray {
private:
   int *array;
   int size;
public:
     IntArray(const char* str);
     IntArray(int asize, int val);
     int get(int index)const;
     int getLength()const;
     void set(int index, int value);
     int operator[](int index);
     IntArray operator+=(const IntArray& rhs);
   IntArray operator+(const IntArray& rhs);
   IntArray operator-(const IntArray& rhs);
   IntArray operator*(const IntArray& rhs);
   IntArray operator/(const IntArray& rhs);
   IntArray operator<<(int count)const;
   operator char*()const;
   operator int()const;
   
};

IntArray::IntArray(const char* str) {
   size= strlen(str);
   array = new int[size];
   for(int a = 0; a<size;a++){
      array[a]=str[a];
   }
}
   
            
   IntArray::IntArray(int asize, int val=0){
   size = asize;
   array = new int[size];
      for(int a = 0; a<size;a++){
         array[a]=val;
   }
}

int IntArray:: get(int index)const{
   return array[index];
}
      
int IntArray::getLength() const{
   return size;
}
   
void IntArray::set(int index, int value){
   array[index] = value;
}
int IntArray::operator[](int index){
   return array[index];
}
   
IntArray IntArray::operator+=(const IntArray &rhs) {
   int tempsize; 
   if(rhs.getLength()<size){
      tempsize = rhs.getLength();
   }
   else{
         tempsize = size;
   }
   for(int a=0; a<tempsize; a++){
      array[a]+=rhs.get(a);
   }
   return *this;
}
IntArray IntArray::operator+(const IntArray &rhs){
   int tempsize;
   if(rhs.getLength()<size){
      tempsize=rhs.getLength();
   }
   else{
         tempsize=size;
   }
   IntArray temparray(size);
   for(int a=0;a<tempsize;a++){
      temparray.set(a,array[a]+rhs.get(a));
   }
   if(tempsize != size){
      for(int b = tempsize; b<size; b++){
         temparray.set(b,array[b]);
      }
   }
   return temparray;
}
   
   IntArray IntArray::operator-(const IntArray &rhs){
      int tempsize;
      if(rhs.getLength()<size){
         tempsize=rhs.getLength();
      }
      else{
         tempsize=size;
      }
      IntArray temparray(size);
         for(int a=0;tempsize;a++){
            temparray.set(a,array[a]-rhs.get(a));
         }
      if(tempsize!=size){
         for(int b=tempsize;b<size;b++){
            temparray.set(b, array[b]);
         }
      }
      return temparray;
   }
   IntArray IntArray::operator*(int x){
      IntArray temparray(size);
      for(int a=0;a<size;a++){
         temparray.set(a,array[a]*x);
      }
      return temparray;
   }
   
   IntArray IntArray::operator/(int x){
      IntArray temparray(size);
      for(int a=0;a<size;a++){
         temparray.set(a,array[a]/x);
      }
      return temparray;
   }
   IntArray IntArray::operator<<(int count)const{
      int temp;
      IntArray temparray(size);
      for(int a=0;a<size;a++){
         if(a+count>=size){
            temp=a+count-size;
         }
         else{
            temp=a+count;
         }
         temparray.set(temp,array[a]);
      }
      return temparray;
   }
   IntArray::operator char*()const{
      char *str=new char[size+1];
      int count=0;
      for(int a =0;a<size;a++){
         if(array[a]<0 || array[a]>255){
            str[a] = ' ';
         }
         else {
            if(array[a]==0){
            count = 1;
         }
         str[a]=(char)array[a];
      }
   }
   if(count==0){
      str[size]='\0';
   }
   return str;
}
IntArray::operator int() const{
   int total = 0;
    for(int a=0; a<size;a++){
       total+= array[a];
    }
   return total=total/size;
}

