# [Hash function](https://en.wikipedia.org/wiki/Hash_function)

A **hash function** is any [function](https://en.wikipedia.org/wiki/Function_(mathematics)) that can be used to map [data](https://en.wikipedia.org/wiki/Data_(computing)) of arbitrary size to fixed-size values. The values returned by a hash function are called *hash values*, *hash codes*, *digests*, or simply *hashes*. 

> NOTE: "digests" means 摘要 in Chinese.

Use of hash functions relies on statistical properties of key and function interaction: worst case behavior is intolerably bad with a vanishingly small probability, and average case behavior can be nearly optimal (minimal collisions).

Hash functions are related to (and often confused with) [checksums](https://en.wikipedia.org/wiki/Checksums), [check digits](https://en.wikipedia.org/wiki/Check_digit), [fingerprints](https://en.wikipedia.org/wiki/Fingerprint_(computing)), [lossy compression](https://en.wikipedia.org/wiki/Lossy_compression), [randomization functions](https://en.wikipedia.org/wiki/Randomization_function), [error-correcting codes](https://en.wikipedia.org/wiki/Error_correction_code), and [ciphers](https://en.wikipedia.org/wiki/Cipher). Although the concepts overlap to some extent, each one has its own uses and requirements and is designed and optimized differently.

## Overview

> NOTE: Although this article is named [Hash function](https://en.wikipedia.org/wiki/Hash_function), what this chapter talks about is hash table. 

A **hash function** takes as input a key, which is associated with a datum or record and used to identify it to the data storage and retrieval application. The keys may be **fixed length**, like an integer, or **variable length**, like a name. In some cases, the key is the datum itself. The output is a hash code used to index a hash table holding the data or records, or pointers to them.

A hash function **may be** considered to perform three functions:

- Convert variable length keys into **fixed length** (usually machine word length or less) values, by folding them by words or other units using a **parity-preserving operator** like ADD or XOR.

  > NOTE: Folding means bitwise operation.

  > NOTE: What is parity-preserving operator?
  >
  > [Parity bit](https://en.wikipedia.org/wiki/Parity_bit)

- Scramble the bits of the key so that the resulting values are uniformly distributed over the **key space**.

  > NOTE: What is the key space? ASCII code?

- Map the key values into ones less than or equal to the size of the table

  > NOTE: This function will be used only when it is used as index of the table in [hash table](https://en.wikipedia.org/wiki/Hash_table). In other applications, this function may be omitted.

A good hash function satisfies two basic properties: 

1) it should be very fast to compute; 

> NOTE: This is [efficiency](#Efficiency)

2) it should minimize duplication of output values (collisions). 

> NOTE: This is [uniformity](#Uniformity)



Hash functions rely on generating favorable probability distributions for their effectiveness, reducing access time to nearly constant. High table loading factors, [pathological](https://en.wikipedia.org/wiki/Pathological_(mathematics)) key sets and poorly designed hash functions can result in access times approaching linear in the number of items in the table. Hash functions can be designed to give best worst-case performance, good performance under high table loading factors, and in special cases, perfect (collisionless) mapping of keys into hash codes. Implementation is based on parity-preserving bit operations (XOR and ADD), multiply, or divide. A necessary adjunct to the hash function is a collision-resolution method that employs an auxiliary data structure like [linked lists](https://en.wikipedia.org/wiki/Linked_list), or systematic probing of the table to find an empty slot.



## Application

- [Hash table](https://en.wikipedia.org/wiki/Hash_table)， which is also used to implement [associative arrays](https://en.wikipedia.org/wiki/Associative_array) and [dynamic sets](https://en.wikipedia.org/wiki/Set_(abstract_data_type)).

- Hash functions are also used to build [caches](https://en.wikipedia.org/wiki/Cache_(computing)) for large data sets stored in slow media. A cache is generally simpler than a hashed search table, since any collision can be resolved by discarding or writing back the older of the two colliding items.

  > NOTE: [B-tree](https://en.wikipedia.org/wiki/B-tree)

- Hash functions are an essential ingredient of the [Bloom filter](https://en.wikipedia.org/wiki/Bloom_filter), a space-efficient [probabilistic](https://en.wikipedia.org/wiki/Probability) [data structure](https://en.wikipedia.org/wiki/Data_structure) that is used to test whether an [element](https://en.wikipedia.org/wiki/Element_(mathematics)) is a member of a [set](https://en.wikipedia.org/wiki/Set_(computer_science)).

- [geometric hashing](https://en.wikipedia.org/wiki/Geometric_hashing). In these applications, the set of all inputs is some sort of [metric space](https://en.wikipedia.org/wiki/Metric_space), and the hashing function can be interpreted as a [partition](https://en.wikipedia.org/wiki/Partition_(mathematics)) of that space into a grid of *cells*. The table is often an array with two or more indices (called a *[grid file](https://en.wikipedia.org/wiki/Grid_file)*, *grid index*, *bucket grid*, and similar names), and the hash function returns an index [tuple](https://en.wikipedia.org/wiki/Tuple). This principle is widely used in [computer graphics](https://en.wikipedia.org/wiki/Computer_graphics), [computational geometry](https://en.wikipedia.org/wiki/Computational_geometry) and many other disciplines, to solve many [proximity problems](https://en.wikipedia.org/wiki/Proximity_problem) in the [plane](https://en.wikipedia.org/wiki/Plane_(geometry)) or in [three-dimensional space](https://en.wikipedia.org/wiki/Three-dimensional_space), such as finding [closest pairs](https://en.wikipedia.org/wiki/Closest_pair_problem) in a set of points, similar shapes in a list of shapes, similar [images](https://en.wikipedia.org/wiki/Image_processing) in an [image database](https://en.wikipedia.org/wiki/Image_retrieval), and so on.



## Properties

> Note: Properties determine their usage, it is necessary to know the properties a hash function possess. 

### Uniformity

> Note: 均匀性

A good hash function should map the expected inputs as evenly as possible over its output range. That is, every **hash value** in the **output range** should be generated with roughly the same [probability](https://en.wikipedia.org/wiki/Probability). The reason for this last requirement is that the cost of hashing-based methods goes up sharply as the number of *collisions*—pairs of inputs that are mapped to the same **hash value**—increases. If some hash values are more likely to occur than others, a larger fraction of the lookup operations will have to search through a larger set of colliding table entries.

Note that this criterion only requires the value to be *uniformly distributed*, not *random* in any sense. A good **randomizing function** is (barring computational efficiency concerns) generally a good choice as a **hash function**, but the converse need not be true.

> NOTE: hash function VS **randomizing function**

Hash tables often contain only a small subset of the valid inputs. For instance, a club membership list may contain only a hundred or so member names, out of the very large set of all possible names. In these cases, the uniformity criterion should hold for almost all **typical subsets** of entries that may be found in the table, not just for the global set of all possible entries.

> NOTE: **Typical subset** VS **global set**

In special cases when the keys are known in advance and the key set is static, a hash function can be found that achieves absolute (or collisionless) uniformity. Such a hash function is said to be *[perfect](https://en.wikipedia.org/wiki/Perfect_hash_function)*. There is no algorithmic way of constructing such a function - searching for one is a [factorial](https://en.wikipedia.org/wiki/Factorial) function of the number of keys to be mapped versus the number of table slots they're mapped into. Finding a perfect hash function over more than a very small set of keys is usually computationally infeasible; the resulting function is likely to be more computationally complex than a standard hash function, and provides only a marginal advantage over a function with good statistical properties that yields a minimum number of collisions. See **[universal hash function](https://en.wikipedia.org/wiki/Universal_hashing)**.



### Efficiency

In most applications, it is highly desirable that the hash function be computable with minimum latency and secondarily in a minimum number of instructions.

Computational complexity varies with the number of instructions required and latency of individual instructions, with the simplest being the bitwise methods (folding), followed by the multiplicative methods, and the most complex (slowest) are the division-based methods.

Because collisions should be infrequent, and cause a marginal delay but are otherwise harmless, it's usually preferable to choose a faster hash function over one that needs more computation but saves a few collisions.

Division-based implementations can be of particular concern, because division is microprogrammed on nearly all chip architectures. Divide (modulo) by a constant can be inverted to become a multiply by the word-size multiplicative-inverse of the constant. This can be done by the programmer, or by the compiler. Divide can also be reduced directly into a series of shift-subtracts and shift-adds, though minimizing the number of such operations required is a daunting problem; the number of assembly instructions resulting may be more than a dozen, and swamp the pipeline. If the architecture has a hardware multiply functional unit, the multiply-by-inverse is likely a better approach.

> Note: There is a special introduction of computer-arithmetic in repository computer-arithmetic.

We can allow the table size *n* to not be a power of 2 and still not have to perform any remainder or division operation, as these computations are sometimes costly. For example, let *n* be significantly less than $2^b$. Consider a [pseudorandom number generator](https://en.wikipedia.org/wiki/Pseudorandom_number_generator) function *P*(key) that is uniform on the interval $[0, 2^b − 1]$. A hash function uniform on the interval [0, n-1] is $n * P(key)/2^b$. We can replace the division by a (possibly faster) right [bit shift](https://en.wikipedia.org/wiki/Bit_shifting): *nP*(key) >> *b*.

> Note: I do not understand the last paragraph.

If keys are being hashed repeatedly, and the hash function is costly, computing time can be saved by precomputing the hash codes and storing them with the keys. Matching hash codes almost certainly mean the keys are identical. This technique is used for the [transposition table](https://en.wikipedia.org/wiki/Transposition_table) in game-playing programs, which stores a 64-bit hashed representation of the board position.

### Universality

[Universal hashing](https://en.wikipedia.org/wiki/Universal_hashing)

### Applicability

A hash function should be applicable to all situations in which a hash function might be used. A hash function that allows only certain table sizes, strings only up to a certain length, or can't accept a seed (i.e. allow double hashing) isn't as useful as one that does.

> NOTE: The seed in the paragraph is [salt (cryptography)](https://en.wikipedia.org/wiki/Salt_(cryptography)). Reference the [Deterministic](#Deterministic) to see the value of the seed.

### Deterministic

A hash procedure must be [deterministic](https://en.wikipedia.org/wiki/Deterministic_algorithm)—meaning that for a given input value it **must** always generate the same hash value. In other words, it must be a [function](https://en.wikipedia.org/wiki/Function_(mathematics)) of the data to be hashed, in the mathematical sense of the term. This requirement excludes hash functions that depend on external variable parameters, such as [pseudo-random number generators](https://en.wikipedia.org/wiki/Pseudo-random_number_generator) or the time of day. It also excludes functions that depend on the memory address of the object being hashed in cases that the address may change during execution (as may happen on systems that use certain methods of [garbage collection](https://en.wikipedia.org/wiki/Garbage_collection_(computer_science))), although sometimes rehashing of the item is possible.

The determinism is in the **context** of the reuse of the function. For example, [Python](https://en.wikipedia.org/wiki/Python_(programming_language)) adds the feature that hash functions make use of a randomized seed that is generated once when the Python process starts in addition to the input to be hashed. The Python hash is still a valid hash function when used within a single run. But if the values are persisted (for example, written to disk) they can no longer be treated as valid hash values, since in the next run the random value might differ.

> Note: Reference python doc: `object.__hash__`(*self*)[¶](https://docs.python.org/3/reference/datamodel.html#object.__hash__)



### Defined range

#### Fixed-length hash

It is often desirable that the output of a hash function have fixed size (but see below). If, for example, the output is constrained to 32-bit integer values, the hash values can be used to index into an array. Such hashing is commonly used to accelerate data searches. Producing **fixed-length** output from **variable length** input can be accomplished by breaking the input data into chunks of specific size. Hash functions used for data searches use some arithmetic expression which iteratively processes chunks of the input (such as the characters in a string) to produce the hash value. 



#### Variable range

In many applications, the range of hash values may be different for each run of the program, or may change along the same run (for instance, when a hash table needs to be expanded). In those situations, one needs a hash function which takes two parameters—the input data *z*, and the number *n* of allowed hash values.

A common solution is to compute a fixed hash function with a very large range (say, 0 to $2^{32} − 1$), divide the result by *n*, and use the division's [remainder](https://en.wikipedia.org/wiki/Modulo_operation). If *n* is itself a power of 2, this can be done by [bit masking](https://en.wikipedia.org/wiki/Mask_(computing)) and [bit shifting](https://en.wikipedia.org/wiki/Bit_shifting). When this approach is used, the hash function must be chosen so that the result has fairly uniform distribution between 0 and *n* − 1, for any value of *n* that may occur in the application. Depending on the function, the remainder may be uniform only for certain values of *n*, e.g. [odd](https://en.wikipedia.org/wiki/Odd_number) or [prime numbers](https://en.wikipedia.org/wiki/Prime_number).



#### Variable range with minimal movement (dynamic hash function)

When the hash function is used to store values in a hash table that outlives the run of the program, and the hash table needs to be expanded or shrunk, the hash table is referred to as a **dynamic hash table**.

A hash function that will relocate the minimum number of records when the table is resized is desirable. What is needed is a hash function *H*(*z*,*n*) – where *z* is the key being hashed and *n* is the number of allowed hash values – such that *H*(*z*,*n* + 1) = *H*(*z*,*n*) with probability close to *n*/(*n* + 1).

[Linear hashing](https://en.wikipedia.org/wiki/Linear_hashing) and spiral storage are examples of dynamic hash functions that execute in constant time but relax the property of uniformity to achieve the minimal movement property. [Extendible hashing](https://en.wikipedia.org/wiki/Extendible_hashing) uses a dynamic hash function that requires space proportional to *n* to compute the hash function, and it becomes a function of the previous keys that have been inserted. Several algorithms that preserve the uniformity property but require time proportional to *n* to compute the value of *H*(*z*,*n*) have been invented.

A hash function with minimal movement is especially useful in [distributed hash tables](https://en.wikipedia.org/wiki/Distributed_hash_table).



## Hashing integer data types



## Hashing variable-length dat





# Implementation

## CPython [`hashlib`](https://docs.python.org/3/library/hashlib.html#module-hashlib) 



## redis hash

https://github.com/antirez/redis/blob/unstable/src/sha1.h

https://github.com/antirez/redis/blob/unstable/src/sha256.h

https://github.com/antirez/redis/blob/unstable/src/siphash.c