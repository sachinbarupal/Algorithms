### [Is Bipartite Graph?](https://practice.geeksforgeeks.org/problems/bipartite-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bipartite-graph)
## MEDIUM
Given an adjacency list of a graph adj  of V no. of vertices having 0 based index. Check whether the graph is bipartite or not.
 
## Example 1:

Input: 
![Example -1](https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700410/Web/Other/cdb283af-c52d-46df-8646-5017b45b5a13_1685086658.png)

Output: 1
Explanation: The given graph can be colored 
in two colors so, it is a bipartite graph.

## Example 2:

Input:
![Example-2](https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700410/Web/Other/471d9abf-5d47-48ea-aa35-2dace9f5a2da_1685086659.png)

Output: 0
Explanation: The given graph cannot be colored in two colors such that color of adjacent vertices differs. 

## Your Task:
You don't need to read or print anything. Your task is to complete the function isBipartite() which takes V denoting no. of vertices and 
adj denoting adjacency list of the graph and returns a boolean value true if the graph is bipartite otherwise returns false.
 
```
Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)
```
## Constraints:
* 1 ≤ V, E ≤ 105
