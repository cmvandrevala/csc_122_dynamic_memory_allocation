# CSC 122 - Dynamic Memory Allocation

This project provides some code examples that compliment the slides for dynamic memory allocation in C++. The slides for the presentation can be found [on my website](https://cyrusvandrevala.com/teaching/csc/122/2024/spring/index.html). The slides go through making a little garden tracker app.

## Setup

Currently, the Makefile only supports building and running the code via g++. If you want to build the code using another compiler, you will have to do so manually.

Each .cpp file is prefixed with a number indicating the step in the lesson. You can build and run a step of the lesson using:

```bash
make 1
make 2
make 3
make 4
```

## Lesson Outline

### 1. Initial Garden Tracker

We start off by creating an array of strings with a hardcoded number of entries. Although this is simple to do, it does not provide us with the flexibility we need to create a dynamic list of plants.

### 2. Dynamic Memory Example

First, I use the `new` keyword in C++ to create an `int` and a `string` on the heap. Second, I print out the values and the memory addresses where they are stored. Finally, I use the `delete` keyword to return the memory to the heap.

### 3. Memory Leak

I purposefully implement an example of a memory leak. Notice that the program will probably run just fine on your system, even though memory is being leaked with each new creation of an `int`. Why is that?

### 4. Dynamic Array

I implement a dynamic array data structure using the heap. The garden tracker app can now hold any number of entries (assuming the system has enough memory)!
