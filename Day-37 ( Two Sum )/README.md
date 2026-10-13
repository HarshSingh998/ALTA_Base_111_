
# 🚀 Day 37/111 - ALTA BASE 111

## 💡 Problem: Two Sum

**Difficulty:** Easy
**Topic:** Arrays • Basic Math • Hashing

### 🧠 What I Learned

Today I learned how to **find two elements in an array whose sum equals a given target**.

We are given an array of integers and a target value. Our task is to find two different elements whose sum is equal to the target.

We can solve this problem using nested loops or a hash map. A hash map helps us find the answer efficiently by storing previously visited numbers.

### 🔄 Basic Logic

If:

```text
arr = {2, 7, 11, 15}
target = 9
````

Then:

```
2 + 7 = 9 ✓
```

The indices of these elements are `0` and `1`.

So the output is:

```
[0, 1]
```

We can use a hash map to store each number and its index. For every element, we check whether `target - current element` already exists in the map.

This approach solves the problem in O(n) average time using O(n) extra space.

## 🎯 What I Learned From This Problem

- Arrays and array traversal
- Finding pairs of elements
- Using the target sum
- Understanding hash maps
- Working with array indices
- Applying the complement technique
- Improving time complexity
- Avoiding the use of the same element twice

This problem helped me understand how choosing the right data structure can make a solution faster and more efficient.

## 🔥 Challenge Progress

Day 37/111 — Completed ✅

Streak: 37/111 — Unbroken 🔥

> One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀

### 🚀 ALTA BASE 111

Learn → Practice → Solve → Improve → Repeat

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
