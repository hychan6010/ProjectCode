#include <stdio.h>

class IntInf {
    private:
      int number;

   public: 
      bool pos_inf();
      bool neg_inf();
    };
    
IntInf(int x)::int number{
    if(x == -1){
       pos_inf=true;
    }
    else if(x==-2){
        neg_inf=true;
    }
    else{
        number = x; 
    }
}
IntInf operator=(const IntInf &rhs) {
        this = &rhs; 
        return *this
}
      
IntInf operator+(const IntInf &rhs) {
        IntInf result;
        result = number + rhs.number
        if(pos_inf || rhs.pos_inf){    //if one equals positive infinity return infinity
            return result.pos_inf = true;
        }
        else if(neg_inf && rhs.neg_inf){ //if one equals negative infinity return negative infinity
            return result.neg_inf = true;
        }
        else{
        return result;                      // return result
        }
}    

IntInf operator-(const IntInf &rhs) {
        IntInf result;
        result = number - rhs.number;
        if(pos_inf){              // infinity - number
            return result.pos_inf;
        }
        else if(rhs.pos_inf){         //number - infinity
           return result.neg_inf;
        }
        else if(pos_inf && rhs.pos_inf){    // infinity- infinity
            return result.pos_inf;
        }
        else if(neg_inf){           //if negative infinity - number
            return result.neg_inf;
        }
        else if(rhs.neg_inf){           //if number - (-infinity)
            return result.pos_inf;
        }
        else if(neg_inf && rhs.neg_inf){    // -infinity - (-infinity)
            return result.pos_inf;
        }
        else {
        return result;                  // return result
        }
}


IntInf operator*(const IntInf &rhs) {
        IntInf result;
        result = number  * rhs.number;
    
       if(pos_inf && rhs.number == 0){    // infinity * 0
            return result.number = 0;
        }
        else if(number == 0 && rhs.pos_inf){ // 0 * infinity
           return result.number = 0;
        }
        else if(neg_inf && rhs.number == 0){ // -infinity * 0
           return result.number = 0;
        }
         else if(number == 0 && rhs.neg_inf){ // 0 * -infinity
           return result.number = 0;
        }
        else if(pos_inf || rhs.pos_inf){  // infinity * number or number * infinity
           return result.pos_inf;
        }
        else if(neg_inf || neg.pos_inf){  // -infinity * number or number * -infinity
           return result.neg_inf;
        }
        else if (pos_inf && rhs.pos_inf){  // infinity * infinity
            return result.pos_inf;
        }
        else if (neg_inf && rhs.neg_inf){   //-infinity * -infinity
            return result.pos_inf;
        }
        else if (pos_inf && rhs.neg_inf){   //infinity * -infinity
            return result.neg_inf;
        }
        else if (pos_inf && rhs.neg_inf){   //infinity * -infinity
            return result.neg_inf;
        }
        else {
        return result;                  // return result
        }
}


IntInf operator/(const IntInf &rhs) {
        IntInf result;
        result = number  / rhs.number;
    
       if(number && rhs.pos_inf == 0){    // number / infinity
            return result.number = 0;
        }
       else if(number && rhs.neg_inf == 0){    // number / -infinity
            return result.number = 0;
        }
        else if(pos_inf && rhs.number){    // infinity / number
            return result.pos_inf;
        }
        else if(neg_inf && rhs.number){    // -infinity / number
            return result.neg_inf;
        }
        else if(neg_inf && rhs.neg_inf){    // -infinity / -infinity
            return result.pos_inf;
        }
       else if(pos_inf && rhs.pos_inf){    // infinity / infinity
            return result.pos_inf;
        }
       else if(pos_inf && rhs.neg_inf){    // infinity / -infinity
            return result.neg_inf;
        }
       else if(neg_inf && rhs.pos_inf){    // -infinity / infinity
            return result.neg_inf;
        }
        else if(number||rhs.number ==0){  // number / 0
           printf("undefined");
        }
        else {
        return result;                  // return result
        }
}

IntInf operator==(const IntInf &rhs) {

}

IntInf operator>(const IntInf &rhs) {

}

IntInf operator<(const IntInf &rhs) {

}
