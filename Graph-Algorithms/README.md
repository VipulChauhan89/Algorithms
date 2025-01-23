# Graph Data Structure

## **Introduction**  
A **Graph** is a non-linear data structure consisting of a set of **vertices (nodes)** and a set of **edges** that connect pairs of vertices. Graphs are widely used to represent and analyze relationships between entities in various fields.

---

## **Types of Graphs**

1. **Null Graph**  
   A graph with no edges.

2. **Trivial Graph**  
   A graph with only one vertex.

3. **Undirected Graph**  
   A graph where edges have no direction.

4. **Directed Graph (Digraph)**  
   A graph where edges have a direction, indicating a one-way relationship between vertices.

5. **Connected Graph**  
   A graph where every node is reachable from any other node.

6. **Disconnected Graph**  
   A graph where at least one node is not reachable from another node.

7. **Regular Graph**  
   A graph where the degree of every vertex is equal to \( k \).

8. **Complete Graph**  
   A graph where every node is connected to every other node.

9. **Cycle Graph**  
   A graph where the graph itself forms a cycle, with each vertex having a degree of 2.

10. **Cyclic Graph**  
    A graph containing at least one cycle.

11. **Directed Acyclic Graph (DAG)**  
    A directed graph that does not contain any cycles.

12. **Bipartite Graph**  
    A graph where vertices can be divided into two sets such that no two vertices within the same set are connected.

13. **Weighted Graph**  
    A graph where edges have associated weights (e.g., cost, distance).

---

## **Graph Representation**

### **Adjacency Matrix**  
- A 2D matrix where rows and columns denote vertices.  
- Each entry in the matrix represents the weight of the edge between corresponding vertices.
- [Code](001_Create_graph_using_adjacency_matrix.cpp)

Example: 
``` 
0 1 1 0
1 0 1 0
1 1 0 1
0 0 1 0
```


### **Adjacency List**  
- A collection of linked lists or arrays.  
- Each vertex points to its adjacent vertices.
- [Code](002_Create_graph_using_adjacency_list.cpp)

Example:  
```
0: 1 2
1: 0 2
2: 0 1 3
3: 2
```


---

## **Comparison: Adjacency Matrix vs. Adjacency List**

| **Action**          | **Adjacency Matrix** | **Adjacency List** |  
|----------------------|----------------------|--------------------|  
| Adding Edge          | O(1)                | O(1)               |  
| Removing Edge        | O(1)                | O(N)               |  
| Initialization       | O(N²)               | O(N)               |  

---

## **Basic Operations**

1. **Insertion/Deletion of Nodes**  
   - Add or remove vertices.  
   - Adjust edges in adjacency list or matrix.

2. **Insertion/Deletion of Edges**  
   - Update adjacency list or matrix.

3. **Searching**  
   - Locate specific entities.

4. **Traversal**  
   - Explore all vertices using BFS or DFS.

---

## **Difference Between Tree and Graph**

| **Feature**  | **Tree**         | **Graph**          |  
|--------------|------------------|--------------------|  
| Structure    | Hierarchical     | Random             |  
| Cycles       | No               | Yes (can exist)    |  
| Connectivity | Always connected | May or may not be connected |  

---

## **Applications of Graph Data Structure**

1. **Social Networks**  
   Representing users as vertices and relationships as edges.

2. **Computer Networks**  
   Representing the topology of routers and switches.

3. **Transportation**  
   Representing places and paths (e.g., roads, flights).

4. **Neural Networks**  
   Vertices as neurons, edges as synapses.

5. **Compilers**  
   Dependency analysis, register allocation, and query optimization.

6. **Robotics**  
   Path planning for autonomous vehicles.

7. **Project Management**  
   Dependencies between tasks and their scheduling.

