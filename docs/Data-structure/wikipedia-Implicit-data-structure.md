[TOC]



# [Implicit data structure](https://en.wikipedia.org/wiki/Implicit_data_structure)

In [computer science](https://en.wikipedia.org/wiki/Computer_science), an **implicit [data structure](https://en.wikipedia.org/wiki/Data_structure)** or **space-efficient data structure** is a data structure that stores very little information other than the main or required data: a data structure that requires low [overhead](https://en.wikipedia.org/wiki/Overhead_(computing)). They are called "implicit" because the position of the elements carries meaning and relationship between elements; this is contrasted with the use of [pointers](https://en.wikipedia.org/wiki/Pointer_(computer_science)) to give an *explicit* relationship between elements. Definitions of "low overhead" vary, but generally means constant overhead; in [big O notation](https://en.wikipedia.org/wiki/Big_O_notation), *O*(1) overhead. A less restrictive definition is a [succinct data structure](https://en.wikipedia.org/wiki/Succinct_data_structure), which allows greater overhead.

## Examples

A trivial example of an implicit data structure is an *[array data structure](https://en.wikipedia.org/wiki/Array_data_structure)*, which is an implicit data structure for a [list](https://en.wikipedia.org/wiki/List_(abstract_data_type)), and requires only the constant overhead of the length; unlike a [linked list](https://en.wikipedia.org/wiki/Linked_list), which has a pointer associated with each data element, which *explicitly* gives the relationship from one element to the next. Similarly, a *[null-terminated string](https://en.wikipedia.org/wiki/Null-terminated_string)* is an implicit data structure for a [string](https://en.wikipedia.org/wiki/String_(computer_science)) (list of characters). These are considered very simple because they are static data structures (read-only), and only admit the simple operation of iteration over the elements.



Similarly simple is representing a [multi-dimensional array](https://en.wikipedia.org/wiki/Multi-dimensional_array) as a single 1-dimensional array, together with its dimensions. For example, representing an *m* × *n* array as a single list of length *m·n*, together with the numbers *m* and *n* (instead of as a 1-dimensional array of pointers to each 1-dimensional subarray). The elements need not be of the same type, and a [table](https://en.wikipedia.org/wiki/Table_(information)) of data (a list of [records](https://en.wikipedia.org/wiki/Record_(computer_science))) may similarly be represented implicitly as a flat (1-dimensional) list, together with the length of each [field](https://en.wikipedia.org/wiki/Field_(computer_science)), so long as each field has uniform size (so a single size can be used per field, not per record).



A less trivial example is a representing a sorted list by a *[sorted array](https://en.wikipedia.org/wiki/Sorted_array)*, which allows search in logarithmic time by [binary search](https://en.wikipedia.org/wiki/Binary_search). Contrast with a [search tree](https://en.wikipedia.org/wiki/Search_tree), specifically a [binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree), which also allows logarithmic-time search, but requires pointers. A sorted array is only efficient as a static data structure, as modifying the list is slow – unlike a binary search tree – but does not require the space overhead of a tree.



An important example of an implicit data structure is representing a [perfect binary tree](https://en.wikipedia.org/wiki/Perfect_binary_tree) as a list, in increasing order of depth, so root, first left child, first right child, first left child of first left child, etc. Such a tree occurs notably for an [ancestry chart](https://en.wikipedia.org/wiki/Ancestry_chart) to a give depth, and the implicit representation is known as an *[Ahnentafel](https://en.wikipedia.org/wiki/Ahnentafel)* (ancestor table).

> NOTE: Page [An Implicit Binary Tree](https://opendatastructures.org/ods-cpp/10_1_Implicit_Binary_Tree.html) give more detail of this.



This can be generalized to a [complete binary tree](https://en.wikipedia.org/wiki/Complete_binary_tree) (where the last level may be incomplete), which yields the best-known example of an implicit data structure, namely the *[binary heap](https://en.wikipedia.org/wiki/Binary_heap)*, which is an implicit data structure for a [priority queue](https://en.wikipedia.org/wiki/Priority_queue). This is more sophisticated than earlier examples because it allows multiple operations, and is an efficient *dynamic* data structure (it allows efficient modification of the data): not only **top**, but also **insert** and **pop**.



More sophisticated implicit data structures include the [beap](https://en.wikipedia.org/wiki/Beap) (bi-parental heap).



### implicit stack

https://mp.weixin.qq.com/s/YCWRBCay8PvnjomVcEBOTA