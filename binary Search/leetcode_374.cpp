class Solution {
public:
    int guessNumber(int n) {
           int start = 1;
           int end = n;
           while(start <= end){
                int guess_number = start + (end-start)/2;

                int val = guess(guess_number);

                if(val == -1){
                    end = guess_number - 1; // mid -1
                }
                else if(val == 1){
                     start = guess_number + 1; // mid + 1
                }else{
                      return guess_number;
                }
           }

           return -1;

    }
};