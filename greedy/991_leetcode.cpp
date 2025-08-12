class Solution {
public:
  // in this question on trick is there we we are going to go backwards from target to strat , instead of * we will do devide / instead of -1(sub) we will do addition +1 to reach start value,
    int brokenCalc(int start, int target) {
          // base cases
          if(start >= target){     // agar start = 5 aur target = 5 hogaya kitna step lagega 5-5=0 , aur agar start > hogaya target se to then also we have to do +1 opration to make the target value because if we will do /2 then target will become more smaller , in conclusion we can say just subtract start - target and get hoe mmany opration (dry run this start = 5 , target = 8)
              return start - target ;
          }

          // ab agar target even hai to just devide by 2 
          if(target%2==0){
               return 1 +  brokenCalc(start , target/2);
          }

          return 1 + brokenCalc(start , target + 1);
    }
};