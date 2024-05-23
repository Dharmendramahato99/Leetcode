class Solution {
public:
    bool isPalindrome(int x) {
      long revNum = 0;
      int dup = x;
      if(x<0)
        return false;
      while(x!=0){
          int lastDigit = x%10;
          x = x/10;
          revNum = revNum*10 + lastDigit;
          
     }
    return revNum == dup;
  }
};