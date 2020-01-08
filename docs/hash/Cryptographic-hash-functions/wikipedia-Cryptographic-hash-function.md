[TOC]



# [Cryptographic hash function](https://en.wikipedia.org/wiki/Cryptographic_hash_function)

A **cryptographic hash function** (**CHF**) is a [hash function](https://en.wikipedia.org/wiki/Hash_function) that is suitable for use in [cryptography](https://en.wikipedia.org/wiki/Cryptography). It is a mathematical [algorithm](https://en.wikipedia.org/wiki/Algorithm) that [maps](https://en.wikipedia.org/wiki/Map_(mathematics)) data of arbitrary size (often called the "message") to a [bit string](https://en.wikipedia.org/wiki/Bit_string) of a fixed size (the "hash value", "hash", or "message digest") and is a [one-way function](https://en.wikipedia.org/wiki/One-way_function), that is, a function which is practically infeasible to invert.[[1\]](https://en.wikipedia.org/wiki/Cryptographic_hash_function#cite_note-:1-1) Ideally, the only way to find a message that produces a given hash is to attempt a [brute-force search](https://en.wikipedia.org/wiki/Brute-force_search) of possible inputs to see if they produce a match, or use a [rainbow table](https://en.wikipedia.org/wiki/Rainbow_table) of matched hashes. Cryptographic hash functions are a basic tool of modern cryptography.[[2\]](https://en.wikipedia.org/wiki/Cryptographic_hash_function#cite_note-2)

The ideal cryptographic hash function has the following main properties:

- it is [deterministic](https://en.wikipedia.org/wiki/Deterministic_algorithm), meaning that the same message always results in the same hash
- it is quick to compute the hash value for any given message
- it is infeasible to generate a message that yields a given hash value
- it is infeasible to find two different messages with the same hash value
- a small change to a message should change the hash value so extensively that the new hash value appears uncorrelated with the old hash value ([avalanche effect](https://en.wikipedia.org/wiki/Avalanche_effect)) [[3\]](https://en.wikipedia.org/wiki/Cryptographic_hash_function#cite_note-3)

Cryptographic hash functions have many [information-security](https://en.wikipedia.org/wiki/Information_security) applications, notably in [digital signatures](https://en.wikipedia.org/wiki/Digital_signature), [message authentication codes](https://en.wikipedia.org/wiki/Message_authentication_codes) (MACs), and other forms of [authentication](https://en.wikipedia.org/wiki/Authentication). They can also be used as ordinary [hash functions](https://en.wikipedia.org/wiki/Hash_function), to index data in [hash tables](https://en.wikipedia.org/wiki/Hash_table), for [fingerprinting](https://en.wikipedia.org/wiki/Fingerprint_(computing)), to detect duplicate data or uniquely identify files, and as [checksums](https://en.wikipedia.org/wiki/Checksum) to detect accidental data corruption. Indeed, in information-security contexts, cryptographic hash values are sometimes called (*digital*) *fingerprints*, *checksums*, or just *hash values*, even though all these terms stand for more general functions with rather different properties and purposes.

