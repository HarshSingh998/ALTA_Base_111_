
# 🚀 Day 15/111 - ALTA BASE 111

## 💡 Problem: Check Prime Number

**Difficulty:** Easy
**Topic:** Programming Basics • Loops • Prime Numbers

### 🧠 What I Learned

Today I learned how to check whether a given number is a **prime number** using a loop.

A prime number is a number greater than `1` that has only two factors: `1` and the number itself.

I also learned how to **optimize the loop by checking divisors only up to √N** instead of checking all numbers up to `N`.

### 🔄 Basic Logic

If:

```text
N = 29
````

Start checking possible divisors from `2`:

```text
2 × 2 <= 29 → true
3 × 3 <= 29 → true
4 × 4 <= 29 → true
5 × 5 <= 29 → true
6 × 6 <= 29 → false
```

Now check whether `29` is divisible by any number from `2` to `5`:

```text
29 % 2 == 0 → false
29 % 3 == 0 → false
29 % 4 == 0 → false
29 % 5 == 0 → false
```

Since no divisor is found:

```text
29 is a Prime Number
```

So the output is:

```text
29 is a Prime Number
```

The main idea is to **check divisibility only up to √N**, because if a number has a factor greater than its square root, it must also have a corresponding factor smaller than its square root.

## 🎯 What I Learned From This Problem

* Prime numbers
* Factors and divisibility
* `for` loop
* Modulo operator `%`
* Checking divisors
* Optimizing a loop
* Square root concept
* Conditional statements
* Efficient problem solving

This problem helped me understand how **loop optimization can reduce unnecessary checks** by stopping the divisor search at √N.

## 🔥 Challenge Progress

**Day 15/111 — Completed ✅**

**Streak: 15/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
