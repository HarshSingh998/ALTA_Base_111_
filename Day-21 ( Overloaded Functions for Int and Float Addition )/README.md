
# 🚀 Day 21/111 - ALTA BASE 111

## 💡 Problem: Overloaded Functions for Int and Float Addition

**Difficulty:** Easy
**Topic:** Functions • Function Overloading • Data Types

### 🧠 What I Learned

Today I learned about **function overloading** and how multiple functions can have the **same name but different parameter types**.

In C++, we can create separate functions for adding `int` and `float` values.

For example:

```text
add(int, int)
add(float, float)
````

The compiler automatically selects the correct function based on the arguments passed to it.

### 🔄 Basic Logic

If:

```text
Integer values:
10 + 20
```

Then:

```text id="8xq0qf"
add(10, 20)
```

The integer version of the function is called:

```text id="y9s4mz"
int add(int a, int b)
{
    return a + b;
}
```

For floating-point values:

```text
5.5 + 2.5
```

Then:

```text id="2g6n2p"
add(5.5f, 2.5f)
```

The float version is called:

```text id="0w8m5j"
float add(float a, float b)
{
    return a + b;
}
```

So the same function name `add()` can perform addition for different data types.

```text
add(int, int)     → Integer Addition
add(float, float) → Float Addition
```

This is called **Function Overloading**.

## 🎯 What I Learned From This Problem

* Functions
* Function overloading
* Same function name
* Different parameter types
* `int` data type
* `float` data type
* Function parameters
* Return values
* Compile-time polymorphism
* Reusing functions

Function overloading makes programs **cleaner and easier to understand** when the same operation needs to work with different data types.

## 🔥 Challenge Progress

**Day 21/111 — Completed ✅**

**Streak: 21/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney