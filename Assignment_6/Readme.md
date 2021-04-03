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

Optimal Transport Problem

---
## How to use code
```
Download project
https://github.com/ra5put1n/DAA.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assingment_06

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
Input contains an integer n, to generate a nxn cost matrix and n demands and n suppliers.
```
Ouput 
```
Output will be an integer, i.e., the minimum cost of transportation with the given algorithm.
```
---
*Test case*

Test Case-1
```
Input:
6

Output:

Generated cost matrix: 
2  8  1  8  6  8  
2  4  7  2  6  5  
6  8  6  5  7  1  
8  2  9  9  7  7  
9  9  9  5  2  2  
6  1  1  4  6  4  


Demands: 12 43 207 230 124 144 

Supply: 144 207 12 43 230 124 

Final cost: 4572
```

Test Case-2
```
Input:
13

Output:

Generated cost matrix: 
2  8  1  8  6  8  2  4  7  2  6  
5  6  8  6  5  7  1  8  2  9  9  
7  7  9  9  9  5  2  2  6  1  1  
4  6  4  2  8  5  8  7  1  1  3  
6  5  6  3  3  4  3  2  2  9  9  
1  6  6  5  5  7  1  6  7  3  9  
8  4  5  3  1  1  1  1  3  7  3  
6  7  6  8  7  7  9  6  4  7  3  
9  2  7  7  9  1  2  2  8  1  4  
3  1  2  3  2  9  4  6  3  7  1  
8  3  8  3  9  2  7  6  2  6  5  


Demands: 98 230 22 107 232 68 178 176 118 32 210 

Supply: 230 32 118 98 22 232 176 210 178 68 107 

Final cost: 7534

```

---
### Theory
Logic
```
We basically select the north-western most corner available, compute the supply and demand operations and move to the next box accordingly.

1. We take input for the size of the cost matrix.
2. We store n X n randomly generated values in an 2D array.
3. We then elect the north-west or extreme left corner of the matrix, assign as many units as possible to
the cell, within the supply and demand constraints.
4. Either the demand is satisfied or the supply is finished or both. Based on either of these 3 possibilities, we either move 1 column across (if the demand is satisfied) or 1 row downwards(if the supply is finished) or both 1 row down and 1 column across (if supply and demand are equal).
5. This process is repeated until the the demand and
supply are saturated and compute the total cost
associated with the transport.
```

---
### Analysis

*Time Complexity*
```
For all the cases : o(n)
```
*Space Complexity*
```
For all the cases : o(n)
```

---
### References
```
Introduction to Dynamic Programming Technique: GFG
Introduction to Algorithms by Cormen,Charles, Rivest and Stein.
```