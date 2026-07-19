# ARRAY PATTERNS

## TRAVERSAL PATTERNS

> Identification
- Visit every element.
- No special ordering.
- Just calculate something.

> Keywords
- Count
- Find maximum/minimum
- Sum
- Frequency
- Check property

> Complexity
- O(n)
> Examples
- Maximum Subarray
- Richest Customer Wealth
- Number of Even Digits
- Find Pivot Index

## PREFIX SUM 

> Identification
- whenever you see
- sum from i to j
instead of entire array.

> Keywords 

- range sum
- continous sum
- equal sum
- prefix 
> FORMULA :
> prefix[i] = prefix[i-1] + arr[i]

>RANGE :
> sum(l,r)=prefix[r]-prefix[l-1]

- range sum query
- subarray sum equals k
- continous subaaray sum

## DIFFERENCE SUM

> Identification
- Multiple updates on ranges.
- Instead of updating every element.
> Keywords
- Increment range
- Update interval
- Many operations
> Example
- Corporate Flight Bookings

## SLIDING WINDOW(FIXED)

> Identification

- Window size never changes.
> Example
- Find maximum sum of size K.
> Keywords
- Size K
- Exactly K
- Every window
> Examples
- Maximum Average Subarray
- Sliding Window Maximum


| If the problem says...                   | Think...                       |
| ---------------------------------------- | ------------------------------ |
| Longest substring                        | Variable Sliding Window        |
| Exactly K                                | Fixed Sliding Window           |
| At most K                                | Variable Sliding Window        |
| Sorted array                             | Two Pointers or Binary Search  |
| Pair in sorted array                     | Opposite Two Pointers          |
| Remove duplicates                        | Same Direction Two Pointers    |
| Move zeros                               | Same Direction Two Pointers    |
| Range sum                                | Prefix Sum                     |
| Many range updates                       | Difference Array               |
| Maximum contiguous sum                   | Kadane's Algorithm             |
| Next greater/smaller                     | Monotonic Stack                |
| Max/min in every window                  | Monotonic Queue                |
| Frequency/count                          | Hash Map                       |
| Unique elements                          | Hash Set                       |
| Merge overlapping intervals              | Merge Intervals                |
| Smallest/Largest feasible answer         | Binary Search on Answer        |
| Middle node                              | Fast & Slow Pointer            |
| Detect cycle                             | Floyd's Cycle Detection        |
| Reverse list                             | In-place Reversal              |
| Nth node from end                        | Two-Pointer Gap                |
| Head may change after deletion/insertion | Dummy Node                     |
| Prefix search                            | Trie                           |
| Substring search                         | KMP / Rabin–Karp / Z Algorithm |


---
---
## HOW TO APPROCH ANY QUESTION.

- Is the input sorted?
> Yes → Binary Search or Two Pointers.
- Am I looking at a contiguous subarray or substring?
> Yes → Sliding Window, Prefix Sum, Kadane, or Monotonic Queue.
- Do I need fast lookups or frequency counts?
> Yes → Hash Map or Hash Set.
- Is the problem about "next greater/smaller" or maintaining increasing/decreasing order?
> Yes → Monotonic Stack.
- Is the answer itself a numeric value that can be validated?
> Yes → Binary Search on Answer.
- Does the linked list require finding the middle, detecting a cycle, or removing the nth node from the end?
> Yes → Fast/Slow Pointers or Two-Pointer Gap.
- Will modifying the head node make the logic messy?
> Yes → Use a Dummy Node.
- Are intervals overlapping?
>Yes → Sort + Merge Intervals.
- Is it asking for a prefix-based dictionary or autocomplete?
> Yes → Trie.