
# 🚀 Day 36/111 - ALTA BASE 111

## 💡 Problem: Maximum Consecutive Ones

**Difficulty:** Easy
**Topic:** Arrays • Array Traversal • Basic Logic

### 🧠 What I Learned

Today I learned how to **find the maximum number of consecutive ones in an array**.

Consecutive ones are `1`s that appear next to each other without any other number between them.

We can solve this problem by maintaining two variables: `count` to track the current consecutive ones and `maxCount` to store the maximum found so far.

### 🔄 Basic Logic

If:

```text
arr = {1, 1, 0, 1, 1, 1}
````

Then:

```
Read 1 → count = 1
Read 1 → count = 2
Read 0 → count = 0
Read 1 → count = 1
Read 1 → count = 2
Read 1 → count = 3
```

Whenever we encounter `0`, the current count resets to `0`. We update `maxCount` whenever we find a larger count.

So the output is:

```
Maximum consecutive ones = 3
```

We can solve this problem in a single traversal without using an extra array.

## 🎯 What I Learned From This Problem

- Arrays and array traversal
- Counting consecutive elements
- Using `if-else` conditions
- Tracking the current count
- Finding the maximum value
- Resetting a counter when a condition changes
- Improving time and space efficiency

This problem helped me understand how to solve array problems efficiently using a simple loop in O(n) time and O(1) extra space.

## 🔥 Challenge Progress

Day 36/111 — Completed ✅

Streak: 36/111 — Unbroken 🔥

> One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀

### 🚀 ALTA BASE 111

Learn → Practice → Solve → Improve → Repeat

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney

