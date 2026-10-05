
# 🚀 Day 29/111 - ALTA BASE 111

## 💡 Problem: Custom Type With a Method

**Difficulty:** Easy
**Topic:** Structs & Classes Basics • Structures • Methods

### 🧠 What I Learned

Today I learned how to create a **custom type with a method** using a `struct`.

A structure can contain not only variables (data members) but also **functions (methods)** that perform operations using that data.

### 🔄 Basic Logic

For example, we can create a `Student` structure:

```text
Student
├── name
├── marks
└── display()
````

The structure can be defined as:

```text
struct Student
{
    string name;
    float marks;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
```

Then we can create an object:

```text
Student student;
```

Assign values to its data members:

```text
student.name = "Harsh";
student.marks = 85.5;
```

And call the method using the dot `.` operator:

```text
student.display();
```

The method uses the data stored inside the object and displays:

```text
Name: Harsh
Marks: 85.5
```

The main idea is:

```text
Custom Type
     ↓
Data Members + Methods
     ↓
Create Object
     ↓
Call Method Using .
```

This shows how **data and the functions that work with that data can be grouped together**.

## 🎯 What I Learned From This Problem

* Structures
* Custom data types
* Methods
* Data members
* Creating objects
* Dot `.` operator
* Functions inside structures
* Accessing object data
* Organizing data and behavior

This problem helped me understand how a **custom type can contain both data and methods**, which is an important concept for learning classes and object-oriented programming.

## 🔥 Challenge Progress

**Day 29/111 — Completed ✅**

**Streak: 29/111 — Unbroken 🔥**

> **One problem a day. One concept at a time. One step closer to becoming a better programmer. 🚀**

### 🚀 ALTA BASE 111

**Learn → Practice → Solve → Improve → Repeat**

#ALTABASE111 #DSA #CodingChallenge #ProblemSolving #Programming #CodingJourney

