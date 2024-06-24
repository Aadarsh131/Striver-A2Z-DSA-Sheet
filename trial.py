class Solution:
    def print2largest(self,arr):
        max, second_max = float('-inf'), float('-inf')
        for i in arr:
            if i > max:
                 second_max = max
                 max = i

            if i > second_max and i < max:
                 second_max = i
        if second_max == float('-inf'):
            return -1
        else:
            return second_max

#{ 
 # Driver Code Starts
# Initial Template for Python 3
if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        # arr = list(map(int, input().strip().split()))
        # Or
        arr = [int(x) for x in input().strip().split()]
        ob = Solution()
        ans = ob.print2largest(arr)
        print(ans)
        tc -= 1