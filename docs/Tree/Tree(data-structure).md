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

> NOTE: 下面两段比较难懂，需要set theory的知识作为基础。
>
> 其实可以简单理解，使用tree来表示集合的包含关系，这就好比是括号了。

### Unordered tree

Mathematically, an *unordered tree*[[1\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-Kuboyama2007-1) (or "algebraic tree"[[2\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-2)) can be defined as an [algebraic structure](https://en.wikipedia.org/wiki/Algebraic_structure) $ (X,parent) $ where *X* is the non-empty carrier set of *nodes* and *parent* is a function on *X* which assigns each node *x* its "parent" node, *parent*(*x*). The structure is subject to the condition that every non-empty [subalgebra](https://en.wikipedia.org/wiki/Subalgebra) must have the same [fixed point](https://en.wikipedia.org/wiki/Fixed_point_(mathematics)). That is, there must be a unique "root" node *r*, such that *parent*(*r*) = *r* and for every node *x*, some iterative application *parent*(*parent*(…*parent*(*x*)…)) equals *r*.

> NOTE :数学的定义强调的是每个node需要有一个且只有一个parent；需要注意的是，这里是数学上的定义，计算机实现的时候，往往不是定义parent，而是反向定义children。



There are several equivalent definitions. As the closest alternative, one can define unordered trees as [*partial* algebras](https://en.wikipedia.org/wiki/Partial_algebra) (*X*, *parent*) which are obtained from the total algebras described above by letting *parent*(*r*) be undefined. That is, the root *r* is the only node on which the *parent* function is not defined and for every node *x*, the root is [reachable](https://en.wikipedia.org/wiki/Reachability) from *x* in the [directed graph](https://en.wikipedia.org/wiki/Directed_graph) (*X*, *parent*). This definition is in fact coincident with that of an [anti-arborescence](https://en.wikipedia.org/wiki/Arborescence_(graph_theory)). The [TAoCP](https://en.wikipedia.org/wiki/TAoCP) book uses the term *oriented tree*.[[3\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-TAoCP_oriented_trees-3)



Another equivalent definition is that of a [set-theoretic tree](https://en.wikipedia.org/wiki/Tree_(set_theory)) that is singly-rooted and whose height is at most [ω](https://en.wikipedia.org/wiki/Ordinal_number#Ordinals_extend_the_natural_numbers) (a finite-ish tree[[4\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-Unger2012-4)). That is, the algebraic structures (*X*, *parent*) are equivalent to [partial orders](https://en.wikipedia.org/wiki/Partially_ordered_set) $ (X,\leq ) $ that have a [top element](https://en.wikipedia.org/wiki/Greatest_and_least_elements) *r* and whose every principal [upset](https://en.wikipedia.org/wiki/Upper_set) (aka [principal filter](https://en.wikipedia.org/wiki/Principal_filter)) is a finite [chain](https://en.wikipedia.org/wiki/Total_order#Chains). To be precise, we should speak about an [inverse](https://en.wikipedia.org/wiki/Inverse_order) set-theoretic tree since the set-theoretic definition usually employs opposite ordering. The correspondence between (*X*, *parent*) and (*X*, ≤) is established via reflexive [transitive closure](https://en.wikipedia.org/wiki/Transitive_closure) / [reduction](https://en.wikipedia.org/wiki/Transitive_reduction), with the reduction resulting in the "partial" version without the root cycle.



We can refer to the four equivalent characterizations as to *tree as an algebra*, *tree as a partial algebra*, *tree as a partial order*, and *tree as a prefix order*. There is also a fifth equivalent definition – that of a [graph-theoretic rooted tree](https://en.wikipedia.org/wiki/Tree_(graph_theory)#Rooted_tree) which is just a connected acyclic [rooted](https://en.wikipedia.org/wiki/Rooted_graph) [graph](https://en.wikipedia.org/wiki/Graph_theory).



### Ordered tree

The structures introduced in the previous subsection form just the core "hierarchical" part of tree data structures that appear in computing. In most cases, there is also an additional "horizontal" ordering between siblings. In [search trees](https://en.wikipedia.org/wiki/Search_tree) the order is commonly established by the "key" or value associated with each sibling, but in many trees that is not the case. For example, XML documents, lists within JSON files, and many other structures have order that does not depend on the values in the nodes, but is itself data — sorting the paragraphs of a novel alphabetically would lose information.

The correspondent [expansion](https://en.wikipedia.org/wiki/Expansion_(model_theory)) of the previously described tree structures (*X*, ≤) can be defined by endowing each sibling set with a linear order as follows.[[13\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-Hidders2005-14)[[14\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-Dau2007-15) An alternative definition according to Kuboyama[[1\]](https://en.wikipedia.org/wiki/Tree_(data_structure)#cite_note-Kuboyama2007-1) is presented in the next subsection.





## Terminology used in trees

### Node

A node is a structure which may contain a value or condition, or represent a separate data structure.

### Root

The top node in a tree, the prime ancestor.

### Child

A node directly connected to another node when moving away from the root, an immediate descendant.

### Parent

The converse notion of a child, an immediate ancestor.

### Siblings

A group of nodes with the same parent.

### Neighbor

Parent or child.

### Descendant

A node reachable by repeated proceeding from parent to child. Also known as *subchild*.

### Ancestor

A node reachable by repeated proceeding from child to parent.

### Leaf / External node (not common)

A node with no children.

### Branch node / Internal node

A node with at least one child.

### Degree

For a given node, its number of children. A leaf is necessarily degree zero. The degree of a tree is the degree of its root.

### Degree of tree

The degree of the root.

### Edge

The connection between one node and another.

### Path

A sequence of nodes and edges connecting a node with a descendant.

### Distance

The number of edges along the shortest path between two nodes.

### Depth

The distance between a node and the root.

### Level

1 + the number of edges between a node and the root, i.e. (Depth + 1)

### Height

The number of edges on the longest path between a node and a descendant leaf.

### Width

The number of nodes in a level.

### Breadth

The number of leaves.

### Height of tree

The height of the root node or the maximum level of any node in the tree

### Forest

A set of *n* ≥ 0 disjoint trees.

### Sub Tree

A tree *T* is a tree consisting of a node in *T* and all of its descendants in *T*.

### Ordered Tree

A rooted tree in which an ordering is specified for the children of each vertex.

### Size of a tree

Number of nodes in the tree.



## Representations

There are many different ways to represent trees; common representations represent the nodes as [dynamically allocated](https://en.wikipedia.org/wiki/Dynamic_memory_allocation) records with pointers to their children, their parents, or both, or as items in an [array](https://en.wikipedia.org/wiki/Array_data_structure), with relationships between them determined by their positions in the array (e.g., [binary heap](https://en.wikipedia.org/wiki/Binary_heap)).

Indeed, a binary tree can be implemented as a list of lists (a list where the values are lists): the head of a list (the value of the first term) is the left child (subtree), while the tail (the list of second and subsequent terms) is the right child (subtree). This can be modified to allow values as well, as in Lisp [S-expressions](https://en.wikipedia.org/wiki/S-expression), where the head (value of first term) is the value of the node, the head of the tail (value of second term) is the left child, and the tail of the tail (list of third and subsequent terms) is the right child.

In general a node in a tree will not have pointers to its parents, but this information can be included (expanding the data structure to also include a pointer to the parent) or stored separately. Alternatively, upward links can be included in the child node data, as in a [threaded binary tree](https://en.wikipedia.org/wiki/Threaded_binary_tree).



## Common operations

- Enumerating all the items
- Enumerating a section of a tree
- Searching for an item
- Adding a new item at a certain position on the tree
- Deleting an item
- [Pruning](https://en.wikipedia.org/wiki/Pruning_(algorithm)): Removing a whole section of a tree
- [Grafting](https://en.wikipedia.org/w/index.php?title=Grafting_(algorithm)&action=edit&redlink=1): Adding a whole section to a tree
- Finding the root for any node
- Finding the [lowest common ancestor](https://en.wikipedia.org/wiki/Lowest_common_ancestor) of two nodes



## Common uses

- Representing [hierarchical](https://en.wikipedia.org/wiki/Hierarchical) data such as [syntax trees](https://en.wikipedia.org/wiki/Abstract_syntax_tree)
- Storing data in a way that makes it efficiently [searchable](https://en.wikipedia.org/wiki/Search_algorithm) (see [binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree) and [tree traversal](https://en.wikipedia.org/wiki/Tree_traversal))
- Representing [sorted lists](https://en.wikipedia.org/wiki/Sorting_algorithm) of data
- As a workflow for [compositing](https://en.wikipedia.org/wiki/Digital_compositing) digital images for [visual effects](https://en.wikipedia.org/wiki/Visual_effects)[*[citation needed](https://en.wikipedia.org/wiki/Wikipedia:Citation_needed)*]
- Storing [Barnes-Hut](https://en.wikipedia.org/wiki/Barnes-Hut) trees used to simulate galaxies.

