#include <stdio.h>

class minHeap {
  private: 
  
  public:
  int Node[] array;
  int size;
  
  minHeap(Node[] array){
    this.array = array;
    this.size = this.size;
    }
    
  Node getMin(){
    Node temp = array[0];
    switch(0, size-1, array);
    size--;
    drop(0);
    return temp;
    }
    
    boolean Empty(){
      return size ==0;
    }
   
   void createHeap(){
      for(int i = (size / 2 -1); i>=0;i--){
         drop(i);
      }
    }
    
    int left(int index){
    return 2*index + 1;
    }
    
    int right(int index){
    return 2* index +2;
    }
    
    void sink(int index){
    int smallestIndex = index;
    int left= left(index);
    int right = right(index);
    if(left< size && array[left] < 0){
        smallestIndex = left;
        }
    if(right< size && array[right] < 0){
        smallestIndex = right;
        }
      if(index != smallestIndex){
      switch(smallestIndex , index, array);
      sink(smallestIndex);
      }
      }
      
      void switch(int i, int j, Node[]array){
      Node temp = array[i];
      array[i] = array[j];
      array[j] = temp;
      }
      }

  };
  
  
