[TOC]

# [Tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure))

In [computer science](https://en.wikipedia.org/wiki/Computer_science), a **tree** is a widely used [abstract data type](https://en.wikipedia.org/wiki/Abstract_data_type) (ADT)—or [data structure](https://en.wikipedia.org/wiki/Data_structure) implementing this ADT—that simulates a hierarchical [tree structure](https://en.wikipedia.org/wiki/Tree_structure), with a root value and subtrees of children with a [parent node](https://en.wikipedia.org/wiki/Tree_(data_structure)#Terminology), represented as a set of linked [nodes](https://en.wikipedia.org/wiki/Node_(computer_science)).

A tree data structure can be defined [recursively](https://en.wikipedia.org/wiki/Recursion) as a collection of [nodes](https://en.wikipedia.org/wiki/Node_(computer_science)) (starting at a root node), where each node is a data structure consisting of a value, together with a list of references to nodes (the "children"), with the constraints that no reference is duplicated, and none points to the root.

Alternatively, a tree can be defined abstractly as a whole (globally) as an [ordered tree](https://en.wikipedia.org/wiki/Ordered_tree), with a value assigned to each node. Both these perspectives are useful: while a tree can be analyzed mathematically as a whole, when actually represented as a data structure it is usually represented and worked with separately by node (rather than as a set of nodes and an [adjacency list](https://en.wikipedia.org/wiki/Adjacency_list) of edges between nodes, as one may represent a [digraph](https://en.wikipedia.org/wiki/Tree_(data_structure)#Digraphs), for instance). For example, looking at a tree as a whole, one can talk about "the parent node" of a given node, but in general as a data structure a given node only contains the list of its children, but does not contain a reference to its parent (if any).

## Preliminary definition

A tree is a **nonlinear** data structure, compared to arrays, linked lists, stacks and queues which are linear data structures. A tree can be empty with no nodes or a tree is a structure consisting of one node called the root and zero or one or more subtrees.

[![img](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d7/Directed_Graph_Edge.svg/133px-Directed_Graph_Edge.svg.png)](https://en.wikipedia.org/wiki/File:Directed_Graph_Edge.svg) Each linear list is trivially a tree

[![img](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e2/Graph_single_node.svg/70px-Graph_single_node.svg.png)](https://en.wikipedia.org/wiki/File:Graph_single_node.svg)Not a tree: cycle A→A. A is the root but it also has a parent.

[![img](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1c/Directed_graph%2C_cyclic.svg/161px-Directed_graph%2C_cyclic.svg.png)](https://en.wikipedia.org/wiki/File:Directed_graph,_cyclic.svg)Not a tree: cycle B→C→E→D→B. B has more than one parent (inbound edge).

[![img](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a3/Directed_graph_with_branching_SVG.svg/77px-Directed_graph_with_branching_SVG.svg.png)](https://en.wikipedia.org/wiki/File:Directed_graph_with_branching_SVG.svg)Not a tree: undirected cycle 1-2-4-3. 4 has more than one parent (inbound edge).

[![img](https://upload.wikimedia.org/wikipedia/commons/thumb/7/78/Directed_graph%2C_disjoint.svg/99px-Directed_graph%2C_disjoint.svg.png)](https://en.wikipedia.org/wiki/File:Directed_graph,_disjoint.svg)Not a tree: two non-[connected](https://en.wikipedia.org/wiki/Connectivity_(graph_theory)#Definitions_of_components,_cuts_and_connectivity) parts, A→B and C→D→E. There is more than one root.



## Mathematical definition



### Unordered tree

Mathematically, an *unordered tree*[[1\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-Kuboyama2007-1) (or "algebraic tree"[[2\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-2)) can be defined as an [algebraic structure](https://en.wikipedia.org/wiki/Algebraic_structure) {\displaystyle (X,parent)}![{\displaystyle (X,parent)}](https://wikimedia.org/api/rest_v1/media/math/render/svg/9049b4eb1a922cfa5b919d2a75cf36465cce3eab) where *X* is the non-empty carrier set of *nodes* and *parent* is a function on *X* which assigns each node *x* its "parent" node, *parent*(*x*). The structure is subject to the condition that every non-empty [subalgebra](https://en.wikipedia.org/wiki/Subalgebra) must have the same [fixed point](https://en.wikipedia.org/wiki/Fixed_point_(mathematics)). That is, there must be a unique "root" node *r*, such that *parent*(*r*) = *r* and for every node *x*, some iterative application *parent*(*parent*(…*parent*(*x*)…)) equals *r*.

***SUMMARY*** :数学的定义强调的是每个node需要有一个且只有一个parent；









### Ordered tree



