class Solution:
    def majorityElement(self, A, N):
        from collections import Counter
        arr=Counter(A)
        for key,value in arr.items():
            if value> N/2:
                return key
                
        return -1

import math
from sys import stdin

def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=[int(x) for x in input().strip().split()]
            
            
            obj = Solution()
            print(obj.majorityElement(A,N))
            
            T-=1


if __name__ == "__main__":
    main()