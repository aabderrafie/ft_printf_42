
# ft_printf

## Overview

Welcome to **ft_printf**, a custom implementation of the standard `printf()` function from the C library. This project aims to deepen your understanding of handling a variable number of arguments and to replicate the functionality of `printf()`.

## Summary

The goal of this project is straightforward: recode `printf()`. You'll mainly learn about using a variable number of arguments, which is quite exciting!

## Mandatory Part

### Program Name
`libftprintf.a`

### Turn-in Files
- `Makefile`
- `*.h`
- `*.c`

### Makefile Targets
- `NAME`
- `all`
- `clean`
- `fclean`
- `re`

### External Functions
- `malloc`
- `free`
- `write`
- `va_start`
- `va_arg`
- `va_copy`
- `va_end`

### Libft Authorization
Libft is authorized for this project.

### Description
Create a library that contains `ft_printf()`, a function that mimics the original `printf()`. Your function must handle the following conversions:

- `%c` Prints a single character.
- `%s` Prints a string (C convention).
- `%p` Prints a void pointer in hexadecimal format.
- `%d` Prints a decimal (base 10) number.
- `%i` Prints an integer in base 10.
- `%u` Prints an unsigned decimal (base 10) number.
- `%x` Prints a number in hexadecimal (base 16) lowercase format.
- `%X` Prints a number in hexadecimal (base 16) uppercase format.
- `%%` Prints a percent sign.

### Requirements
- Do not implement the buffer management of the original `printf()`.
- Your function must be compared against the original `printf()`.
- Use the command `ar` to create your library. Using `libtool` is forbidden.
- Your `libftprintf.a` must be created at the root of your repository.

## Bonus Part

You are not required to implement all bonuses, but here are the options:

### Bonus List
- Manage any combination of the following flags: `'-0.'` and the field minimum width for all conversions.
- Manage all the following flags: `'# +'` (including the space flag).

## Installation

Clone the repository and navigate to the project directory:

```sh
git clone https://github.com/aabderrafie/ft_printf_42_Cursus.git
cd ft_printf
```

Compile the library:

```sh
make
```

## Usage

Include the `ft_printf` header and link the library in your project:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

Compile your project with the `libftprintf.a` library:

```sh
gcc -o my_program my_program.c -L. -lftprintf
```

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

Special thanks to the 42 Network and all the peer reviewers who helped make this project a success.

---

Feel free to adjust the repository URL and any other specifics as needed.
