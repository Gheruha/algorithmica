# EASY
# Problem 21: Merge two sorted Linked Lists.
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
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def mergeTwoLists(
        self, list1: Optional[ListNode], list2: Optional[ListNode]
    ) -> Optional[ListNode]:

        merged = ListNode()
        dummy = merged
        while list1 and list2:
            if list1.val <= list2.val:
                merged.next = ListNode(list1.val)
                list1 = list1.next
            else:
                merged.next = ListNode(list2.val)
                list2 = list2.next

            merged = merged.next

        if list1:
            merged.next = list1
        elif list2:
            merged.next = list2

        if not dummy:
            return None
        else:
            return dummy.next


# @leet end
