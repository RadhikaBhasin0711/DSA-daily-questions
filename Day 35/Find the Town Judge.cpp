class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n+1);
        vector<int> outdegree(n+1);

        for(auto i:trust){
            int u=i[0];
            int v=i[1];

            outdegree[u]++;
            indegree[v]++;
        }

        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 && outdegree[i]==0){
                return i;
            }
        }
        return -1;
    }
};
