# C Memory Map

While moving beyond C fundamentals, I started looking at how a C
program uses memory.

## Basic Memory Layout

```text
Higher Addresses
+----------------------+
|        STACK         |
| Local variables      |
| Function calls       |
+----------------------+
|                      |
|        HEAP          |
| Dynamic allocation   |
+----------------------+
|        BSS           |
| Uninitialized global |
| and static variables |
+----------------------+
|        DATA          |
| Initialized global   |
| and static variables |
+----------------------+
|        TEXT          |
| Program instructions |
+----------------------+
Lower Addresses

##What I understood



Contains the program instructions/code.

Data:

Contains initialized global and static variables.

BSS:

Contains uninitialized or zero-initialized global and static variables.

Heap:

Used for dynamically allocated memory.

Stack:

Used for function calls and automatic local variables.




Simple Example
int global = 10;
int count;

void test(void)
{
    int x = 20;
}



Explaination -->
In this example:

global → initialized global variable
count → uninitialized global variable
x → local automatic variable





