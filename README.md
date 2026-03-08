# StudentResultOverload

## Description
**StudentResultOverload** is a C++ console application that demonstrates **function overloading in classes**. The program calculates the average marks of three subjects using different overloaded `result()` functions with various parameter types.

This project is useful for learning:
- Function Overloading
- Classes and Objects
- Input and Output handling in C++

---

## Features

### 1. Normal Method
- Takes subject names and marks from user input.
- Calculates and displays average marks.

### 2. Method with Marks Parameters
- Accepts marks as function parameters.
- Asks user to enter subject names.

### 3. Method with Subject and Marks Parameters
- Accepts both subject names and marks as parameters.
- Displays subject-wise marks and average.

---

## Class Details

### Class: `a`
Contains:
- Subject names:
  - `sub1`
  - `sub2`
  - `sub3`
- Marks:
  - `m1`
  - `m2`
  - `m3`
- `average` – Stores calculated average marks.

### Functions

#### `display()`
- Displays subject names and marks.

#### Overloaded `result()` Functions
1. `void result(int ma1, int ma2, int ma3)`
   - Takes marks as parameters.
   - Takes subject names from user.

2. `int result()`
   - Takes subject names and marks from user.
   - Returns average marks.

3. `int result(string s1, string s2, string s3, int ma1, int ma2, int ma3)`
   - Takes both subjects and marks as parameters.
   - Returns average marks.

---

## How to Run

### Step 1: Compile the program
```bash
g++ main.cpp -o StudentResultOverload
