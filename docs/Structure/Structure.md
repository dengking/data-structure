# 结构

在computer science中，我们使用data structure来存储数据，那么是否想过这样的问题：what is structure？数据有哪些结构呢？

从发展历程来看，计算机科学家们应该是受到了实际生活中的各种各样的结构的启发，然后使用programming language来描述这些结构，由此而发展成为了我们今天的data structure学科，简而言之：计算机科学中的data structure其实就是对各种structure的计算机实现（描述）。

显然，对结构的研究有助于我们选择合适的data structure来保存我们的数据，并且当我们知道事物结构后，能够更好地使用计算机来处理它。

需要注意的是，结构不仅仅局限于我们肉眼可见的物理结构，它还包括我们肉眼无法看到的逻辑（抽象）结构。

Structure是一个宏大的话题，在这篇文章中，我仅仅从[computer science](https://en.wikipedia.org/wiki/Computer_science)的角度来探讨structure.

## What is structure?

下面是维基百科[Structure](https://en.wikipedia.org/wiki/Structure)中给出的定义：

> A **structure** is an arrangement and **organization** of interrelated（相互关联） **elements** in a material object or [system](https://en.wikipedia.org/wiki/System), or the object or system so organized. Material structures include man-made objects such as [buildings](https://en.wikipedia.org/wiki/Building) and [machines](https://en.wikipedia.org/wiki/Machine) and natural objects such as [biological organisms](https://en.wikipedia.org/wiki/Organism), [minerals](https://en.wikipedia.org/wiki/Mineral) and [chemicals](https://en.wikipedia.org/wiki/Chemical_substance). Abstract structures include [data structures](https://en.wikipedia.org/wiki/Data_structure) in [computer science](https://en.wikipedia.org/wiki/Computer_science) and [musical form](https://en.wikipedia.org/wiki/Musical_form). 

上述定义是general的，下面看看与计算机科学最最”亲密“的数学中对structure的定义：

[Mathematical structure](https://en.wikipedia.org/wiki/Mathematical_structure)

> In [mathematics](https://en.wikipedia.org/wiki/Mathematics), a **structure** is a set endowed with some additional features on the set (e.g., [operation](https://en.wikipedia.org/wiki/Operation_(mathematics)), [relation](https://en.wikipedia.org/wiki/Relation_(math)), [metric](https://en.wikipedia.org/wiki/Metric_(mathematics)), [topology](https://en.wikipedia.org/wiki/Topology#Topologies_on_sets)). Often, the additional features are attached or related to the set, so as to provide it with some additional meaning or significance.

[Structure (mathematical logic)](https://en.wikipedia.org/wiki/Structure_(mathematical_logic))：

> In [universal algebra](https://en.wikipedia.org/wiki/Universal_algebra) and in [model theory](https://en.wikipedia.org/wiki/Model_theory), a **structure** consists of a [set](https://en.wikipedia.org/wiki/Set_(mathematics)) along with a collection of [finitary operations](https://en.wikipedia.org/wiki/Finitary) and [relations](https://en.wikipedia.org/wiki/Finitary_relation) that are defined on it.

数学中的定义所使用的是[数学语言](https://en.wikipedia.org/wiki/Language_of_mathematics)，general定义中的“elements”使用 **数学语言** 来描述是  [set](https://en.wikipedia.org/wiki/Set_(mathematics)) ，general定义中的“interrelated”使用 **数学语言** 来描述是 [finitary operations](https://en.wikipedia.org/wiki/Finitary) and [relations](https://en.wikipedia.org/wiki/Finitary_relation)。

阅读了上述定义，直观感受就是：结构不仅仅关乎元素，而且关乎它们之间的关系。相同的元素，如果使用不同的关系来进行组织的话，所呈现出的结构是不同的。所以，我们在研究结构的时候，切莫忽视元素之间的关系。

> NOTE: 关于“关系”，参见[Relation](./Relation.md)。

通过上面的描述，现在让我们来回答本节标题中的问题：结构是我们按照某种关系对元素进行组织后形成的，它可能是有形的（物理的），也可能是是抽象的（逻辑的）。

“结构”是一个特殊的术语，后面当我们想要表达的是结构的形态（肉眼可见的）时，我们使用“形状”这个词。

## 结构的形状

当我们按照一定的关系对元素进行组织后，如果能够将它们给“画”出来，可能会呈现一定的“形状”，此处使用“形状”这个词，是为了与"结构""这个词有所区分，它强调的是，我们肉眼可以看到的形态，但是，平时，我们更多的还是使用结构这个词。

比较常见有：

- [Chain](https://en.wikipedia.org/wiki/Chain)，线性的

- [Hierarchy](https://en.wikipedia.org/wiki/Hierarchy)、[tree structure](https://en.wikipedia.org/wiki/Tree_structure)，非线性的，呈现出层次的结构
- [Network](https://en.wikipedia.org/wiki/Complex_network)， [graph](https://en.wikipedia.org/wiki/Graph_(discrete_mathematics))，非线性的 
- [Lattice](https://en.wikipedia.org/wiki/Lattice_(order))

In [computer science](https://en.wikipedia.org/wiki/Computer_science), [tree (data structure)](https://en.wikipedia.org/wiki/Tree_(data_structure)) is often used to describe  [hierarchy](https://en.wikipedia.org/wiki/Hierarchy)  structure, [graph(data structure)](https://en.wikipedia.org/wiki/Graph_(abstract_data_type)) is often used to describe  [network](https://en.wikipedia.org/wiki/Complex_network) structure. The two kind of structures is very importan in computer science.



## Structure and relation

通过前面的论述，我们已经知道：结构能够表达元素间的关系，或者说，我们按照关系来组织数据，它们最终可以形成某种特定的形状，比如：

- 按照parent-child关系来组织process，最终形成的是树
- 按照inheritance来组织类，如果不允许多继承的话，则最终形成的是树；如果允许多继承的话，则最终形成的是图

按照有的关系来组织数据，它们会形成树结构（不会成环），比如parent-children关系；按照有的关系来组织数据，它们会形成图（会成环）。那是关系的什么特效决定了这种结果呢？要搞清楚这个问题，需要对“关系”理论有一定的了解（参见[Relation](./Relation.md)），这个问题是本节需要进行探讨的一个话题。

如何来描述关系呢？不同的学科有不同的语言，比如数学中，可以使用函数来描述关系，计算机科学中呢？参见[Structure in computer science](#Structure in computer science)。

## 过程的结构

一些动态过程，比如函数执行过程、推导过程等，都呈现出一定的结构，本节对此进行分析，显然这种结构就是前面提到的逻辑结构。

### Proof过程呈现出list或tree结构

在阅读[Proof theory](https://en.wikipedia.org/wiki/Proof_theory)时，其中的一段话：

> Proofs are typically presented as inductively-defined [data structures](https://en.wikipedia.org/wiki/Data_structures) such as plain lists, boxed lists, or [trees](https://en.wikipedia.org/wiki/Tree_(data_structure)), which are constructed according to the [axioms](https://en.wikipedia.org/wiki/Axiom) and [rules of inference](https://en.wikipedia.org/wiki/Rule_of_inference) of the logical system.

上面这段话的意思是，如果将推导的过程可以展示为一种数据结构，比如列表、树。[Parse tree](http://en.wikipedia.org/wiki/Parse_tree)就是一个典型的例子，在自顶向下[parsing](https://en.wikipedia.org/wiki/Parsing)的过程中，parser不断地使用production进行推导（expand），最终生成了一棵parse tree。

#### Parsing过程产生[Parse tree](http://en.wikipedia.org/wiki/Parse_tree)

在工程[automata-and-formal-language](https://dengking.github.io/automata-and-formal-language/)的[Formal-language](https://dengking.github.io/automata-and-formal-language/Formal-language/)章节的[Summary-of-theory](https://dengking.github.io/automata-and-formal-language/Formal-language/Summary-of-theory/)文章中我们已经总结了生成parse tree的过程相当于进行Proof，所以将本节置于“Proof过程呈现出list或tree结构”中。

### 函数调用过程呈现tree结构

在[Compilers Principles, Techniques and Tools Second Edition(aka ***dragon book***)](https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools) 的[7.2.1 Activation Trees](https://dengking.github.io/compiler-principle/Chapter-7-Run-Time-Environments/7.2-Stack-Allocation-of-Space/#721-activation-trees)中对此进行了详细分析。



思考：activation tree，parse tree，它们都是呈现的tree结构，但是函数的执行仅仅需要一个call stack，parsing的过程也仅仅只需要一个[pushdown automata](https://en.wikipedia.org/wiki/Pushdown_automaton)（本质上是一个stack），两者存在着非常类似的现象，我们需要取思考现象背后所蕴含的道理。两个过程都具有nesting特性，所以它们的过程都呈现tree structure。在[4.6 Introduction to LR Parsing: Simple LR](https://dengking.github.io/compiler-principle/Chapter-4-Syntax-Analysis/4.6-Introduction-to-LR-Parsing-Simple-LR/)中我对此有过分析。





## 各个学科中的Structure

前面我们接触了Structure in math，下面看看在其他学科中关于Structure的研究内容。

### Structure in computer science

#### [Data structure](https://en.wikipedia.org/wiki/Data_structure)

计算机科学中的data structure学科和前面所述Structure是密切相关的，在本文的开头已经对两者进行说明：计算机科学中的data structure其实就是对各种structure的计算机实现（描述）。

实现中的一个非常重要的问题是：如何来实现（描述）结构的关系？一般使用link或变来表示关系，比如在tree、graph中。



#### [Software architecture](https://en.wikipedia.org/wiki/Software_architecture)

略

### [Linguistics](https://en.wikipedia.org/wiki/Linguistics)

在语言学中使用[Grammar](https://en.wikipedia.org/wiki/Grammar)、[Syntax](https://en.wikipedia.org/wiki/Syntax)来表示语言的结构，最最典型的就是[Phrase structure grammar](https://en.wikipedia.org/wiki/Parsing_of_natural_language)。

