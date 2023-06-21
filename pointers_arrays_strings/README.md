## Requirements
### General
-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
-   You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
-   Don’t forget to push your header file

## Tasks
### 0. 98 Battery st.
Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
### 1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers
### 2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.
### 3. I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line, to `stdout`.
### 4. I can only go one way. I've not got a reverse gear
Write a function that prints a string, in reverse, followed by a new line.
### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.
### 6. Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.
### 7. Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line.
### 8. Arrays are not pointers
Write a function that prints `n` elements of an array of integers, followed by a new line
-   where `n` is the number of elements of the array to be printed
-   Numbers must be separated by comma, followed by a space
-   The numbers should be displayed in the same order as they are stored in the array
### 9. strcpy
Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

-   Return value: the pointer to `dest`
### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
Write a function that convert a string to an integer
-   The number in the string can be preceded by an infinite number of characters
-   You need to take into account all the `-` and `+` signs before the number
-   If there are no numbers in the string, the function must return `0`
-   You are not allowed to use `long`
-   You are not allowed to declare new variables of “type” array
-   You are not allowed to hard-code special values
-   We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.
