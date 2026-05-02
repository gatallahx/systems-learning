# 1 (unverified results)
a) 1 2
b) 0
c) 1
d) 0 (because integer division)

# 2
(-i)/j and -(i/j) where i and j are +int
Equivalent expressions in C99.
Not for C89, b/c variance in how some compilers handle dividing w/ negatives.
They either upper or lower bound the result.
C99 always picks closest to 0.

E.g. (-9)/7 could be -1 or -2 in C89
     (-9)/7 is -1 in C99

(-9)/7 is equal to -1.2857142857 in math

# 9
a) 63 8
b) 3 2 1
c) 2 -1 3
d) 0 0 0

# 11
a) 0 2
b) 4 11 6
c) 0 8 7
d) 3 4 5 4

# 13
++i