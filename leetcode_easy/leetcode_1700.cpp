class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
           int arr[2]={0};
        
        for(auto &it : students){
              arr[it]++;   // we ahev arr of two size size 0th will have stundts count who like 0 sandwiche and vice versa for 1
        }

        for(int i=0;i<sandwiches.size();i++){
                   int sand = sandwiches[i];

                   if(arr[sand] == 0){ // if count of students for this sandwiche is 0 then now no one can eat the top one;

                     return sandwiches.size() -i ; // students left in queue
                        
    