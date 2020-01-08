# [Hash function](https://en.wikipedia.org/wiki/Hash_function)

A **hash function** is any [function](https://en.wikipedia.org/wiki/Function_(mathematics)) that can be used to map [data](https://en.wikipedia.org/wiki/Data_(computing)) of arbitrary size to fixed-size values. The values returned by a hash function are called *hash values*, *hash codes*, *digests*, or simply *hashes*. 

Use of hash functions relies on statistical properties of key and function interaction: worst case behavior is intolerably bad with a vanishingly small probability, and average case behavior can be nearly optimal (minimal collisions).

Hash functions are related to (and often confused with) [checksums](https://en.wikipedia.org/wiki/Checksums), [check digits](https://en.wikipedia.org/wiki/Check_digit), [fingerprints](https://en.wikipedia.org/wiki/Fingerprint_(computing)), [lossy compression](https://en.wikipedia.org/wiki/Lossy_compression), [randomization functions](https://en.wikipedia.org/wiki/Randomization_function), [error-correcting codes](https://en.wikipedia.org/wiki/Error_correction_code), and [ciphers](https://en.wikipedia.org/wiki/Cipher). Although the concepts overlap to some extent, each one has its own uses and requirements and is designed and optimized differently.

## Overview

A **hash function** takes as input a key, which is associated with a datum or record and used to identify it to the data storage and retrieval application. The keys may be **fixed length**, like an integer, or **variable length**, like a name. In some cases, the key is the datum itself. The output is a hash code used to index a hash table holding the data or records, or pointers to them.

A hash function may be considered to perform three functions:

- Convert variable length keys into **fixed length** (usually machine word length or less) values, by folding them by words or other units using a parity-preserving operator like ADD or XOR.

  > NOTE: What is parity-preserving operator?
  >
  > [Parity bit](https://en.wikipedia.org/wiki/Parity_bit)

- Scramble the bits of the key so that the resulting values are uniformly distributed over the **key space**.

  > NOTE: What is the key space? ASCII code?

- Map the key values into ones less than or equal to the size of the table

A good hash function satisfies two basic properties: 

1) it should be very fast to compute; 

2) it should minimize duplication of output values (collisions). 

Hash functions rely on generating favorable probability distributions for their effectiveness, reducing access time to nearly constant. High table loading factors, [pathological](https://en.wikipedia.org/wiki/Pathological_(mathematics)) key sets and poorly designed hash functions can result in access times approaching linear in the number of items in the table. Hash functions can be designed to give best worst-case performance, good performance under high table loading factors, and in special cases, perfect (collisionless) mapping of keys into hash codes. Implementation is based on parity-preserving bit operations (XOR and ADD), multiply, or divide. A necessary adjunct to the hash function is a collision-resolution method that employs an auxiliary data structure like [linked lists](https://en.wikipedia.org/wiki/Linked_list), or systematic probing of the table to find an empty slot.

## Application

- [Hash table](https://en.wikipedia.org/wiki/Hash_table)， which is also used to implement [associative arrays](https://en.wikipedia.org/wiki/Associative_array) and [dynamic sets](https://en.wikipedia.org/wiki/Set_(abstract_data_type)).
- Hash functions are also used to build [caches](https://en.wikipedia.org/wiki/Cache_(computing)) for large data sets stored in slow media. A cache is generally simpler than a hashed search table, since any collision can be resolved by discarding or writing back the older of the two colliding items.
- Hash functions are an essential ingredient of the [Bloom filter](https://en.wikipedia.org/wiki/Bloom_filter), a space-efficient [probabilistic](https://en.wikipedia.org/wiki/Probability) [data structure](https://en.wikipedia.org/wiki/Data_structure) that is used to test whether an [element](https://en.wikipedia.org/wiki/Element_(mathematics)) is a member of a [set](https://en.wikipedia.org/wiki/Set_(computer_science)).
- [geometric hashing](https://en.wikipedia.org/wiki/Geometric_hashing). . In these applications, the set of all inputs is some sort of [metric space](https://en.wikipedia.org/wiki/Metric_space), and the hashing function can be interpreted as a [partition](https://en.wikipedia.org/wiki/Partition_(mathematics)) of that space into a grid of *cells*. The table is often an array with two or more indices (called a *[grid file](https://en.wikipedia.org/wiki/Grid_file)*, *grid index*, *bucket grid*, and similar names), and the hash function returns an index [tuple](https://en.wikipedia.org/wiki/Tuple). This principle is widely used in [computer graphics](https://en.wikipedia.org/wiki/Computer_graphics), [computational geometry](https://en.wikipedia.org/wiki/Computational_geometry) and many other disciplines, to solve many [proximity problems](https://en.wikipedia.org/wiki/Proximity_problem) in the [plane](https://en.wikipedia.org/wiki/Plane_(geometry)) or in [three-dimensional space](https://en.wikipedia.org/wiki/Three-dimensional_space), such as finding [closest pairs](https://en.wikipedia.org/wiki/Closest_pair_problem) in a set of points, similar shapes in a list of shapes, similar [images](https://en.wikipedia.org/wiki/Image_processing) in an [image database](https://en.wikipedia.org/wiki/Image_retrieval), and so on.



## Properties

### Uniformity

### Efficiency

### Universality

### Applicability

### Deterministic





## Hashing integer data types



## Hashing variable-length data