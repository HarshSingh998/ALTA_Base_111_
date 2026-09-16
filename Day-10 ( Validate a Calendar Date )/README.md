
# 🚀 Day 10/111 - ALTA BASE 111

## 💡 Problem: Validate a Calendar Date

**Difficulty:** Easy
**Topic:** Programming Basics • Nested If-Else • Conditional Logic

### 🧠 What I Learned

Today I learned how to check whether a given **day, month, and year form a valid date** according to the Gregorian calendar.

Different months have different numbers of days. February is special because it has **28 days normally and 29 days in a leap year**.

### 🔄 Basic Logic

If:

```text
Day = 29
Month = 2
Year = 2024
````

First, check whether the month is valid:

```text
1 <= Month <= 12
→ true
```

Since the month is February, check whether the year is a leap year:

```text
2024 % 4 == 0
→ true
```

Therefore, February has:

```text
29 days
```

Now check the given day:

```text
29 <= 29
→ true
```

Therefore:

```text
VALID DATE
```

So the output is:

```text
VALID DATE
```

The main idea is to **check the month first, determine the maximum number of days in that month, and then check whether the given day falls within the valid range**.

## 🎯 What I Learned From This Problem

* Nested `if-else` statements
* Conditional logic
* Checking valid ranges
* Working with days and months
* Understanding different month lengths
* Checking leap years
* Using the modulo operator `%`
* Combining multiple conditions
* Step-by-step validation

This problem helped me understand how **multiple conditions can be used together to validate real-world data such as calendar dates**.

## 🔥 Challenge Progress

**Day 10/111 — Completed ✅**

**Streak: 10/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
