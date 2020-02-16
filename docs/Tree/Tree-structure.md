# Tree structure

本文所要讨论的是“树形形状”，标题中的“structure”在所要表达的含义是“形状”。

本文基于维基百科[Tree structure](https://en.wikipedia.org/wiki/Tree_structure)。

A **tree structure** or **tree diagram** is a way of representing the [hierarchical](https://en.wikipedia.org/wiki/Hierarchy) nature of a [structure](https://en.wikipedia.org/wiki/Structure) in a graphical form. It is named a "tree structure" because the classic [representation](https://en.wikipedia.org/wiki/Tree_structure#Representing_trees) resembles a [tree](https://en.wikipedia.org/wiki/Tree).

在[Hierarchy](../Structure/Hierarchy.md)中，我们已经总结了**tree structure**对应的是 nested hierarchy structure。**tree structure** 的最最典型的特性是：一个节点可以有（包含）多个子节点，一个子节点只能够有一个父节点，root节点没有父节点。**tree structure** 的 “一个子节点只能够有一个父节点” 的要求，将它和graph区分开来了（参见[Discrete Mathematics and Its Applications](https://www.amazon.com/Discrete-Mathematics-Applications-Kenneth-Rosen/dp/125967651X)的Tree章节）。

描述**tree structure**的这个最最典型特性的词是：nesting ，nesting这个词的含义是丰富的，它的表面意思是“嵌套”，同时它蕴含着“包含”的含义；“嵌套”蕴含着“递归”；后面我们将统一”nesting“解释为“嵌套包含”。

我第一次碰到这个词是在阅读[Compilers Principles, Techniques and Tools Second Edition(aka ***dragon book***)](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) 的[7.2.1 Activation Trees](https://dengking.github.io/compiler-principle/Chapter-7-Run-Time-Environments/7.2-Stack-Allocation-of-Space/#721-activation-trees)节时：

> Stack allocation would not be feasible if procedure calls, or activations of procedures, did not **nest in time**. The following example illustrates nesting of procedure calls.

这是activations of procedures的**nest in time**特性，使得“Stack allocation”变得可行，并且activations of procedures的过程是tree structure的。

第二次碰到这个词是在阅读[Hierarchy](../Structure/Hierarchy.md)的“Nested hierarchy”节时，至此才更加觉得它非常能够体现**tree structure**的本质。

更多关于nesting的描述，参见：[Nesting (computing)](https://en.wikipedia.org/wiki/Nesting_(computing))和[Nested sets](https://en.wikipedia.org/wiki/Nested_set)）。

显然具备nesting特性，就具备了如下特性：

- [hierarchical](https://en.wikipedia.org/wiki/Hierarchy)，即树结构是层次的
- [recursive](../Data-structure/Recursive-data-type.md)，即树结构是具备递归特性的



## 哪些关系能够形成树形状

这个问题在[Hierarchy](../Structure/Hierarchy.md)中同样提问过，本段从一些具体的关系的例子出发来进行总结。

### Example: nesting关系

在前面我们已经说明了tree structure的最最根本的特征是nesting，所有的具备nesting关系的数据，按照该关系进行组织，都能够形成tree structure。在计算机科学中，存在着太多太多具备nesting关系的数据了，在下面的[Examples of tree structures](#Examples of tree structures)会枚举具备这种关系的结构。

其实有很多的关系本质上都是nesting关系：

#### 推导关系

Formal grammar的production的head可以derive得到body，这个过程其实非常类似于expand，其实expand就是包含，也就是nesting 关系。更多关于推导关系参见[推导关系分析](#推导关系分析)。

### Example: Parent-child关系

一个parent可以有多个children，一个child只能够有一个parent。其实Parent-child关系也可以归入到nesting关系中。

### 最终答案

这种关系需要是N:1的（记得在大学的数据库课程所使用的教材中有过这样的理论，这个理论应该是属于[Relational algebra](https://en.wikipedia.org/wiki/Relational_algebra)，参见：[Relational model](https://en.wikipedia.org/wiki/Relational_model)、[Database normalization](https://en.wikipedia.org/wiki/Database_normalization)）。

这种关系应该是[Transitive relation](https://en.wikipedia.org/wiki/Transitive_relation)。

这个关系不能是[Reflexive relation](https://en.wikipedia.org/wiki/Reflexive_relation)。

可以这样不严谨地进行描述：**具备传递性的包含关系**。

## Examples of tree structures

### [Directory structure](https://en.wikipedia.org/wiki/Directory_structure) ([directory](https://en.wikipedia.org/wiki/Directory_(computing)))

nesting关系。

See also: 

[Tree (command)](https://en.wikipedia.org/wiki/Tree_(command))

[Path (computing)](https://en.wikipedia.org/wiki/Path_(computing))

### [Process tree](https://en.wikipedia.org/wiki/Pstree)

parent-children关系。

### [File format](https://en.wikipedia.org/wiki/File_format)

nesting关系。

- [Document Object Model](https://en.wikipedia.org/wiki/Document_Object_Model)（[XML](https://en.wikipedia.org/wiki/XML)）
- [json](https://en.wikipedia.org/wiki/JSON)
- [yaml](https://en.wikipedia.org/wiki/YAML)

### [Namespace](https://en.wikipedia.org/wiki/Namespace)

nesting关系。

Namespace的应用场景实在太多，在维基百科的[Namespace](https://en.wikipedia.org/wiki/Namespace)对它总结地非常好。在对它进行思考的时候，发觉使用namespace来组织的数据最终就是hierarchy结构。其实也可以简单地将namespace看做是括号。

### Expression

[binary expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree)

### Source code

[Parse tree](https://en.wikipedia.org/wiki/Parse_tree)、[Abstract syntax tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree)。

nesting关系。

### Activation tree

nesting关系。

函数的调用过程也是可以使用tree来进行描述的，参见[Compilers Principles, Techniques and Tools Second Edition(aka ***dragon book***)](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) 的[7.2.1 Activation Trees](https://dengking.github.io/compiler-principle/Chapter-7-Run-Time-Environments/7.2-Stack-Allocation-of-Space/#721-activation-trees)。



### Linguistics

在语言学中，基本上是使用tree来描述语言的结构。

If you have read book describing the **compiler technology**, for example the classic definitive book [Compilers: Principles, Techniques, and Tools](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) by Alfred V. Aho, Monica S. Lam, Ravi Sethi, and Jeffrey D. Ullman, you will be aware how important the tree structure is to the compiler. As described in chapter 2.2.3 Parse Trees:

> Tree data structures figure prominently in compiling.

There are some many tree in the book, such as [Parse tree](https://en.wikipedia.org/wiki/Parse_tree), [abstract syntax tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree), activation tree(in chapter 7.2.1 Activation Trees), [expression tree](https://en.wikipedia.org/wiki/Binary_expression_tree).

Essentially Speaking, a **programming language** is a [formal language](https://en.wikipedia.org/wiki/Formal_language), what have been concluded in article structure is that 

>  Tree can be used to describe the structure of [sentences](https://en.wikipedia.org/wiki/Sentence_(linguistics)) that is  [syntax](https://en.wikipedia.org/wiki/Syntax) and  [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar) can be convert to [tree](https://en.wikipedia.org/wiki/Tree_(data_structure)).

So it's natural to use trees in the compiling.

[Regular expression](https://en.wikipedia.org/wiki/Regular_expression), [algebraic expression](https://en.wikipedia.org/wiki/Algebraic_expression) can be described using  [formal grammar](https://en.wikipedia.org/wiki/Formal_grammar), so given an expression, it can be converted to an equivalent  [parse tree](https://en.wikipedia.org/wiki/Parse_tree).



## Nesting 与 hierarchy

Nesting结构具备hierarchy特性，可以这样来进行解释：

最外层是是第一层、它所直接包含的元素都属于第二层、依次递归。





## 使用括号来表示树

[Nesting](https://en.wikipedia.org/wiki/Nesting_(computing))结构在computer science是非常常见，它是一种典型的hierarchy结构，nesting结构可以使用括号的方式来进行表示：

```
( () () ( ( ) ) )
```

Nesting的中文含义是“嵌套”，显然，它能够描述元素之间的嵌套关系；上面使用括号来表示nesting结构，因为括号所能够表达的“包含”关系和“嵌套”关系是基本类似的，关于此，参见下面的[Structure and relation](#Structure and relation)。

上述结构是可以表示成树的，如下：

```
					( )
	
    ( )				( )				 ( )
    								
    								 ( )
```

例子包括：

- C和C++中，使用`{}`来定义block，block中可以再包含block，从而形成nesting结构

- 龙书7.2.1 Activation Trees：

  > Stack allocation would not be feasible if procedure calls, or activations of procedures, did not **nest** in time. 

  即函数的执行过程，从时间上来看也是嵌套的。



## 推导关系分析

扩展一个使用tree描述的关系的最终目标是获得所有的叶子节点，它的基本算法是：一个节点，只要是non-terminal元素，就需要对它进行expand，其实这个过程就是[Parse tree](https://en.wikipedia.org/wiki/Parse_tree)的生成过程；

所以其实，我上述所描述的都是[Parse tree](https://en.wikipedia.org/wiki/Parse_tree)的生成过程过程；

下面是一段描述上述**具备传递性的包含关系**的获取所有的可能的叶子节点的简单算法，它需要将所有的内节点进行扩展，最终的结果只能够包含叶子节点而不能包含叶子节点

```
self.expanded_fen_zi_dict[fen_zi_word_info] = list()
to_expand_words = list(retriever_context.fen_zi_detail_dict[fen_zi_word_str]) # 待扩展词列表
while len(to_expand_words):
    word = to_expand_words.pop() # 一次只处理一个词
    if word in retriever_context.fen_zi_detail_dict: # 当前词相当于一个内节点
        to_expand_words.extend(retriever_context.fen_zi_detail_dict[word]) # 扩展当前词，并且将它添加到待扩展词列表中
    else: # 当前词是一个页节点
        self.expanded_fen_zi_dict[fen_zi_word_info].append(word) # 将该词进行输出

```



## 具备传递性的包含关系例子

一些包含关系具有传递性（回去看离散数学对这的描述），比如A包含B，B又包含C，则A应该包含所有的C。

如下是一个例子：

```
有价证券:股票,债券,权证,资产支持证券,买入返售金融资产

债券:国债,企债,非政策型金融债,地方债,可转债,政策性金融债,公司债,央行票据,次级债

```

`有价证券`包含`债券`，债券又包含`国债,企债,非政策型金融债,地方债,可转债,政策性金融债,公司债,央行票据,次级债`，所以`有价证券`包括`国债,企债,非政策型金融债,地方债,可转债,政策性金融债,公司债,央行票据,次级债`。

上述关系是可以使用tree来进行描述的

上述结构可以使用一个dict来进行保存：所有作为key的都是non-terminal，都需要进行扩展；



## See also

- [Hierarchy](https://en.wikipedia.org/wiki/Hierarchy)
- [Nesting (computing)](https://en.wikipedia.org/wiki/Nesting_(computing))
- [Nested set model](https://en.wikipedia.org/wiki/Nested_set_model)
- [Nested set](https://en.wikipedia.org/wiki/Nested_set)
- [Hereditary property](https://en.wikipedia.org/wiki/Hereditary_property)

Software engineer对这两个词肯定不会陌生，但不知是否知晓它们都可以使用tree structure来进行表示，希望在阅读了本文后，读者下次在遇到这两个词的时候能够产生这样的反映。