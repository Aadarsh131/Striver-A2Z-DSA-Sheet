from math import floor, log10

# only valid for positive number
# by default these algo doesnot include the zeros of the end (eg, reverse of 342000 is 243)

def reverse(n:int) -> int:
  place = floor(log10(n)+1) - 1 # (count of digits of n) - 1 => will represents how many zeros to add
  num = 0
  while(n>0):
    last = n % 10
    num = (last * (10**place)) + num
    place -= 1
    n = n // 10
  return num


#Easier method
def reverse2(n:int) -> int:
  num = 0
  while(n > 0):
    last = n % 10
    num = (num*10) + last
    n = n // 10
  return num


print(reverse(3456))
print(reverse2(4539300))