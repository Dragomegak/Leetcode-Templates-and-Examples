/*
On a campus represented as a 2D grid, there are N workers and M bikes, with N <= M. Each worker and bike is a 2D coordinate on this grid.

We assign one unique bike to each worker so that the sum of the Manhattan distances between each worker and 
their assigned bike is minimized.

The Manhattan distance between two points p1 and p2 is Manhattan(p1, p2) = |p1.x - p2.x| + |p1.y - p2.y|.
Return the minimum possible sum of Manhattan distances between each worker and their assigned bike.

Input: workers = [[0,0],[2,1]], bikes = [[1,2],[3,3]]
Output: 6

Input: workers = [[0,0],[1,1],[2,0]], bikes = [[1,0],[2,2],[2,1]]
Output: 4

Note:
0 <= workers[i][0], workers[i][1], bikes[i][0], bikes[i][1] < 1000
All worker and bike locations are distinct.
1 <= workers.length <= bikes.length <= 10
*/

class Solution {
private:
    int dist(vector<int>& worker, vector<int>& bike){
        return abs(worker[0]-bike[0])+abs(worker[1]-bike[1]);
    }
public:
    int assignBikes(vector<vector<int>>& workers, vector<vector<int>>& bikes) {
        int n=workers.size(),m=bikes.size(),res=INT_MAX;
        vector<int> dp(1<<m,INT_MAX);
        for(int i=0;i<n;i++){
            if(i==0){
                for(int j=0;j<m;j++){
                    int cur=1<<j;
                    dp[cur]=dist(workers[0],bikes[j]);
                    if(n==1)
                        res=min(res,dp[cur]);
                }
            }
            else{
                vector<int> temp(1<<m,INT_MAX);
                for(int j=0;j<dp.size();j++){
                    if(dp[j]==INT_MAX) continue;
                    for(int k=0;k<m;k++){
                        int next=(j|(1<<k));
                        if(next!=j){
                            temp[next]=min(temp[next],dp[j]+dist(workers[i], bikes[k]));
                            if(i==n-1)
                                res=min(res,temp[next]);
                        }
                    }
                }
                dp=temp;
            }
        }
        return res;
    }
};
