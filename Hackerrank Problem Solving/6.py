#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    # Write your code here
    plus = 0
    avg_plus = float(0)
    minus = 0
    avg_minus = float(0)
    zero = 0
    avg_zero = float(0)
    for i in range(len(arr)):
        if arr[i] > 0:
            plus += 1
        elif arr[i] < 0:
            minus += 1
        else:
            zero += 1
    avg_plus = plus/len(arr)
    avg_minus = minus/len(arr)
    avg_zero = zero/len(arr)
    print(avg_plus)
    print(avg_minus)
    print(avg_zero)

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
