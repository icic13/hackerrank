#!/bin/python

import sys


n = int(raw_input().strip())

sum  = 1

for i in range(1,n+1):
    sum*=i
print(sum)

