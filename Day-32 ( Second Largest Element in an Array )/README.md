
# 🚀 Day 32/111 - ALTA BASE 111

## 💡 Problem: Second Largest Element in an Array

**Difficulty:** Easy
**Topic:** Arrays • Basic Math • Array Traversal

### 🧠 What I Learned

Today I learned how to **find the second largest element in an array** by keeping track of both the largest and second largest values.

While traversing the array, we update these values whenever we find a larger element.

### 🔄 Basic Logic

If:

```text
Array = {10, 25, 7, 42, 18}
```

Start with:

```text
largest = 10
secondLargest = -∞
```

Then compare each element:

```text
25 > 10 → largest = 25
42 > 25 → secondLargest = 25, largest = 42
18 < 42 → secondLargest remains 25
```

Finally:

```text
Largest = 42
Second Largest = 25
```

The basic logic is:

```text
if element > largest
    secondLargest = largest
    largest = element

else if element > secondLargest
    secondLargest = element
```

So the output is:

```text
25
```

The main idea is to **keep track of the largest and second largest elements while traversing the array only once**.

## 🎯 What I Learned From This Problem

* Arrays
* Array traversal
* Finding the second largest element
* Comparing elements
* `if-else` conditions
* Tracking multiple values
* Array indexing
* Loops
* Basic problem-solving

This problem helped me understand how to **track the top two values in an array efficiently without sorting the entire array**.

## 🔥 Challenge Progress

**Day 32/111 — Completed ✅**

**Streak: 32/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
