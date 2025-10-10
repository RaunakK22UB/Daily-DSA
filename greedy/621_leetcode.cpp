class Solution {
public:
// easy question but little trick very little tricky 
// A->4 ,B-> 4, c-> 1 ,D->1 
// gadha ke andar slots hai ok 
// 4 A hai mtlb 2 2 chhor ke bithao ge to 3 gadha banega aur har gadha me 2 seat slots hai , yahi calculation varibales me kia hai niche dekho
// rahi min ka logic to iss example ko run karo(A->4 ,B-> 4, c-> 1 ,D->1 )
// we have to give minimum number of slot needded jab B char hai aur A bhi 4 hai hum ne 
// A_ _ A_ _ A_ _ A -> AB _ AB _ AB _ A 3 hi B ko rakha lets see abhi hum 3 B rakh dede te hai future me dekhenge fir C ko rakho aur D ko rakho  aur idealslot agar 0 nahi hua to ideal slot + size()
    int leastInterval(vector<char>& tasks, int n) {
          
           vector<int>mp(26,0);
           for(int i=0;i<tasks.size();i++){
                 mp[tasks[i]-'A']++;
           }
           sort(begin(mp),end(mp)); // sort acending according to there frequency then only we will take the highest from the back .
           int maxFreq = mp[25];
           int gadhas = maxFreq - 1;
           int idealslots = gadhas * n;

           for(int i =24;i>=0;i--){
               idealslots -= min(mp[i], gadhas);
           }
           if(idealslots > 0){
                 return tasks.size()+idealslot;
           }
               return tasks.size();   // agar zero hogaya idealslot to matalb sare jagah bhar gai aur sab char aagaye jagah pe 
           
    } 
};