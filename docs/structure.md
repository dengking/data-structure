# 结构

我们使用data structure来保存数据，那么是否想过这样的问题：数据有哪些结构呢？显然，对结构的研究有助于我们选择合适的data structure来保存我们的数据，并且当我们知道事物结构后，能够更好地使用计算机来处理它。

我们不仅要关注事物的物理结构，还需要关注逻辑结构。

Structure是一个宏大的话题，在这篇文章中，我仅仅从[computer science](https://en.wikipedia.org/wiki/Computer_science)的角度来探讨structure.

## [Structure](https://en.wikipedia.org/wiki/Structure)

A **structure** is an arrangement and **organization** of interrelated elements in a material object or [system](https://en.wikipedia.org/wiki/System), or the object or system so organized. Material structures include man-made objects such as [buildings](https://en.wikipedia.org/wiki/Building) and [machines](https://en.wikipedia.org/wiki/Machine) and natural objects such as [biological organisms](https://en.wikipedia.org/wiki/Organism), [minerals](https://en.wikipedia.org/wiki/Mineral) and [chemicals](https://en.wikipedia.org/wiki/Chemical_substance). Abstract structures include [data structures](https://en.wikipedia.org/wiki/Data_structure) in [computer science](https://en.wikipedia.org/wiki/Computer_science) and [musical form](https://en.wikipedia.org/wiki/Musical_form). 

Types of structure include a [hierarchy](https://en.wikipedia.org/wiki/Hierarchy) (a cascade of one-to-many relationships), a [network](https://en.wikipedia.org/wiki/Complex_network) featuring many-to-many [links](https://en.wikipedia.org/wiki/Link_(geometry)), or a [lattice](https://en.wikipedia.org/wiki/Lattice_(order)) featuring connections between components that are neighbors in space.

> NOTE: In [computer science](https://en.wikipedia.org/wiki/Computer_science), [tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure)) is often used to describe  [hierarchy](https://en.wikipedia.org/wiki/Hierarchy)  structure, [graph(data structure)](https://en.wikipedia.org/wiki/Graph_(abstract_data_type)) is often used to describe  [network](https://en.wikipedia.org/wiki/Complex_network) structure. The two kind of structures is very importan in computer science.

In computer science, structure is everywhere:

- [Data structure](https://en.wikipedia.org/wiki/Data_structure)

- [Software architecture](https://en.wikipedia.org/wiki/Software_architecture)

> NOTE: 对结构的分析，是一种全局的、高屋建瓴的分析。

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

按照数据的关系来对它进行组织，比如：

- 按照parent-child关系来组织process
- 按照inheritance来组织类

