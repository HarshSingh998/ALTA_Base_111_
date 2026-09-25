
# 🚀 Day 20/111 - ALTA BASE 111

## 💡 Problem: FizzBuzz

**Difficulty:** Easy
**Topic:** Programming Basics • For Loop • Conditional Logic • Modulo Operator

### 🧠 What I Learned

Today I learned about the **FizzBuzz problem** and how to use **multiple conditions** to check whether a number is divisible by `3`, `5`, or both.

For multiples of `3`, we print **Fizz**.  
For multiples of `5`, we print **Buzz**.  
For multiples of both `3` and `5`, we print **FizzBuzz**.

### 🔄 Basic Logic

If:

```text
N = 15
````

We check every number from `1` to `N`.

First, check whether the number is divisible by both `3` and `5`:

```text
if (i % 3 == 0 && i % 5 == 0)
    print "FizzBuzz"
```

Then check the individual conditions:

```text
if (i % 3 == 0)
    print "Fizz"

if (i % 5 == 0)
    print "Buzz"
```

For example:

```text
3  → Fizz
5  → Buzz
6  → Fizz
10 → Buzz
15 → FizzBuzz
```

The important point is to check **FizzBuzz first**, otherwise `15` would match the condition for `3` before reaching the combined condition.

So the output is:

```text
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

This problem helped me understand how multiple conditions can be combined to solve a problem using loops and the modulo operator.

## 🎯 What I Learned From This Problem

* FizzBuzz logic
* For loop
* Conditional statements
* Multiple conditions
* Logical AND operator `&&`
* Modulo operator `%`
* Checking divisibility
* Ordering conditions correctly
* Printing different outputs based on conditions

The key idea is to **check the combined condition first**, then check the individual conditions.

## 🔥 Challenge Progress

**Day 20/111 — Completed ✅**

**Streak: 20/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
