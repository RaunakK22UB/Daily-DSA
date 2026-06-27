class Solution {
public:
    // 2-3 are thinngs important the formula ""vec.size() - row - 1"""
    // if condition for not taking duplicacy  if( row != (vec.size() - row - 1))
    // using lambada function 
    // and STL accumlate , but we can use it with the 1D vector to use for 2D we are using the lamada function 

    // we have to take this & for 1 thing to take elements as reffernce and if there is golabal element we have to use the refference variable to access inside the lamabada function like here that is """row"""

   

    int diagonalSum(vector<vector<int>>& mat) {


        int row = 0; // it is a varibale telling that this is 0th or 1th or so on vector form the 2-D array like 1st row , 2nd row 

        auto lambda = [&](int sum , vector<int>vec){

        sum +=  vec[row];
          
        if( row != (vec.size() - row - 1)){  
            // this if logic is important for the odd matrix in middle there will be case where row will be 2 and this formulaa vec.size() - row - 1 same then it can add it 2 times thats why this if condtion 
                sum+= vec[vec.size()-row-1];
        }

        row++;

        return sum;
    };
        
        int sum =0;
        int result = accumulate(begin(mat),end(mat),0,lambda); 
        // it will send the first row and the sum = 0

        return result ;
    }
};