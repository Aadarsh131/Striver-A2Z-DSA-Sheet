def evenlyDivides(N):
  # print(s[::-1])
  # print("".join(reversed(s)))
  # print(list(enumerate(reversed(s),1)))
  count = 0
  originalN = N
  while(N != 0):
      temp = N % 10
      if(originalN%temp == 0):
          count = count + 1
      N = N // 10
  return count
if __name__ == "__main__":
  s = 12



  print(evenlyDivides(s))