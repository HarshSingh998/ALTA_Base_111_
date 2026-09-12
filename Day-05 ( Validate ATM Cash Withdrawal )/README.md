
# 🚀 Day 05/111 - ALTA BASE 111

## 💡 Problem: Validate ATM Cash Withdrawal

**Difficulty:** Easy
**Topic:** Programming Basics • Conditional Logic • Logical Operators

### 🧠 What I Learned

Today I learned how to **validate an ATM cash withdrawal** using multiple conditions.

A withdrawal is valid only when the withdrawal amount is greater than `0`, is a multiple of `100`, and the account has enough balance to cover both the withdrawal amount and the transaction fee of `$2`.

### 🔄 Basic Logic

If:

```text
Account Balance = 5000
Withdrawal Amount = 1200
Transaction Fee = 2
````

First, check whether the withdrawal amount is valid:

```text
1200 > 0        → true
1200 % 100 == 0 → true
```

Then check whether the account has enough balance:

```text
5000 >= 1200 + 2
5000 >= 1202
→ true
```

Since all conditions are true:

```text
Transaction Valid: true
```

The remaining balance will be:

```text
Remaining Balance = 5000 - 1200 - 2
                  = 3798
```

So the output is:

```text
Transaction Valid: true
Remaining Balance: 3798.00
```

If any one of the required conditions is false, the transaction will be invalid.

## 🎯 What I Learned From This Problem

* Conditional statements
* Logical AND operator `&&`
* Modulo operator `%`
* Comparing values
* Checking multiples of a number
* Working with account balance
* Applying a transaction fee
* Combining multiple conditions
* Basic decision-making in programming

This problem helped me understand how **multiple conditions can be combined using the logical AND operator** to make a final decision.

## 🔥 Challenge Progress

**Day 05/111 — Completed ✅**

**Streak: 5/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney

```
```
