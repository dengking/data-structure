# 前言

是在学习[git](https://en.wikipedia.org/wiki/Git)的时候，发现[Merkle tree](https://en.wikipedia.org/wiki/Merkle_tree)的。

# [Merkle tree](https://en.wikipedia.org/wiki/Merkle_tree)

In [cryptography](https://en.wikipedia.org/wiki/Cryptography) and [computer science](https://en.wikipedia.org/wiki/Computer_science), a **hash tree** or **Merkle tree** is a [tree](https://en.wikipedia.org/wiki/Tree_(data_structure)) in which every leaf node is labelled with the [cryptographic hash](https://en.wikipedia.org/wiki/Cryptographic_hash_function) of a data block, and every non-leaf node is labelled with the [hash](https://en.wikipedia.org/wiki/Cryptographic_hash_function) of the labels of its child nodes. 

Hash trees are a generalization of [hash lists](https://en.wikipedia.org/wiki/Hash_list) and [hash chains](https://en.wikipedia.org/wiki/Hash_chain).

![img](https://upload.wikimedia.org/wikipedia/commons/thumb/9/95/Hash_Tree.svg/310px-Hash_Tree.svg.png)

> An example of a binary hash tree. Hashes 0-0 and 0-1 are the hash values of data blocks L1 and L2, respectively, and hash 0 is the hash of the concatenation of hashes 0-0 and 0-1.

## Uses

Hash trees can be used to verify any kind of data stored, handled and transferred in and between computers. They can help ensure that data blocks received from other peers in a [peer-to-peer network](https://en.wikipedia.org/wiki/Peer-to-peer) are received undamaged and unaltered, and even to check that the other peers do not lie and send fake blocks.

Hash trees are used in [hash-based cryptography](https://en.wikipedia.org/wiki/Hash-based_cryptography). Hash trees are also used in

- [Git](https://en.wikipedia.org/wiki/Git_(software)) and [Mercurial](https://en.wikipedia.org/wiki/Mercurial) distributed revision control systems
- [Bitcoin](https://en.wikipedia.org/wiki/Bitcoin)
- a number of [NoSQL](https://en.wikipedia.org/wiki/NoSQL) systems such as [Apache Cassandra](https://en.wikipedia.org/wiki/Apache_Cassandra)

## Overview

A hash tree is a [tree](https://en.wikipedia.org/wiki/Binary_tree) of [hashes](https://en.wikipedia.org/wiki/Hash_function) in which the leaves are hashes of data blocks in, for instance, a file or set of files. Nodes further up in the tree are the hashes of their respective children. For example, in the picture *hash 0* is the result of hashing the [concatenation](https://en.wikipedia.org/wiki/Concatenation) of *hash 0-0* and *hash 0-1*. That is, *hash 0 = hash( hash(0-0) + hash(0-1) )* where *+* denotes concatenation.

Usually, a [cryptographic hash function](https://en.wikipedia.org/wiki/Cryptographic_hash_function) such as [SHA-2](https://en.wikipedia.org/wiki/SHA-2) is used for the hashing. If the hash tree only needs to protect against unintentional damage, unsecured [checksums](https://en.wikipedia.org/wiki/Checksum) such as [CRCs](https://en.wikipedia.org/wiki/Cyclic_redundancy_check) can be used.

In the top of a hash tree there is a *top hash* (or *root hash* or *master hash*). Before downloading a file on a p2p network, in most cases the top hash is acquired from a trusted source, for instance a friend or a web site that is known to have good recommendations of files to download. When the top hash is available, the hash tree can be received from any non-trusted source, like any peer in the p2p network. Then, the received **hash tree** is checked against the **trusted top hash**, and if the **hash tree** is damaged or fake, another hash tree from another source will be tried until the program finds one that matches the top hash.





# [Hash list](https://en.wikipedia.org/wiki/Hash_list)

A hash list is an extension of the concept of hashing an item (for instance, a file). A hash list is a [subtree](https://en.wikipedia.org/wiki/Subtree) of a [Merkle tree](https://en.wikipedia.org/wiki/Merkle_tree).





# [Hash chain](https://en.wikipedia.org/wiki/Hash_chain)



# [Hash list](https://en.wikipedia.org/wiki/Hash_list) VS  [Hash chain](https://en.wikipedia.org/wiki/Hash_chain)

在[Hash chain](https://en.wikipedia.org/wiki/Hash_chain)中对两者进行了对比：

> In contrast to the recursive structure of hash chains, the elements of a hash list are independent of each other.

