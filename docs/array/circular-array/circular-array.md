其实我想要实现的DS严格来说并不是一个 Circular Queue?Queue是FIFO的，而我的需求是对数据的存储，每次新添加的数据都是加入到头，当数组已经满了后，则新添加的数据直接overwrite到数组的end；

目前我的这个需求是通过使用一个linked  list来实现的，每次新添加一个元素，则new 一个node，如果已经达到了最大长度，则pop最后一个node；

所以，每次添加元素都是`push_front`

| | | | | |



start end 都是integer还是pointer？


既然是环形的，有一个特点就是它没有固定的start，end

当array is full，则新添加的元素直接

