# MEDIUM: LEETCODE
# Problem 82: Remove Dublicate from Sorted Linked List II
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
# Definition for singly-linked list.
# class ListNode:
# def __init__(self, val=0, next=None):
# self.val = val
# self.next = next


class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        nums = {}
        while head:
            if head.val not in nums:
                nums[head.val] = 1
            else:
                nums[head.val] = 2

            head = head.next

        dummy = ListNode(0)
        current = dummy
        for value, count in nums.items():
            if count == 1:
                current.next = ListNode(value)
                current = current.next

        return dummy.next


# @leet end
