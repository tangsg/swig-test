import example
import numpy as np
example.Example().say_hello()

# add
a = example.Example().add(3,4)
print(a)

# sub
b = example.Example().sub(7,4)
print(b)

# arrary add
a = np.array([1, 1], dtype=np.int32)
b = np.array([1, 1], dtype=np.int32)
c = np.array([1, 1], dtype=np.int32)

example.Example().array_add(a, b, c)

print(c)