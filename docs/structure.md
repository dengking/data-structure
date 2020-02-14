# 结构

在computer science中，我们使用data structure来保存数据，那么是否想过这样的问题：数据有哪些结构呢？

从发展历程来看，计算机科学家们应该是受到了实际生活中的各种各样的结构的启发，然后使用programming language来描述这些结构，由此而发展成为了我们今天的data structure学科，简而言之：计算机科学中的data structure其实就是对各种structure的计算机实现。

显然，对结构的研究有助于我们选择合适的data structure来保存我们的数据，并且当我们知道事物结构后，能够更好地使用计算机来处理它。

需要注意的是，结构不仅仅局限于我们肉眼可见的物理结构，它还包括我们肉眼无法看到的逻辑结构。

Structure是一个宏大的话题，在这篇文章中，我仅仅从[computer science](https://en.wikipedia.org/wiki/Computer_science)的角度来探讨structure.

## [Structure](https://en.wikipedia.org/wiki/Structure)

A **structure** is an arrangement and **organization** of interrelated elements in a material object or [system](https://en.wikipedia.org/wiki/System), or the object or system so organized. Material structures include man-made objects such as [buildings](https://en.wikipedia.org/wiki/Building) and [machines](https://en.wikipedia.org/wiki/Machine) and natural objects such as [biological organisms](https://en.wikipedia.org/wiki/Organism), [minerals](https://en.wikipedia.org/wiki/Mineral) and [chemicals](https://en.wikipedia.org/wiki/Chemical_substance). Abstract structures include [data structures](https://en.wikipedia.org/wiki/Data_structure) in [computer science](https://en.wikipedia.org/wiki/Computer_science) and [musical form](https://en.wikipedia.org/wiki/Musical_form). 

Types of structure include a [hierarchy](https://en.wikipedia.org/wiki/Hierarchy) (a cascade of one-to-many relationships), a [network](https://en.wikipedia.org/wiki/Complex_network) featuring many-to-many [links](https://en.wikipedia.org/wiki/Link_(geometry)), or a [lattice](https://en.wikipedia.org/wiki/Lattice_(order)) featuring connections between components that are neighbors in space.



> NOTE: In [computer science](https://en.wikipedia.org/wiki/Computer_science), [tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure)) is often used to describe  [hierarchy](https://en.wikipedia.org/wiki/Hierarchy)  structure, [graph(data structure)](https://en.wikipedia.org/wiki/Graph_(abstract_data_type)) is often used to describe  [network](https://en.wikipedia.org/wiki/Complex_network) structure. The two kind of structures is very importan in computer science.

### [Hierarchy](https://en.wikipedia.org/wiki/Hierarchical) 

[Hierarchy](https://en.wikipedia.org/wiki/Hierarchical) structure is common in computer science, it often appears as a [tree structure](https://en.wikipedia.org/wiki/Tree_structure), which will be described in `tree` chapter.

#### [Nesting (computing)](https://en.wikipedia.org/wiki/Nesting_(computing))

Nesting结构在computer science是非常常见，它是一种典型的hierarchy结构，nesting结构可以使用括号的方式来进行表示：

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

### [Chain](https://en.wikipedia.org/wiki/Chain)



## Structure and relation

结构能够表达元素间的关系，或者说，我们按照关系来组织数据，它们最终可以形成某种特定的结构，比如：

- 按照parent-child关系来组织process，最终形成的是树
- 按照inheritance来组织类，如果不允许多继承的话，则最终形成的是树；如果允许多继承的话，则最终形成的是图

正如在上面所述的：“a [hierarchy](https://en.wikipedia.org/wiki/Hierarchy) (a cascade of one-to-many relationships)”，即hierarchy能够描述一对多的关系。而list则只能够表达一对一的关系。

按照有的关系来组织数据，它们会形成树结构（不会成环），比如parent-children关系；按照有的关系来组织数据，它们会形成图（会成环）。那是关系的什么特效决定了这种结果呢？





## 各个学科中的结构

对事物结构的分析，在各种学科中都非常普遍。下面枚举的是我接触过的学科。

### Computer science

[Data structure](https://en.wikipedia.org/wiki/Data_structure)

[Software architecture](https://en.wikipedia.org/wiki/Software_architecture)



### [Linguistics](https://en.wikipedia.org/wiki/Linguistics)

[Grammar](https://en.wikipedia.org/wiki/Grammar)

[Syntax](https://en.wikipedia.org/wiki/Syntax)