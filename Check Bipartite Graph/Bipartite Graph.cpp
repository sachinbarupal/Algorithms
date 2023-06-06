
// USING BFS 

    bool bfs(int node,vector<int> adj[],vector<int> &col){
        queue<int> q;   q.push(node);
	    col[node]= 0;
	    
	    while(!q.empty()){
	        int node = q.front(); q.pop();
	        int newCol = !col[node];
	        
	        for(auto &child : adj[node]){
	            if(col[child]==-1){
	                col[child]=newCol; q.push(child);
	            }
	            else if(col[child]!=newCol) return false;
	        }
	   }
	   return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	   vector<int> col(V,-1);
	   
	   for(int i=0;i<V;++i){
	       if(col[i]==-1){
	           if(!check(i,adj,col)) return false;
	       }
	   }
	   return true;
	}
  //******************************************************************************
  
  //USING DFS
  
  bool dfs(int node,int color,vector<int> adj[],vector<int> &col){
        col[node] = color;
        
        for(auto &child : adj[node]){
            if(col[child]==-1){
                int newCol = !color;
                if(dfs(child,!color,adj,col)==false) return false;
            }
            else if(col[child] != !color) return false;
        }
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	   vector<int> col(V,-1);
	   
	   for(int i=0;i<V;++i){
	       if(col[i]==-1){
	           if(dfs(i,0,adj,col) == false) return false;
	       }
	   }
	   return true;
	}
  
