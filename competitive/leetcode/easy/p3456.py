# EASY
# Problem 3456: Find special substring of lenght k.
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
    def hasSpecialSubstring(self, s: str, k: int) -> bool:
        num = 1
        if s:
            for i in range(1, len(s)):
                if s[i] == s[i - 1]:
                    num += 1
                else:
                    if num == k:
                        return True
                    num = 1

        return True if num == k else False


# @leet end
