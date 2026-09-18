
# 🚀 Day 12/111 - ALTA BASE 111

## 💡 Problem: Month to Season Using Fall-Through

**Difficulty:** Easy
**Topic:** Programming Basics • Switch Case • Fall-Through

### 🧠 What I Learned

Today I learned about **fall-through behavior in switch-case statements**.

Fall-through allows multiple `case` values to share the same code block. Instead of writing separate code for every month, multiple month cases can be grouped together to represent the same season.

### 🔄 Basic Logic

If:

```text
Month = 4
````

The `switch` statement checks the month:

```text
3 → Spring
4 → Spring
5 → Spring
```

Since the input is `4`, it falls through to the code block for Spring:

```text
Season: Spring
```

The seasons are grouped like this:

```text
12, 1, 2   → Winter
3, 4, 5    → Spring
6, 7, 8    → Summer
9, 10, 11  → Autumn/Monsoon
```

For example:

```text
case 3:
case 4:
case 5:
    cout << "Season: Spring";
    break;
```

Here, there are no `break` statements between cases `3`, `4`, and `5`, so all three cases execute the same code block.

If the month is outside the range `1-12`, the program prints:

```text
Invalid Month
```

## 🎯 What I Learned From This Problem

* `switch-case` statements
* Fall-through behavior
* `case` statements
* `break` statements
* Grouping multiple cases
* Working with integer values
* Using switch for multiple choices
* Handling invalid input
* Writing cleaner conditional logic

This problem helped me understand how **fall-through can be used to make multiple cases share the same code block**, which is useful when different inputs should produce the same output.

## 🔥 Challenge Progress

**Day 12/111 — Completed ✅**

**Streak: 12/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney