class Solution {
public:
  
  //problem link -> https://leetcode.com/problems/the-skyline-problem/
  // here I have explained the whole code step by step 
  
    vector<vector<int>> getSkyline(vector<vector<int>>& b) {
        vector<pair<int,int>> cd;  //cd == coordinates
        vector<vector<int>> ans;   //for storing answer
        
        // FIRST STEP : to mark all starting and ending points
        // to indicate starting point height will be negetive
        // 2 , -10 means a building of height 10 is starting at 2
        
        for(auto x:b)
        {
            // here x is a vector -> [2,9,10]
            cd.push_back({x[0],-1*x[2]});  // starting point 2,-10
            cd.push_back({x[1],x[2]}); //ending point 9,10
        }
        
        // we sort it wrt values of x ( because answer must be sorted )
        // sorting based on x coordinate 
        // if x is same then it's based on increasing y
        
        // [2,-10] , [2,-9] , [2,-7] 
        
        sort(cd.begin(),cd.end());
        multiset<int,greater<int>> pq;  // multiset with max at top
        //we use multiset because it gives us an option to delete with find
        // which is not there is priority queue
        
        pq.insert(0);
        int prev = 0;

        for(auto &x : cd)
        {
            // here x is a pair
            int value = x.first;
            int height = x.second;
            
            if(height<0)  // means starting point of some building
                pq.insert(-height); //make it positive again and push
            else
                pq.erase(pq.find(height));
            
            int top = *pq.begin();  //pq.begin() gives iterator deref it
            if( prev != top)  // if the top changes then
            {
                ans.push_back({value,top});
                prev = top;  //  prev becomes the new top
            }
                
        }
        
        return ans;
        
        
    }
};
