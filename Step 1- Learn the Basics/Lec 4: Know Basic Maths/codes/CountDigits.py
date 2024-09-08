# Digit count (different from the problem listed in gfg)
import math

def count(n):
   return math.floor(math.log10(n) + 1) #log base 10
  #intuition-
  #to find the length usually we had to do n = n/10 until n becomes 0, instead we can do log10(n)

print(count(3))