[TOC]



# [Difference between Trees and Graphs | Trees vs. Graphs](https://freefeast.info/difference-between/difference-between-trees-and-graphs-trees-vs-graphs/)

|                               | Trees                                                        | Graphs                                                       |
| :---------------------------- | :----------------------------------------------------------- | ------------------------------------------------------------ |
| **Path**                      | Tree is special form of graph i.e. **minimally connected graph** and having only one path between any two vertices. | In graph there can be more than one path i.e. graph can have uni-directional or bi-directional paths (edges) between nodes |
| **Loops**                     | Tree is a special case of graph having no **loops**, no **circuits** and no self-loops. | Graph can have loops, circuits as well as can have **self-loops**. |
| **Root Node**                 | In tree there is exactly one root node and every **child** have only one **parent**. | In graph there is no such concept of **root** node.<br/>NOTE: In graph, a node can be specified as the root node. |
| **Parent Child relationship** | In trees, there is parent child relationship so flow can be there with direction top to bottom or vice versa. | In Graph there is no such parent child relationship.         |
| **Complexity**                | Trees are less complex then graphs as having no cycles, no self-loops and still connected. | Graphs are more complex in compare to trees as it can have cycles, loops etc |
| **Types of Traversal**        | Tree traversal is a kind of special case of traversal of graph. Tree is traversed in **Pre-Order**, **In-Order** and **Post-Order** (all three in DFS or in BFS algorithm) | Graph is traversed by **DFS: Depth First Search** and in **BFS : Breadth First Search algorithm** |
| **Connection Rules**          | In trees, there are many rules / restrictions for making connections between nodes through edges. | In graphs no such rules/ restrictions are there for connecting the nodes through edges. |
| **DAG**                       | Trees come in the category of **DAG : Directed Acyclic Graphs** is a kind of directed graph that have no cycles. | Graph can be **Cyclic or Acyclic**.                          |
| **Different Types**           | Different types of trees are : **Binary Tree , Binary Search Tree, AVL tree, Heaps**. | There are mainly two types of Graphs : **Directed and Undirected graphs**. |
| **Applications**              | Tree applications : sorting and searching like Tree Traversal & Binary Search. | Graph applications : Coloring of maps, in OR (**PERT & CPM**), algorithms, Graph coloring, job scheduling, etc. |
| **No. of edges**              | Tree always has **n-1** edges.                               | In Graph, no. of edges depend on the graph.                  |
| **Model**                     | Tree is a **hierarchical model**.                            | Graph is a **network model**.                                |
| **Figure**                    | [![Differnce between Trees and Graphs : Trees](https://freefeast.info/wp-content/uploads//2013/06/tree.jpg)](https://freefeast.info/general-it-articles/difference-between-trees-and-graphs-trees-vs-graphs/attachment/tree/) | [![Difference between trees and graphs : Graph](https://freefeast.info/wp-content/uploads//2013/06/Graph.jpg)](https://freefeast.info/general-it-articles/difference-between-trees-and-graphs-trees-vs-graphs/attachment/graph-2/) |





# linear structure VS nonlinear structure

| [linear](https://en.wikipedia.org/wiki/List_of_data_structures#Linear_data_structures) |                          nonlinear                           |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| [Arrays](https://en.wikipedia.org/wiki/List_of_data_structures#Arrays)、[Lists](https://en.wikipedia.org/wiki/List_of_data_structures#Lists) | [Trees](https://en.wikipedia.org/wiki/List_of_data_structures#Trees)、[Graphs](https://en.wikipedia.org/wiki/List_of_data_structures#Graphs)、[Hash-based structures](https://en.wikipedia.org/wiki/List_of_data_structures#Hash-based_structures) |



将线性转换为非线性，如使用hierarchy，binary-search-tree和skip-list就是采用的这种做法，它们都是hierarchy结构；

在binary-search-tree中，需要防止有序的数据插入，因为它可能导致binary-search-tree退化为一个线性的list；

arrays, linked lists, stacks and queues which are linear data structures

算法中其实也涉及linear；




# binary search tree VS hash table

在[Binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree)中，有如下对比：

> Binary search trees keep their keys in sorted order, so that lookup and other operations can use the principle of [binary search](https://en.wikipedia.org/wiki/Binary_search): when looking for a key in a tree (or a place to insert a new key), they traverse the tree from root to leaf, making comparisons to keys stored in the nodes of the tree and deciding, on the basis of the comparison, to continue searching in the left or right subtrees. On average, this means that each comparison allows the operations to skip about half of the tree, so that each lookup, insertion or deletion takes [time proportional to](https://en.wikipedia.org/wiki/Time_complexity) the [logarithm](https://en.wikipedia.org/wiki/Logarithm) of the number of items stored in the tree. This is much better than the [linear time](https://en.wikipedia.org/wiki/Linear_time) required to find items by key in an (unsorted) array, but slower than the corresponding operations on [hash tables](https://en.wikipedia.org/wiki/Hash_table).



# B tree VS hash table

## [Introduction to the B-Tree](https://cstack.github.io/db_tutorial/parts/part7.html)

> Why is a tree a good data structure for a database?
>
> - Searching for a particular value is fast (logarithmic time)
> - Inserting / deleting a value you’ve already found is fast (constant-ish time to rebalance)
> - Traversing a range of values is fast (unlike a hash map)



# Self-balancing binary search tree VS hash table

## [Self-balancing binary search tree](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)

> Self-balancing binary search trees can be used in a natural way to construct and maintain ordered lists, such as [priority queues](https://en.wikipedia.org/wiki/Priority_queue). They can also be used for [associative arrays](https://en.wikipedia.org/wiki/Associative_array); key-value pairs are simply inserted with an ordering based on the key alone. In this capacity, self-balancing BSTs have [a number of advantages and disadvantages](https://en.wikipedia.org/wiki/Associative_array#Efficient_representations) over their main competitor, [hash tables](https://en.wikipedia.org/wiki/Hash_table). One advantage of self-balancing BSTs is that they allow fast (indeed, asymptotically optimal) enumeration of the items *in key order*, which hash tables do not provide. One disadvantage is that their lookup algorithms get more complicated when there may be multiple items with the same key. Self-balancing BSTs have better worst-case lookup performance than hash tables (O(log n) compared to O(n)), but have worse average-case performance (O(log n) compared to O(1)).

# [B-tree](https://en.wikipedia.org/wiki/B-tree) VS [self-balancing trees](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree)



在[Search tree](https://en.wikipedia.org/wiki/Search_tree)中有这样的一段话：

> B-trees are generalizations of binary search trees in that they can have a variable number of subtrees at each node. While child-nodes have a pre-defined range, they will not necessarily be filled with data, meaning B-trees can potentially waste some space. The advantage is that B-trees do not need to be re-balanced as frequently as other [self-balancing trees](https://en.wikipedia.org/wiki/Self-balancing_binary_search_tree).



# [B-tree](https://en.wikipedia.org/wiki/B-tree) VS [skip list](https://en.wikipedia.org/wiki/Skip_list)

看了这两种DS的原理，发现两者其实有些类似：以空间换时间，即通过构建数据之间的更多关系来加速数据的access，显然这些关系是需要耗费空间来存储的，所以就是前面所述的以空间换时间，其实当我看完了两者的原理后，觉得它们其实非常类似，尤其是看到[B-tree](https://en.wikipedia.org/wiki/B-tree)的主要应用是在DB或file system中实现索引后，我发掘其实它们的原理的共同之处其实就是index；通过重建index来加速数据的access；

于是我就想，既然[B-tree](https://en.wikipedia.org/wiki/B-tree)的主要应用是在DB或file system中实现索引，那么[skip list](https://en.wikipedia.org/wiki/Skip_list)是否也能够呢？

检索了一番后，发现其实是有应用案例的：

- [MemSQL](https://en.wikipedia.org/wiki/MemSQL) uses skip lists as its prime indexing structure for its database technology.

- [The Story Behind MemSQL’s Skiplist Indexes](https://www.memsql.com/blog/what-is-skiplist-why-skiplist-index-for-memsql/)



其实发现，在文件系统中多使用B-tree，而在内存中则多使用skip list

# 各种ADT的实现

## [Associative array](https://en.wikipedia.org/wiki/Associative_array)的实现

The two major solutions to the dictionary problem are a [hash table](https://en.wikipedia.org/wiki/Hash_table) or a [search tree](https://en.wikipedia.org/wiki/Search_tree).[[1\]](https://en.wikipedia.org/wiki/Associative_array#cite_note-gt-1)[[2\]](https://en.wikipedia.org/wiki/Associative_array#cite_note-ms-2)[[4\]](https://en.wikipedia.org/wiki/Associative_array#cite_note-clrs-4)[[5\]](https://en.wikipedia.org/wiki/Associative_array#cite_note-dietzfelbinger-5)  b


## set的实现

使用tree来实现

使用skip list来实现