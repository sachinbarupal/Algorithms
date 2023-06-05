### [Detect cycle in an undirected graph using BFS](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph)
## MEDIUM
Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not.
Graph is in the form of adjacency list where adj[i] contains all the nodes ith node is having edge with.

## Example 1:
```
Input:  
V = 5, E = 5
adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}} 
Output: 1
```
![Example-1](https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700219/Web/Other/891791f9-1abb-45b1-80f2-7af46d73dcd2_1685086491.png)

Explanation: 
1->2->3->4->1 is a cycle.

## Example 2:
```
Input: 
V = 4, E = 2
adj = {{}, {2}, {1, 3}, {2}}
Output: 0
```
![Example-2](https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700219/Web/Other/d8cbd97e-406e-4f50-a38c-6a58747df876_1685086491.png)

Explanation: No cycle in the graph.

## Your Task:
You don't need to read or print anything. Your task is to complete the function isCycle() which takes V denoting the number of vertices and adjacency list as input parameters and returns a boolean value denoting 
if the undirected graph contains any cycle or not, return 1 if a cycle is present else return 0.

NOTE: The adjacency list denotes the edges of the graph where edges[i] stores all other vertices to which ith vertex is connected.
```
Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)
````

## Constraints:
* 1 ≤ V, E ≤ 105
