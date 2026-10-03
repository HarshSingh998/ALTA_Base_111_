
# 🚀 Day 27/111 - ALTA BASE 111

## 💡 Problem: Declare and Print a 2D Grid

**Difficulty:** Easy
**Topic:** Arrays Basics • 2D Arrays • Nested Loops

### 🧠 What I Learned

Today I learned how to **declare, initialize, and print a 2D array (grid)**.

A 2D array stores elements in **rows and columns**, similar to a table. Each element can be accessed using two indexes: one for the row and one for the column.

### 🔄 Basic Logic

If:

```text
Grid = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
}
````

The grid looks like:

```text id="y9x2lm"
1 2 3
4 5 6
7 8 9
```

The elements are stored using row and column indexes:

```text
grid[0][0] → 1
grid[0][1] → 2
grid[1][0] → 4
grid[2][2] → 9
```

To print all elements, we can use **nested loops**:

```text id="v8m2rq"
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        print(grid[i][j]);
    }
}
```

The outer loop handles the **rows**, while the inner loop handles the **columns**.

The main idea is to **use two indexes and nested loops to access and print every element of a 2D array**.

## 🎯 What I Learned From This Problem

* 2D arrays
* Rows and columns
* Array declaration
* Array initialization
* Row and column indexing
* Nested loops
* Accessing 2D array elements
* Printing a grid
* Understanding matrix-like structures

This problem helped me understand how **2D arrays organize data in rows and columns and how nested loops can be used to traverse the complete grid**.

## 🔥 Challenge Progress

**Day 27/111 — Completed ✅**

**Streak: 27/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
