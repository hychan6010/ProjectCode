#include <stdio.h>

class IntInf {
    private:
      int number;

   public: 
      bool pos_inf();
      bool neg_inf();
      int result;
    };
    
IntInf(int x)::int number{
    if(pos_inf == -1){
        return true;
    }
    else if(neg_inf == -2){
        return true;
    }
}
IntInf operator=(const IntInf &rhs) {
        this = &rhs; 
        return *this
}
      
IntInf operator+(const IntInf &rhs) {
        rhs + rhs.number = result;
        if(rhs || rhs.number == -1){    //if one equals positive infinity return infinity
            return true;
        }
        else if(rhs || rhs.number == -2){ //if one equals negative infinity return negative infinity
            return true;
        }
        return result;                      // return result
}

IntInf operator-(const IntInf &rhs) {
        rhs - rhs.number = result;
        if(rhs == -1){              //if only the first number was infinity, return infinity
            return true;
        }
        else if(rhs == -2){         //if only the first number was negative infinity, return negative infinity
            return true;
        }
        if(rhs && rhs.number == -1){    // if both are infinity, return infinity
            return true;
        }
        if(rhs.number == -1){           //if number minus infinity return negative infinity
            neg_inf == true;
        }
        return result;                  // result result
}


IntInf operator*(const IntInf &rhs) {
        rhs * rhs.number = result;
        if(rhs || rhs.number == -1 && rhs || rhs.number == 0){  //if one is infinity and the other zero, return 0
            result = 0;
        }
        if(rhs || rhs.number == -2 && rhs || rhs.number == 0){  //if one is negative infinity and the other zero, 
            result = 0;
        }
        if(rhs || rhs.number == -1){        // if one or other is infinity, return infinity
            return true;
        }
         if(rhs || rhs.number == -2){       //if one or the other is negative infinity, return negative infinity
            return true;
        }
        if(rhs && rhs.number == -1){        //if both are infinity, return infinity
         return true;
        }
        if(rhs && rhs.number == -2){         // if both are negative infinity, return negative infinity   
         pos_inf == true;;
        }
        if(rhs == -1 && rhs.number == -2){    //if one is infinity and the other negative infinity return negative infinity    
         neg_inf == true;;
        }
        if(rhs == -2 && rhs.number == -1){    // if one is negative infinity and the other infinity, return negative infinity
         neg_inf == true;;
        }
        return result;
}


IntInf operator/(const IntInf &rhs) {

}

IntInf operator==(const IntInf &rhs) {

}

IntInf operator>(const IntInf &rhs) {

}

IntInf operator<(const IntInf &rhs) {

}
