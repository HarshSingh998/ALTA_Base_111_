
# 🚀 Day 35/111 - ALTA BASE 111

## 💡 Problem: Left Rotate an Array by D Places

**Difficulty:** Easy
**Topic:** Arrays • Array Rotation • Basic Math

### 🧠 What I Learned

Today I learned how to **left rotate an array by D places**.

Left rotation means moving the first `D` elements to the end of the array while maintaining their original order.

If `D` is greater than the array size, we can use `D % n` to find the effective number of rotations, where `n` is the array size.

### 🔄 Basic Logic

If:

```text
arr = {10, 20, 30, 40, 50}
D = 2
````

Then:

```
After 1 rotation → {20, 30, 40, 50, 10}
After 2 rotations → {30, 40, 50, 10, 20}
```

The first two elements move to the end of the array.

So the output is:

```
30 40 50 10 20
```

We can solve this problem using the reversal algorithm by reversing the first `D` elements, then the remaining elements, and finally the entire array.

## 🎯 What I Learned From This Problem

- Arrays and array indexing
- Left rotation of an array
- Understanding the rotation count `D`
- Using the modulo operator `%`
- Reversal algorithm
- Handling edge cases
- Improving time and space efficiency

This problem helped me understand how to rotate an array efficiently using the reversal algorithm in O(n) time and O(1) extra space.

## 🔥 Challenge Progress

Day 35/111 — Completed ✅

Streak: 35/111 — Unbroken 🔥

> One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀

### 🚀 ALTA BASE 111

Learn → Practice → Solve → Improve → Repeat

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
