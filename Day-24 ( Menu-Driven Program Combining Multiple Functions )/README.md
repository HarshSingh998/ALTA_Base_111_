
# 🚀 Day 24/111 - ALTA BASE 111

## 💡 Problem: Menu-Driven Program Combining Multiple Functions

**Difficulty:** Easy
**Topic:** Functions • Menu-Driven Program • Switch Case

### 🧠 What I Learned

Today I learned how to create a **menu-driven program using multiple functions**.

A menu-driven program allows the user to choose an operation from a list of options. Each operation can be handled by a separate function, which makes the program easier to organize and understand.

### 🔄 Basic Logic

For example, a menu can contain different operations:

```text
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
````

The user selects an option:

```text
Choice = 1
```

The program uses `switch-case` to identify the selected operation:

```text id="8b6e2p"
switch (choice)
{
    case 1:
        addition();
        break;

    case 2:
        subtraction();
        break;

    case 3:
        multiplication();
        break;

    case 4:
        division();
        break;

    case 5:
        exit();
        break;
}
```

Each operation is handled by its own function:

```text id="2xw4f9"
addition()       → Performs addition
subtraction()    → Performs subtraction
multiplication() → Performs multiplication
division()       → Performs division
```

The main idea is to **divide a large program into smaller functions and use a menu to call the required function**.

## 🎯 What I Learned From This Problem

* Functions
* Multiple functions
* Menu-driven programming
* `switch-case`
* `break` statement
* Function calling
* Organizing code into smaller parts
* Reusing functions
* User input and choices

This problem helped me understand how **multiple functions can work together in a single program**, while a menu and `switch-case` can be used to control which function is executed.

## 🔥 Challenge Progress

**Day 24/111 — Completed ✅**

**Streak: 24/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney