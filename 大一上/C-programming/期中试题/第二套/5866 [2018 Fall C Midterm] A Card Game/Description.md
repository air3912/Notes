# [2018 Fall C Midterm] A Card Game

# description

Xiao Ming is playing an interesting game with computer. In each turn, the computer will give Xiao Ming a series of digits among 0, 3, 5, 7, 9.  
If Xiao Ming can tell the computer the number divisible by 30 as large as possible, which consists of all the digits, he will win.  
Now your task is helping Xiao Ming find out this number if it exists.  
The input contains 2 lines. The first line is the total number of digits $n$ ($1 \leq  n \leq  10^5$) of game. The next line contains $n$ digits among 0, 3, 5, 7, 9.

The output contains one line. If the number exists, print the number. if it doesn't exist print "no such number".

# Sample Input

```
6
3 5 7 7 3 0
```

# Sample output

```
no such number
```

# Hint

The first idea in your mind may be sorting the numbers, but it may exceed the time limit since the size of array can be very large.  
You can search the knowledge about [bucket sort](https://www.google.com.hk/search?q=bucket+sort&oq=bucket+sort)

**Bucket sort**, or bin sort, is a sorting algorithm that works by distributing the elements of an array into a number of buckets. Each bucket is then sorted individually, either using a different sorting algorithm, or by recursively applying the bucket sorting algorithm. It is a distribution sort, a generalization of pigeonhole sort, and is a cousin of radix sort in the most-to-least significant digit flavor. Bucket sort can be implemented with comparisons and therefore can also be considered a comparison sort algorithm. The computational complexity estimates involve the number of buckets.

Bucket sort works as follows:
  1. Set up an array of initially empty "buckets".
  2. **Scatter**: Go over the original array, putting each object in its bucket.
  3. Sort each non-empty bucket.
  4. **Gather**: Visit the buckets in order and put all elements back into the original array.

```c
function bucketSort(array, n) is
  buckets ← new array of n empty lists
  for i = 0 to (length(array)-1) do
    insert array[i] into buckets[msbits(array[i], k)]
  for i = 0 to n - 1 do
    nextSort(buckets[i]);
  return the concatenation of buckets[0], ...., buckets[n-1]
```