8. **Optimization Problems**  
   - Minimum spanning tree for network cost reduction.  
   - Shortest path problems (e.g., Dijkstra's algorithm).

---

## **Advantages of Graph Data Structure**

1. Models complex relationships without restrictions like trees or arrays.  
2. Useful for solving real-world problems, including clustering and pathfinding.  
3. Represents complex data structures in a simple way.  

---

## **Disadvantages of Graph Data Structure**

1. Can be computationally expensive for large graphs.  
2. Difficult to visualize and analyze large or complex graphs.  
3. Prone to bugs in algorithm design and implementation.  

---

## **FAQs on Graph Data Structure**

### 1. **What is a graph?**  
**Answer**: A structure of vertices connected by edges.

### 2. **What are the different types of graphs?**  
**Answer**: Directed, undirected, weighted, cyclic, acyclic, etc.

### 3. **What is a weighted graph?**  
**Answer**: A graph where edges have weights, representing costs or distances.

### 4. **What is a path in a graph?**  
**Answer**: A sequence of vertices connected by edges.

### 5. **What is a cycle in a graph?**  
**Answer**: A path that starts and ends at the same vertex without revisiting edges.

### 6. **What are spanning trees and minimum spanning trees?**
**Answer**:  
 - **Spanning Tree**: A tree including all vertices of a graph.  
   - **Minimum Spanning Tree**: A spanning tree with minimum edge weight sum.

### 7. **What algorithms are used for graph traversal?** 
**Answer**: 
   - Depth First Search (DFS)  
   - Breadth First Search (BFS)

### 8. **What is the degree of a vertex in a graph?**
**Answer**: The degree of a vertex in a graph is the number of edges incident to that vertex. In a directed graph, the indegree of a vertex is the number of incoming edges, and the outdegree is the number of outgoing edges.

---
# Breadth First Search (BFS) for a Graph

## **Introduction**  
Breadth First Search (BFS) is a fundamental graph traversal algorithm. It begins with a node and first traverses all its adjacent nodes. Once all adjacents are visited, it proceeds to their adjacents.

BFS is different from DFS as it visits the closest vertices first. It is used in popular graph algorithms like Dijkstra’s shortest path, Kahn’s Algorithm, and Prim’s Algorithm. BFS can also detect cycles, find shortest paths in unweighted graphs, and solve many other problems. [Code](003_BFS_in_Adjacency_list.cpp)

---

## **BFS from a Given Source**

The BFS algorithm starts from a given source and explores all reachable vertices. It is similar to the Breadth-First Traversal of a tree, but graphs may contain cycles, so a **visited array** is used to avoid processing a node more than once.

### **Algorithm Steps**

1. **Initialization**  
   - Enqueue the given source vertex into a queue.  
   - Mark it as visited.

2. **Exploration**  
   - While the queue is not empty:  
     - Dequeue a node and visit it (e.g., print its value).  
     - For each unvisited neighbor of the dequeued node:  
       - Enqueue the neighbor.  
       - Mark the neighbor as visited.

3. **Termination**  
   - Repeat step 2 until the queue is empty.

This ensures that all nodes are visited in a breadth-first manner, starting from the source.

---

## **Complexity Analysis**

1. **Time Complexity**  
   - **O(V + E)**: BFS explores all vertices and edges. In the worst case, every vertex and edge is visited once.  
     - **V**: Number of vertices  
     - **E**: Number of edges  

2. **Space Complexity**  
   - **O(V)**: BFS uses a queue to track vertices. In the worst case, the queue can contain all vertices.

---

## **Applications of BFS in Graphs**

1. **Shortest Path Finding**  
   - BFS finds the shortest path between two nodes in an unweighted graph.  
   - By tracking the parent of each node during traversal, the shortest path can be reconstructed.

2. **Cycle Detection**  
   - BFS can detect cycles in a graph.  
   - If a node is visited twice, it indicates a cycle.

3. **Connected Components**  
   - BFS identifies connected components.  
   - A connected component is a set of nodes reachable from each other.

4. **Topological Sorting**  
   - BFS can perform topological sorting on Directed Acyclic Graphs (DAGs).

5. **Level Order Traversal**  
   - BFS is used for level order traversal of binary trees.

6. **Network Routing**  
   - BFS finds the shortest path in networks, useful for routing data packets.

---

## **FAQs on BFS**

### **Q1: What is BFS and how does it work?**  
**Answer**: BFS systematically explores a graph by visiting all vertices at one level before moving to the next. Starting from a source, it uses a queue to track unvisited neighbors, ensuring all nodes are visited breadth-first.

### **Q2: What are the applications of BFS?**  
**Answer**: BFS applications include shortest path finding, cycle detection, topological sorting, finding connected components, and solving puzzles like mazes or Sudoku.

### **Q3: What is the time complexity of BFS?**  
**Answer**: The time complexity of BFS is **O(V + E)**, where **V** is the number of vertices and **E** is the number of edges.

### **Q4: What is the space complexity of BFS?**  
**Answer**: The space complexity of BFS is **O(V)**, as it uses a queue to store vertices.

### **Q5: What are the advantages of using BFS?**  
**Answer**: BFS is simple, efficient for finding shortest paths in unweighted graphs, and ensures all vertices are visited.

---

# Depth First Search (DFS) for a Graph

## **Introduction**  
Depth First Search (DFS) is a fundamental graph traversal algorithm. It explores all adjacent vertices one by one. Once an adjacent vertex is visited, DFS recursively visits all vertices reachable through that vertex before moving to the next adjacent vertex.  

DFS is similar to tree traversal, where the left subtree is fully traversed before moving to the right subtree. The main difference is that graphs may contain cycles (a node may be visited more than once). To handle this, a **visited array** is used to ensure no vertex is processed multiple times. [Code](004_DFS_in_Adjacency_list.cpp)

---

## **DFS from a Given Source**

The DFS algorithm starts from a given source and explores all reachable vertices. It is analogous to **Preorder Tree Traversal**, where the root is visited first, followed by its children.  

Since graphs may contain loops or cycles, an extra visited array ensures no vertex is revisited.

### **Algorithm Steps**

1. **Initialization**  
   - Mark the source vertex as visited.  
   - Process the source vertex (e.g., print its value).  

2. **Recursive Exploration**  
   - For each unvisited adjacent vertex of the current vertex:  
     - Mark it as visited.  
     - Recur for the adjacent vertex.

3. **Termination**  
   - Continue until all vertices reachable from the source are visited.

DFS can also be implemented iteratively using a stack, but the recursive approach is more common.

---

## **Complexity Analysis**

1. **Time Complexity**  
   - **O(V + E)**: DFS visits every vertex at most once and traverses every edge at most once.  
     - **V**: Number of vertices  
     - **E**: Number of edges  

2. **Space Complexity**  
   - **O(V + E)**:  
     - Visited array of size **V**.  
     - Stack space for recursive function calls (can go up to **V**).

---

## **Applications of DFS in Graphs**

1. **Cycle Detection**  
   - DFS can detect cycles in both directed and undirected graphs.  

2. **Topological Sorting**  
   - DFS is used to perform topological sorting of Directed Acyclic Graphs (DAGs).  

3. **Connected Components**  
   - DFS identifies connected components in an undirected graph.  

4. **Path Finding**  
   - DFS can find all paths between two nodes in a graph.  

5. **Maze Solving**  
   - DFS can solve maze problems by exploring all possible paths.  

6. **Articulation Points and Bridges**  
   - DFS is used to find articulation points and bridges in a graph.  

---

## **FAQs on Depth First Search (DFS)**

### **Q1: What is DFS and how does it work?**  
**Answer**: DFS is a graph traversal algorithm that explores all adjacent vertices of a node before moving to the next level. Starting from a source vertex, it marks the vertex as visited and recursively explores all its neighbors.

### **Q2: What are the applications of DFS?**  
**Answer**: DFS is used in cycle detection, topological sorting, pathfinding, finding connected components, maze solving, and identifying articulation points and bridges.

### **Q3: What is the time complexity of DFS?**  
**Answer**: The time complexity of DFS is **O(V + E)**, where **V** is the number of vertices and **E** is the number of edges.

### **Q4: What is the space complexity of DFS?**  
**Answer**: The space complexity of DFS is **O(V + E)**, due to the visited array and the stack used for recursion.

### **Q5: How does DFS differ from BFS?**  
**Answer**: BFS explores vertices level by level, while DFS explores vertices depth-first. BFS uses a queue, while DFS uses recursion or a stack.

---

# Difference Between BFS and DFS

**Breadth-First Search (BFS)** and **Depth-First Search (DFS)** are two fundamental algorithms used for traversing or searching graphs and trees. Below is a detailed comparison between the two approaches. [BFS Code](003_BFS_in_Adjacency_list.cpp), [DFS Code](004_DFS_in_Adjacency_list.cpp)

---

### **Comparison Table**

| **Parameters**         | **BFS**                                                                                                                                                             | **DFS**                                                                                                                      |
|-------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------|
| **Stands for**          | Breadth First Search                                                                                                                                               | Depth First Search                                                                                                          |
| **Data Structure**      | Uses **Queue** data structure for traversal.                                                                                                                       | Uses **Stack** data structure for traversal.                                                                                |
| **Definition**          | Traverses all nodes on the same level before moving to the next level.                                                                                            | Traverses as far as possible along each branch before backtracking.                                                        |
| **Conceptual Difference** | Builds the tree **level by level**.                                                                                                                               | Builds the tree **sub-tree by sub-tree**.                                                                                  |
| **Approach Used**       | Works on the concept of **FIFO (First In First Out)**.                                                                                                             | Works on the concept of **LIFO (Last In First Out)**.                                                                       |
| **Suitable For**        | Best suited for finding solutions closer to the **source vertex**.                                                                                                | More effective for finding solutions far from the **source vertex**.                                                       |
| **Applications**        | - Used for problems such as **bipartite graphs** and **shortest path finding** in unweighted graphs.                                                              | - Useful for problems such as finding **strongly connected components** or working with **acyclic graphs**.                |
|                         | - BFS ensures the shortest path in an unweighted graph if the edge weights are the same.                                                                          | - DFS is preferred when solutions are deep in the graph or when exploring all possible paths exhaustively is necessary.     |
|                         | - Common applications: **Topological Sorting**, **Cycle Detection**, etc.                                                                                         | - Common applications: **Topological Sorting**, **Cycle Detection**, etc.                                                  |

---

## **Key Takeaways**

- **BFS** is ideal when exploring all nodes within a certain level or when finding the shortest path in an unweighted graph.
- **DFS** is better suited for exploring deep paths or working with problems like finding connected components or cycles in a graph.

Both algorithms have unique use cases and can sometimes be used interchangeably depending on the problem's nature.

---


