# [Circular buffer](https://en.wikipedia.org/wiki/Circular_buffer)

A **circular buffer**, **circular queue**, **cyclic buffer** or **ring buffer** is a [data structure](https://en.wikipedia.org/wiki/Data_structure) that uses a single, fixed-size [buffer](https://en.wikipedia.org/wiki/Buffer_(computer_science)) as if it were connected end-to-end. This structure lends itself easily to buffering [data streams](https://en.wikipedia.org/wiki/Data_stream).

## Uses

The useful property of a **circular buffer** is that it does not need to have its elements shuffled around(移动) when one is consumed. (If a non-circular buffer were used then it would be necessary to **shift** all elements when one is consumed.) In other words, the circular buffer is well-suited as a [FIFO](https://en.wikipedia.org/wiki/FIFO_(computing_and_electronics)) buffer while a standard, non-circular buffer is well suited as a [LIFO](https://en.wikipedia.org/wiki/LIFO_(computing)) buffer.

**Circular buffering** makes a good implementation strategy for a [queue](https://en.wikipedia.org/wiki/Queue_(data_structure)) that has fixed maximum size. Should a maximum size be adopted for a queue, then a **circular buffer** is a completely ideal implementation; all queue operations are constant time. However, expanding a circular buffer requires shifting memory, which is comparatively costly. For arbitrarily expanding queues, a [linked list](https://en.wikipedia.org/wiki/Linked_list) approach may be preferred instead.

In some situations, overwriting(盖写) circular buffer can be used, e.g. in multimedia. If the buffer is used as the bounded buffer in the [producer-consumer problem](https://en.wikipedia.org/wiki/Producer-consumer_problem) then it is probably desired for the producer (e.g., an audio generator) to overwrite old data if the consumer (e.g., the [sound card](https://en.wikipedia.org/wiki/Sound_card)) is unable to momentarily keep up. Also, the [LZ77](https://en.wikipedia.org/wiki/LZ77) family of lossless data compression algorithms operates on the assumption that strings seen more recently in a data stream are more likely to occur soon in the stream. Implementations store the most recent data in a circular buffer.

## How it works

A circular buffer first starts empty and of some predefined length. For example, this is a 7-element buffer:

[![Circular buffer - empty.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f7/Circular_buffer_-_empty.svg/250px-Circular_buffer_-_empty.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_empty.svg)

Assume that a 1 is written into the middle of the buffer (exact starting location does not matter in a circular buffer):

[![Circular buffer - XX1XXXX.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/8/89/Circular_buffer_-_XX1XXXX.svg/250px-Circular_buffer_-_XX1XXXX.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_XX1XXXX.svg)

Then assume that two more elements are added — 2 & 3 — which get appended after the 1:

[![Circular buffer - XX123XX.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d7/Circular_buffer_-_XX123XX.svg/250px-Circular_buffer_-_XX123XX.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_XX123XX.svg)

If two elements are then removed from the buffer, the oldest values inside the buffer are removed. The two elements removed, in this case, are 1 & 2, leaving the buffer with just a 3:

[![Circular buffer - XXXX3XX.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/1/11/Circular_buffer_-_XXXX3XX.svg/250px-Circular_buffer_-_XXXX3XX.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_XXXX3XX.svg)

If the buffer has 7 elements then it is completely full:

[![Circular buffer - 6789345.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Circular_buffer_-_6789345.svg/250px-Circular_buffer_-_6789345.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_6789345.svg)

A consequence of the **circular buffer** is that when it is full and a subsequent write is performed, then it starts **overwriting** the oldest data. In this case, two more elements — A & B — are added and they *overwrite* the 3 & 4:

[![Circular buffer - 6789AB5.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/b/ba/Circular_buffer_-_6789AB5.svg/250px-Circular_buffer_-_6789AB5.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_6789AB5.svg)

Alternatively, the routines that manage the buffer could prevent **overwriting** the data and return an error or raise an [exception](https://en.wikipedia.org/wiki/Exception_handling). Whether or not data is overwritten is up to the semantics of the buffer routines or the application using the circular buffer.

Finally, if two elements are now removed then what would be returned is **not** 3 & 4 but 5 & 6 because A & B overwrote the 3 & the 4 yielding the buffer with:

[![Circular buffer - X789ABX.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/4/43/Circular_buffer_-_X789ABX.svg/250px-Circular_buffer_-_X789ABX.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_X789ABX.svg)

## Circular buffer mechanics

A **circular buffer** can be implemented using four [pointers](https://en.wikipedia.org/wiki/Pointer_(computer_programming)), or two pointers and two integers:

- buffer start in memory
- buffer end in memory, or buffer capacity
- **start** of valid data (index or pointer)
- **end** of valid data (index or pointer), or amount of data currently in the buffer (integer)

This image shows a partially full buffer:

[![Circular buffer - XX123XX with pointers.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/Circular_buffer_-_XX123XX_with_pointers.svg/250px-Circular_buffer_-_XX123XX_with_pointers.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_XX123XX_with_pointers.svg)

This image shows a full buffer with four elements (numbers 1 through 4) having been overwritten:

[![Circular buffer - 6789AB5 with pointers.svg](https://upload.wikimedia.org/wikipedia/commons/thumb/0/05/Circular_buffer_-_6789AB5_with_pointers.svg/250px-Circular_buffer_-_6789AB5_with_pointers.svg.png)](https://en.wikipedia.org/wiki/File:Circular_buffer_-_6789AB5_with_pointers.svg)







## [CIRCULAR QUEUE IN C](http://www.martinbroadhurst.com/cirque-in-c.html)





## [Implementing a Queue using a *circular* array](http://www.mathcs.emory.edu/~cheung/Courses/171/Syllabus/8-List/array-queue2.html)