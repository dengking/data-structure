[TOC]



# [Tree (graph theory)](https://en.wikipedia.org/wiki/Tree_(graph_theory))





# [Tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure))





# Application of tree data structure

## Representing  [hierarchy](https://en.wikipedia.org/wiki/Hierarchical) structure 

[Hierarchy](https://en.wikipedia.org/wiki/Hierarchical) structure is common in computer science, it often appears as a [tree structure](https://en.wikipedia.org/wiki/Tree_structure), it is obvious that [tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure)) is used to implement it. Here is examples of [tree structures](https://en.wikipedia.org/wiki/Tree_structure):

### [Operating system](https://en.wikipedia.org/wiki/Operating_system)

- [directory structure](https://en.wikipedia.org/wiki/Directory_structure) ([directory](https://en.wikipedia.org/wiki/Directory_(computing)))

### Sports

- [playoffs brackets](https://en.wikipedia.org/wiki/Bracket_(tournament))

### Computer Science(partial):

- [binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Red-Black Tree](https://en.wikipedia.org/wiki/Red-Black_Tree)
- [AVL tree](https://en.wikipedia.org/wiki/AVL_tree)
- [R-tree](https://en.wikipedia.org/wiki/R-tree)
- [binary expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree)

### Linguistics

#### [Formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) 

> In [linguistics](https://en.wikipedia.org/wiki/Linguistics), [**syntax**](https://en.wikipedia.org/wiki/Syntax) is the set of rules, principles, and processes that govern the structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)) (**sentence structure**) in a given [language](https://en.wikipedia.org/wiki/Natural_language), usually including [word order](https://en.wikipedia.org/wiki/Word_order). The term *syntax* is also used to refer to the study of such principles and processes.[[3\]](https://en.wikipedia.org/wiki/Syntax#cite_note-Chomsky_def-3) The goal of many syntacticians is to discover the [syntactic rules](https://en.wikipedia.org/wiki/Universal_grammar) common to all languages.
>
> Studies of the [syntactical](https://en.wikipedia.org/wiki/Syntax) aspects of languages(their internal **structural patterns**)  belongs to the [theory of formal language](https://en.wikipedia.org/wiki/Formal_language). In theory of formal language, [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) is used to describe structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)), that is [**syntax**](https://en.wikipedia.org/wiki/Syntax) .  [Formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) such as a [regular grammar](https://en.wikipedia.org/wiki/Regular_grammar) or [context-free grammar](https://en.wikipedia.org/wiki/Context-free_grammar), consists of its [formation rules](https://en.wikipedia.org/wiki/Formation_rule). The first step to describing the meaning of an utterance in language is to break it down part by part and look at its analyzed form (known as its [parse tree](https://en.wikipedia.org/wiki/Parse_tree) in computer science, and as its [deep structure](https://en.wikipedia.org/wiki/Deep_structure_and_surface_structure) in [generative grammar](https://en.wikipedia.org/wiki/Generative_grammar)).
>
> [Parse tree](https://en.wikipedia.org/wiki/Parse_tree)  is used in compiler, which reveal to us that tree can be used to describe the structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)) that is  [syntax](https://en.wikipedia.org/wiki/Syntax) and  [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) can be convert to [tree](https://en.wikipedia.org/wiki/Tree_(data_structure)).

If you have read book describe the **compiler technology**, for example the classic definitive book [Compilers: Principles, Techniques, and Tools](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) by Alfred V. Aho, Monica S. Lam, Ravi Sethi, and Jeffrey D. Ullman, you will be aware how important the tree structure is to the compiler. As described in chapter 2.2.3 Parse Trees:

> Tree data structures figure prominently in compiling.

There are some many tree in the book, such as [Parse tree](https://en.wikipedia.org/wiki/Parse_tree), [abstract syntax tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree), activation tree(in chapter 7.2.1 Activation Trees), [expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree).

Essentially Speaking, a **programming language** is a [formal language](https://en.wikipedia.org/wiki/Formal_language), what have been concluded in article structure is that 

>  Tree can be used to describe the structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)) that is  [syntax](https://en.wikipedia.org/wiki/Syntax) and  [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) can be convert to [tree](https://en.wikipedia.org/wiki/Tree_(data_structure)).

So it's natural to use trees in the compiling.

[Regular expression](https://en.wikipedia.org/wiki/Regular_expression), [algebraic expression](https://en.wikipedia.org/wiki/Algebraic_expression) can be described using  [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar), so given an expression, it can be converted to an equivalent  [parse tree](https://en.wikipedia.org/wiki/Parse_tree).



### [File format](https://en.wikipedia.org/wiki/File_format)

- [Document Object Model](https://en.wikipedia.org/wiki/Document_Object_Model)（[XML](https://en.wikipedia.org/wiki/XML)）
- [json](https://en.wikipedia.org/wiki/JSON)
- [yaml](https://en.wikipedia.org/wiki/YAML)



### [decision tree](https://en.wikipedia.org/wiki/Decision_tree)





## [Hierarchy](https://en.wikipedia.org/wiki/Hierarchy) structure and recursion

具备[hierarchical](https://en.wikipedia.org/wiki/Hierarchical)结构的往往具备recursive的特征，这一点在维基百科的词条[hierarchical](https://en.wikipedia.org/wiki/Hierarchical)中也有论述。



# [Representing trees](https://en.wikipedia.org/wiki/Tree_structure#Representing_trees)

There are many ways of visually representing tree structures. Almost always, these boil down to variations, or combinations, of a few basic styles:

### Classical node-link diagrams

Classical node-link diagrams, that connect nodes together with line segments:

```
	encyclopedia
	/			\
culture			science	
/		\
art		craft	

```

### Nested sets

[Nested sets](https://en.wikipedia.org/wiki/Nested_set_model) that use enclosure/containment to show parenthood, examples include [TreeMaps](https://en.wikipedia.org/wiki/Treemapping) and [fractal maps](https://en.wikipedia.org/w/index.php?title=Fractal_space_map&action=edit&redlink=1):

```

```

### Layered "icicle" diagrams

Layered "icicle" diagrams that use alignment/adjacency.

### Outlines and tree views

Lists or diagrams that use indentation, sometimes called "[outlines](https://en.wikipedia.org/wiki/Outline_(hierarchical))" or "[tree views](https://en.wikipedia.org/wiki/Tree_view)".



A tree view:

- encyclopedia
  - culture
    - **art**
    - **craft**
  - **science**



### Nested parentheses

*See also:* [Newick format](https://en.wikipedia.org/wiki/Newick_format) *and* [Dyck language](https://en.wikipedia.org/wiki/Dyck_language)

A correspondence to nested parentheses was first noticed by Sir [Arthur Cayley](https://en.wikipedia.org/wiki/Arthur_Cayley):

```
((art,craft)culture,science)encyclopedia
or
encyclopedia(culture(art,craft),science)
```

### Radial trees

*See also:* [Radial tree](https://en.wikipedia.org/wiki/Radial_tree)

Trees can also be [represented radially](https://en.wikipedia.org/wiki/Radial_tree):

```

art craft
\	/ 
culture
    |
encyclopedia
    |
science
```



# Implicit  tree 

https://en.wikipedia.org/wiki/Bottom-up_parsing

Tree is then merely implicit in the parser's actions.

类似的有递归调用树。

https://opendatastructures.org/ods-cpp/10_1_Implicit_Binary_Tree.html

An Implicit Binary Tree



[Implicit data structure](https://en.wikipedia.org/wiki/Implicit_data_structure)



函数的调用过程使用的是栈，正如在[Implicit data structure](https://en.wikipedia.org/wiki/Implicit_data_structure)中所介绍的，可以将tree保存到一个array中，函数调用过程中所使用的call stack其实就类似于将一棵树保存到栈中。



[Implicit *k*-d tree](https://en.wikipedia.org/wiki/Implicit_k-d_tree)



