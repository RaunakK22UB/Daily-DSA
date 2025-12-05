class Solution {
public:
    int countCollisions(string d) {
        
        int n = d.length();
        if(n==1 || n ==0) return 0;
        int i =0;
        int j =n-1;
        while(i < n && d[i]=='L'){
               i++;
        }

        while(j>0 && d[j]=='R'){
            j--;
        }

        int col = 0;
        while(i<=j){
            if(d[i]!='S'){  // or we can write d[i]=='L' || d[i]=='R'
                col++;
            }
            i++;
        }

        return col;
    }
};