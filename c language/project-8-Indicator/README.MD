# String Length Finder in C

This project is a simple **C program** that calculates the length of a string **without using built-in functions like `strlen()`**. Instead, it demonstrates how to use **pointers** to traverse a string character by character.

---

## 📌 Program Overview

* Takes a string input from the user
* Uses a character pointer to access each character
* Counts characters until the null character (`\0`) is reached
* Displays the total length of the string

This program is useful for beginners who want to understand:

* String handling in C
* Pointer arithmetic
* While loop usage

---

## 🧠 Logic Used

1. Declare a character array to store the string
2. Declare a pointer and assign it the base address of the string
3. Initialize a counter variable (`length`) to 0
4. Use a `while` loop to move the pointer until `\0` is found
5. Increment the counter for each character
6. Print the final length

---

## 💻 Source Code

```c
#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string : ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The length of a string is: %d", length);

    return 0;
}
```

---

## ▶️ Sample Input

```
Enter any string : prince
```

## 📤 Sample Output

```
The length of a string is: 6
```

---

## 🛠️ How to Compile and Run

1. Open terminal or command prompt
2. Compile the program:

   ```
   gcc Q1-length-finder.c
   ```
3. Run the executable:

   ```
   ./a
   ```

---

## 🎯 Key Concepts Covered

* Character arrays
* Pointers in C
* String termination (`\0`)
* Loop-based string processing

---


