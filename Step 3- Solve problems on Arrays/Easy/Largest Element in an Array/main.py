def largest( arr, n):
  max = arr[0]
  for i in arr:
        if i > max:
            max = i
  return max
  
  #using the builtin max function
  # return max(arr)


# Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(largest(a, n))

        T -= 1


if __name__ == "__main__":
    main()
