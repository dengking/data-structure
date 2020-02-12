# Application of tree data structure

> NOTE: The content is concluded from the following post:
>
> - [Tree structure](https://en.wikipedia.org/wiki/Tree_structure#Examples_of_tree_structures)
> - [Tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure)#Common_uses)

|                         Application                          |                                                              |
| :----------------------------------------------------------: | ------------------------------------------------------------ |
| Representing  [hierarchy](https://en.wikipedia.org/wiki/Hierarchical) structure | [Unordered tree](https://en.wikipedia.org/wiki/Tree_(data_structure)#Unordered_tree) |
| Representing [sorted lists](https://en.wikipedia.org/wiki/Sorting_algorithm) of data | [Ordered tree](https://en.wikipedia.org/wiki/Tree_(data_structure)#Ordered_tree)/[Search tree](https://en.wikipedia.org/wiki/Search_tree) |



## Representing  [hierarchy](https://en.wikipedia.org/wiki/Hierarchical) structure 

[Hierarchy](https://en.wikipedia.org/wiki/Hierarchical) structure is common in computer science, it often appears as a [tree structure](https://en.wikipedia.org/wiki/Tree_structure), it is obvious that [tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure)) is used to implement it. 



Here is examples of [tree structures](https://en.wikipedia.org/wiki/Tree_structure):

### [Operating system](https://en.wikipedia.org/wiki/Operating_system)

#### [directory structure](https://en.wikipedia.org/wiki/Directory_structure) ([directory](https://en.wikipedia.org/wiki/Directory_(computing)))

see also: 

[tree (command)](https://en.wikipedia.org/wiki/Tree_(command))

[Path (computing)](https://en.wikipedia.org/wiki/Path_(computing))

#### [process tree](https://en.wikipedia.org/wiki/Pstree)

### Sports

- [playoffs brackets](https://en.wikipedia.org/wiki/Bracket_(tournament))

### Computer Science(partial):

#### [binary search tree](https://en.wikipedia.org/wiki/Binary_search_tree)



#### [Red-Black Tree](https://en.wikipedia.org/wiki/Red-Black_Tree)



#### [AVL tree](https://en.wikipedia.org/wiki/AVL_tree)



#### [R-tree](https://en.wikipedia.org/wiki/R-tree)



#### [binary expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree)



#### [Namespace](https://en.wikipedia.org/wiki/Namespace)

namespace的应用场景实在太多，在维基百科的[Namespace](https://en.wikipedia.org/wiki/Namespace)对它总结地非常好。在对它进行思考的时候，发觉使用namespace来组织的数据最终就是hierarchy结构。其实也可以简单地将namespace看做是括号。

### Linguistics

#### [Formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) 

> In [linguistics](https://en.wikipedia.org/wiki/Linguistics), [**syntax**](https://en.wikipedia.org/wiki/Syntax) is the set of rules, principles, and processes that govern the structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)) (**sentence structure**) in a given [language](https://en.wikipedia.org/wiki/Natural_language), usually including [word order](https://en.wikipedia.org/wiki/Word_order). The term *syntax* is also used to refer to the study of such principles and processes.[[3\]](https://en.wikipedia.org/wiki/Syntax#cite_note-Chomsky_def-3) The goal of many syntacticians is to discover the [syntactic rules](https://en.wikipedia.org/wiki/Universal_grammar) common to all languages.
>
> Studies of the [syntactical](https://en.wikipedia.org/wiki/Syntax) aspects of languages(their internal **structural patterns**)  belongs to the [theory of formal language](https://en.wikipedia.org/wiki/Formal_language). In theory of formal language, [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) is used to describe structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)), that is [**syntax**](https://en.wikipedia.org/wiki/Syntax) .  [Formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) such as a [regular grammar](https://en.wikipedia.org/wiki/Regular_grammar) or [context-free grammar](https://en.wikipedia.org/wiki/Context-free_grammar), consists of its [formation rules](https://en.wikipedia.org/wiki/Formation_rule). The first step to describing the meaning of an utterance in language is to break it down part by part and look at its analyzed form (known as its [parse tree](https://en.wikipedia.org/wiki/Parse_tree) in computer science, and as its [deep structure](https://en.wikipedia.org/wiki/Deep_structure_and_surface_structure) in [generative grammar](https://en.wikipedia.org/wiki/Generative_grammar)).
>
> [Parse tree](https://en.wikipedia.org/wiki/Parse_tree)  is used in compiler, which reveal to us that tree can be used to describe the structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)) that is  [syntax](https://en.wikipedia.org/wiki/Syntax) and  [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) can be convert to [tree](https://en.wikipedia.org/wiki/Tree_(data_structure)).

If you have read book describing the **compiler technology**, for example the classic definitive book [Compilers: Principles, Techniques, and Tools](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) by Alfred V. Aho, Monica S. Lam, Ravi Sethi, and Jeffrey D. Ullman, you will be aware how important the tree structure is to the compiler. As described in chapter 2.2.3 Parse Trees:

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



## Representing [sorted lists](https://en.wikipedia.org/wiki/Sorting_algorithm) of data