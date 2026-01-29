# EASY LEETCODE
# Problem 70: Climbing stairs.

# @leet imports start
import bisect
import collections
import copy
import datetime
import functools
import heapq
import io
import itertools
import json
import math
import operator
import random
import re
import statistics
import string
import sys
from bisect import *
from builtins import *
from collections import *
from copy import *
from datetime import *
from functools import *
from heapq import *
from io import *
from itertools import *
from json import *
from math import *
from operator import *
from random import *
from re import *
from statistics import *
from string import *
from sys import *
from typing import *

# @leet imports end


# @leet start
class Solution:
    def climbStairs(self, n: int) -> int:
        # Fibonacci
        if n < 2:
            return n

        prev = 1
        curr = 2

        for _ in range(3, n + 1):
            prev, curr = curr, prev + curr

        return curr


# @leet end
