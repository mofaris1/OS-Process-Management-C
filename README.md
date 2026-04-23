# OS Process Management: Parent, Child, and Grandchild Orchestration

## Overview
This project demonstrates fundamental Operating System concepts, specifically process creation and management in a Linux environment using the `fork()` system call. The program showcases the hierarchy of processes (Parent -> Child -> Grandchild) and how tasks can be distributed among them.

## Functionality
The program performs the following operations:
1. **Parent Process:**
   - Initializes an integer array (`iA`) containing numbers from 1 up to a specific limit (based on Student ID).
   - Manages the creation of child processes.
2. **Child Process:**
   - Inherits the array and calculates the **sum of all odd numbers**.
   - Creates a **Grandchild process** to handle a separate sub-task.
3. **Grandchild Process:**
   - Scans the array to count the **products of three** (multiples of 3).

## Key Concepts Demonstrated
- **Process Hierarchy:** Understanding Parent-Child relationships in Unix-like systems.
- **System Calls:** Practical usage of `fork()`, `getpid()`, and `getppid()`.
- **Low-Level Programming:** Memory management and execution flow in C.
- **Linux Environment:** Compiling and running C code using `gcc` on Ubuntu.

## Technical Environment
- **Language:** C
- **OS:** Ubuntu Linux (via VirtualBox)
- **Compiler:** GCC

## How to Run
1. Clone the repository.
2. Compile the code using:
   ```bash
   gcc myCode.c -o process_demo
