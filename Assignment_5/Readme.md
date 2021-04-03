# Daa C2 Assingment-2
#### Team Members

|Enrollment No.|Name|Github Id|
|--------------|----|--------|
|IIT2019201|Sainath Reddy|sainath998|
|IIT2019202|Jyoti Verma|Jyo123-verma|
|IIT2019203|Krishna Kaipa|ra5put1n|

*Group No-* 6

*Faculty Name-* Dr. Rahul Kala 

*Mentor Name-* Md. Meraz

---
## Problem Statement

The longest Zig-Zag subsequence problem is to find length of the longest
subsequence of given sequence such that all elements of this are
alternating.
If a sequence {x1, x2, .. xn} is alternating sequence then its element satisfy
one of the following relation :
x1 < x2 > x3 < x4 > x5 < .... xn or
x1 > x2 < x3 > x4 < x5 > .... xn
Solve using Dynamic programming.

---
## How to use code
```
Download project
https://github.com/ra5put1n/DAA.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assingment_05

#Compiling The code
g++ main.cpp -o output
```
---

Run the code
```
./output
```
Input
```
Input contains an integer n, to generate a random sequence of n random numbers.
```
Ouput 
```
Output will be an integer, i.e., the largest zig zag subsequence.
```
---
*Test case*

Test Case-1
```
Input:
10

Output:
7
```

Test Case-2
```
Input:
13

Output:
8

```

---
### Theory
Logic
```
1. We are going to take a dp as 2D array with  size  as 2*size of the given elements.The 2D array was going to have only two rows one is to store the length of longest alternating order and the other is to store the sign whether the present element in the sequence is greater than the previous or lesser than the previous element in the sequence. 

2. The sign has three values if the sign was -1 it means it was not taken part of any sequence (itself it was a sequence of length 1) and if the sign was 0 it means that the element was taken in some sequence and this element is lesser than the preceding element in the sequence. And 1 means that the element is taken in some sequence and this element was greater than the preceding element in the sequence.

3. In this way, we store the longest alternating sequence which ends at present element in the 1st row of 2D array and the sign in 2nd row of 2D array and we take the max of 1st row of 2D array which is same as  max length of alternating sequence.
```

---
### Analysis

*Time Complexity*
```
For all the cases : o(n^2)
```
*Space Complexity*
```
For all the cases : o(n)
```
where n is an integer upto which sum has to be calculated.

---
### References
```
Introduction to Dynamic Programming Technique: GFG
Introduction to Algorithms by Cormen,Charles, Rivest and Stein.
```
