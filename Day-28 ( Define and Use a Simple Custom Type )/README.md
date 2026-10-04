
# 🚀 Day 28/111 - ALTA BASE 111

## 💡 Problem: Define and Use a Simple Custom Type

**Difficulty:** Easy
**Topic:** Structs & Classes Basics • Custom Data Types • Structures

### 🧠 What I Learned

Today I learned how to **create and use a simple custom data type** using a `struct`.

A structure allows us to group multiple related variables of different data types under one name. This makes it easier to organize and work with related information.

### 🔄 Basic Logic

For example, we can create a `Student` structure:

```text
Student
├── name
├── age
└── marks
````

The structure can be defined as:

```text id="c8k3wq"
struct Student
{
    string name;
    int age;
    float marks;
};
```

Then we can create an object of the structure:

```text id="7qv2nz"
Student student;
```

And assign values to its members:

```text id="h4p6yk"
student.name = "Harsh";
student.age = 18;
student.marks = 85.5;
```

The values can then be accessed using the **dot (`.`) operator**:

```text id="v6r2pd"
student.name
student.age
student.marks
```

So the structure allows us to keep related information together:

```text id="8m1z4s"
Name: Harsh
Age: 18
Marks: 85.5
```

The main idea is to **define a custom type using `struct` and then create an object to store and access related data**.

## 🎯 What I Learned From This Problem

* Structures
* Custom data types
* `struct` keyword
* Structure members
* Creating structure objects
* Dot `.` operator
* Storing related information
* Accessing structure members
* Organizing data

This problem helped me understand how **structures can be used to group related variables together and create our own custom data types**.

## 🔥 Challenge Progress

**Day 28/111 — Completed ✅**

**Streak: 28/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney
