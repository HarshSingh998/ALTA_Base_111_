
# 🚀 Day 30/111 - ALTA BASE 111

## 💡 Problem: Manually Link Two Custom-Type Instances

**Difficulty:** Medium
**Topic:** Structs & Classes Basics • Structures • Pointers

### 🧠 What I Learned

Today I learned how to **manually link two instances of a custom type** using pointers.

A custom type can contain a pointer that stores the address of another object of the same type. This allows two objects to be connected with each other.

### 🔄 Basic Logic

For example, we can create a `Node` structure:

```text
Node
├── data
└── next
````

The structure can be defined as:

```text
struct Node
{
    int data;
    Node* next;
};
```

Now create two objects:

```text
Node first;
Node second;
```

Assign values:

```text
first.data = 10;
second.data = 20;
```

Then manually link the first object to the second:

```text
first.next = &second;
```

The relationship becomes:

```text
first
  ↓
data = 10
next ─────→ second
             ↓
          data = 20
```

We can access the second object's data through the link:

```text
first.next->data
```

Which gives:

```text
20
```

The main idea is:

```text
Object 1
   ↓
Pointer
   ↓
Object 2
```

This is a basic concept behind **linked data structures**, where one object stores a reference to another object.

## 🎯 What I Learned From This Problem

* Structures
* Custom data types
* Objects and instances
* Pointers
* Addresses
* Pointer members
* `&` address-of operator
* `->` arrow operator
* Linking objects
* Basics of linked structures

This problem helped me understand how **pointers can be used to connect one custom-type object with another**, which is an important foundation for learning linked lists and other dynamic data structures.

## 🔥 Challenge Progress

**Day 30/111 — Completed ✅**

**Streak: 30/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
