# Tree structure

与tree structure相关的有词：

- [Hierarchy](https://en.wikipedia.org/wiki/Hierarchy)
- [Nesting (computing)](https://en.wikipedia.org/wiki/Nesting_(computing))

Software engineer对这两个词肯定不会陌生，但不知是否知晓它们都可以使用tree structure来进行表示，希望在阅读了本文后，读者下次在遇到这两个词的时候能够产生这样的反映。

看看维基百科[Tree structure](https://en.wikipedia.org/wiki/Tree_structure)：

A **tree structure** or **tree diagram** is a way of representing the [hierarchical](https://en.wikipedia.org/wiki/Hierarchy) nature of a [structure](https://en.wikipedia.org/wiki/Structure) in a graphical form. It is named a "tree structure" because the classic [representation](https://en.wikipedia.org/wiki/Tree_structure#Representing_trees) resembles a [tree](https://en.wikipedia.org/wiki/Tree), even though the chart is generally upside down compared to an actual tree, with the "part of the plant in the ground" at the top and the "leaves" at the bottom.

从字面的意思来看，[Hierarchy](https://en.wikipedia.org/wiki/Hierarchy)和[nesting](https://en.wikipedia.org/wiki/Nesting_(computing))这两个词描述了structure的性质，比较形象。下面我们来看看它们它们是如何转换为tree structure的。



## 从[nesting](https://en.wikipedia.org/wiki/Nesting_(computing))到tree structure

[Nesting](https://en.wikipedia.org/wiki/Nesting_(computing))表示的关系：包含关系

nesting结构的表示方法：

- 括号
- tree structure

TODO: 如何使用tree structure来表示nesting structure？

### Nesting 与 hierarchy

Nesting结构具备hierarchy特性，可以这样来进行解释：

最外层是是第一层、它所直接包含的元素都属于第二层、依次递归。







## 草稿



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



[Nested set model](https://en.wikipedia.org/wiki/Nested_set_model)

[Nested set](https://en.wikipedia.org/wiki/Nested_set)

[Hereditary property](https://en.wikipedia.org/wiki/Hereditary_property)