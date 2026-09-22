
# 🚀 Day 16/111 - ALTA BASE 111

## 💡 Problem: Check Palindrome Number

**Difficulty:** Easy
**Topic:** Programming Basics • Loops • Modulo Operator

### 🧠 What I Learned

Today I learned how to check whether a given number is a **palindrome** or not.

A palindrome number is a number that **reads the same forward and backward**.

In this problem, I learned how to reverse a number mathematically using a loop and the modulo `%` operator, without converting the number into a string.

### 🔄 Basic Logic

If:

```text
N = 12321
````

First, take the last digit using `% 10`:

```text
12321 % 10 = 1
```

Add the digit to the reversed number:

```text
rev = rev × 10 + digit
```

Then remove the last digit from the original number:

```text
n = n / 10
```

The process continues:

```text
12321 → 1
1232  → 12
123   → 123
12    → 1232
1     → 12321
```

The reversed number becomes:

```text
12321
```

Now compare the original number with the reversed number:

```text
12321 == 12321
→ true
```

Therefore:

```text
Palindrome
```

So the output is:

```text
Palindrome
```

The main idea is to **reverse the number using modulo and division, then compare the reversed number with the original number**.

## 🎯 What I Learned From This Problem

* Palindrome numbers
* `while` loop
* Modulo operator `%`
* Integer division
* Extracting digits
* Reversing a number
* Comparing numbers
* Working with variables
* Step-by-step problem solving

This problem helped me understand how **loops, modulo, and integer division can be combined to extract digits and reverse a number without using strings**.

## 🔥 Challenge Progress

**Day 16/111 — Completed ✅**

**Streak: 16/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney