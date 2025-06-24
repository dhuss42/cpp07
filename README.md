# C++ Module 07 – Templates

This module introduced me to C++ function and class templates

## ex00 – Start with a Few Functions

In the first exercise, I implemented three function templates: swap, min, and max. The swap function exchanged the values of two parameters passed by reference. min and max compared two values and returned the smaller or larger one, respectively, returning the second in case of equality.
This task was primarily about getting familiar with the syntax and semantics of writing function templates in C++.

## ex01 – Iter

In this exercise, I created a function template named iter that takes three parameters: a pointer to an array, the length of the array, and a function to apply to each element. 
My implementation begins by checking whether the pointer is valid, and if so, it iterates over the array using a standard for-loop. 
For each element, the provided function is called.

## ex02 – Array

In this exercise, I implemented a class template Array that mimics the behavior of a simplified dynamic array. 
The class handles dynamic memory allocation using new[] and ensures deep copying through a custom copy constructor and assignment operator, so that copies do not share memory. 
I overloaded the subscript operator to provide both mutable and immutable access to elements, throwing an exception if an index is out of bounds. 
The class also includes a size() method and a setElement() function for safer element assignment. 
To enable template instantiation at compile-time, I placed the implementation in a .tpp file and included it in the header.
