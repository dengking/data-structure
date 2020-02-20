# 如何描述structure？

如何来描述结构的结构？我们可以使用不同的语言来进行描述，在计算机科学中，我们往往描述方式往往是human-readable 且 machine-readable的。下面枚举了一些例子：

## ASDL

cpython 使用ASDL来描述自己的AST，关于ASDL，参见：

https://www.usenix.org/legacy/publications/library/proceedings/dsl97/full_papers/wang/wang.pdf

http://www.oilshell.org/blog/2016/12/11.html

https://stackoverflow.com/questions/8873126/zephyr-asdl-abstract-syntax-description-language

https://devguide.python.org/compiler/

https://github.com/python/cpython/blob/master/Parser/Python.asdl

http://asdl.sourceforge.net/

https://www.cs.princeton.edu/research/techreps/TR-554-97

显然，它也可以作为一种树描述语言。

https://en.wikipedia.org/wiki/Algebraic_data_type

https://en.wikipedia.org/wiki/Abstract_syntax

## Grammar

Grammar是对语言结构的描述，使用[production](https://en.wikipedia.org/wiki/Production_(computer_science))来表示grammar。

