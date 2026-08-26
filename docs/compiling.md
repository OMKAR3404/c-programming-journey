# Compiling notes

Each exercise is a separate program, so compile one `.c` file at a time.

```sh
gcc -std=c11 -Wall -Wextra -pedantic path/to/file.c -o program
./program
```

For a file using `math.h` functions such as `sqrt()` or `pow()`, add the math library at the end:

```sh
gcc -std=c11 -Wall -Wextra -pedantic file.c -lm -o program
```

gcc: The C compiler.
-std=c11: Compile using the C11 standard.
-Wall: Show common warning messages.
-Wextra: Show additional warning messages.
-pedantic: Warn when code does not follow standard C.
path/to/file.c: The C source file to compile.
-o program: Name the executable program.
./program: Run the compiled program.

gcc -std=c11 -Wall -Wextra -pedantic fundamentals/01_basic_program.c -o basic
./basic

I should read warnings instead of ignoring them. I also need to type input in the format the program asks for. Many small practice programs are deliberately not full production input validators yet.

The programs in `fundamentals/` should stay close to standard C. Some older assignment exercises may use C99 features such as variable-length arrays or compiler-specific behavior. Those belong in later practice, and their command or limitation should be written down when I keep them.
