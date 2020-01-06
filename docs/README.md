# 前言

本工程由两部分组成：

- docs：描述data structure的理论知识，这部分的目录组织结构是基于[Wikipedia Data structures](https://en.wikipedia.org/wiki/Data_structure)的组织结构，并结合我的实践，进行了一定的扩充。

  首先从structure谈起，然后接入data structure，然后进入各种具体的data structure。

- src：提供各种data structure的实现，这部分的目录结构和docs的目录结构之间基本上是一一对应，对于每种结构，尽可能地提供python、`c++`、c实现。





# TODO



# algorithms use memory to gain performance improvement

使用空间换取时间

https://www.sciencedirect.com/topics/computer-science/performance-gain

https://stackoverflow.com/questions/1898161/memory-vs-performance

# lintcode

https://www.zhihu.com/question/31218682

# hash

[Hash table](https://en.wikipedia.org/wiki/Hash_table)

相关：https://www.infoq.com/articles/redis-time-series

[Hash functions](https://en.wikipedia.org/wiki/Category:Hash_functions)

[Hash list](https://en.wikipedia.org/wiki/Hash_list)

[What exactly (and precisely) is “hash?”](https://cs.stackexchange.com/questions/55471/what-exactly-and-precisely-is-hash)

# AVL tree

相关：https://opensourceforu.com/2016/03/the-life-of-a-process/

https://en.wikipedia.org/wiki/AVL_tree

# Bit field

https://en.wikipedia.org/wiki/Bit_field

关于bit field， 在Unix OS中使用非常广泛，我之前已经遇到了非常多，只是没有意识到它们就是bit field；今天（20190518）在阅读[Unix file types](https://en.wikipedia.org/wiki/Unix_file_types)的时候，其中提及了

> Internally, `ls` obtains the `stat` structure[[2\]](https://en.wikipedia.org/wiki/Unix_file_types#cite_note-2) associated with the file and transforms the `mode_t` field into a human-readable format. Note that `mode_t` is actually a [bit field](https://en.wikipedia.org/wiki/Bit_field) with two parts; the file type is stored within the `S_IFMT` [mask](https://en.wikipedia.org/wiki/Mask_(computing)). It can be tested with some macros like `S_ISDIR` (for the `S_IFDIR` value with mask `S_IFMT`) to get the file type flags.

除此之外，Unix OS很多system call都接收这种通过bit or来组合各种标志的方法；

https://github.com/lattera/glibc/blob/master/bits/fcntl.h

https://en.wikipedia.org/wiki/Bitwise_operation

# 有序data structure

## multiset

[`std::multiset`](https://en.cppreference.com/w/cpp/container/multiset)

https://en.wikipedia.org/wiki/Multiset

## priority queue

[`std::priority_queue`](https://en.cppreference.com/w/cpp/container/priority_queue)

## Skip list

https://en.wikipedia.org/wiki/Skip_list

相关：https://www.infoq.com/articles/redis-time-series

redis使用skip list来实现有序集合

https://jameshfisher.com/2018/04/22/redis-sorted-set/

http://ticki.github.io/blog/skip-lists-done-right/

[std::multiset vs. std::priority_queue speed comparision](https://stackoverflow.com/questions/5895792/stdmultiset-vs-stdpriority-queue-speed-comparision?rq=1)