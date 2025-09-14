# Assignment 2 Analysis - Gage Kociolek

## Algorithm 1

Speculation: Going by the suggestions of permutation 1, the Big-Oh may be O(n^2)
due to the structure seemingly calling for a nested loop in regards to the for and do-while loops

Results:
    Array Size ->     Seconds
1.  5000       ->     0.11
2.  10000      ->     0.66
3.  20000      ->     2.58
4.  40000      ->     9.39

I feel that the results show a quadratic growth, though due to my computer, results seem a little
iffy. It probably will look this way for the others or I'm just not seeing things right.

## Algorithm 2

Speculation: Going by some of the suggestions of permutation 2, the code structure here is a bit more
complex and I believe should fetch quicker run times. If I recall correctly, boolean integration
plays a part in O(n log n).

Results:
    Array Size  ->    Seconds
1.  100000      ->     0.01
2.  200000      ->     0.02
3.  400000      ->     0.07
4.  800000      ->     0.15
5.  1600000     ->     0.29
6.  3200000     ->     0.50
7.  6400000     ->     1.36

I'm still kind of uncertain on this one but for the time being I'll call it logarithmic
with the gradual increase.

## Algorithm 3

Speculation: Going by the suggestions of permutation 3. The crafted code should apply a loop
filling arrays once with i + 1. The swapping should also be used once. The bulk is constant so I believe
the Big-Oh here would be O(n)

Results:
    Array Size  ->    Seconds
1.  500000      ->    0.01
2.  1000000     ->    0.02
3.  2000000     ->    0.03
4.  4000000     ->    0.07
5.  8000000     ->    0.40
6.  16000000    ->    0.95
7.  32000000    ->    2.15

Results roughly doubled, seems accurate to analysis.