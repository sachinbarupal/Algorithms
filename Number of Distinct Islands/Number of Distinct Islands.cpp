//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void dfs(int br,int bc,int sr,int sc,vector<vector<int>> &g, vector<vector<int>> &vis,
                                int dr[],int dc[],vector< pair<int,int> > &temp){
        int n=g.size(), m = g[0].size();
        
        vis[sr][sc]=1;
        temp.push_back({sr-br,sc-bc});
        
        for(int i=0;i<4;++i){
            int nr = sr + dr[i], nc = sc + dc[i];
            if(nr>=0 and nc>=0 and nr<n and nc<m and g[nr][nc]==1 and !vis[nr][nc])
                dfs(br,bc,nr,nc,g,vis,dr,dc,temp);
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        int dr[4] = {-1,1,0,0}, dc[4] = {0,0,-1,1};
        set<vector<pair<int,int>>> st;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]==1 and !vis[i][j]){
                    vector<pair<int,int>> temp;
                    dfs(i,j,i,j,grid,vis,dr,dc,temp);
                    st.insert(temp);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
