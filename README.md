# ft_printf

## :rocket: Description

This is the _ft_printf_ project in 42's curriculum. It replicates the behaviour of the _printf_ function in the C programming language. It handles the following conversions and flags:<br>

1. "cspdiuxX%" conversions.
2. "0-" flags.
3. Width and precision (also with the '*' option).

For more information on this function see the manpage of the C _printf_ function. 

## :gear: Installation and Setup

Clone this repository and go inside the project folder. Then run:

```sh
make
```

This will create all the object files and the _libftprintf.a_ static library. This library contains the _ft_printf_ function. To delete all the object files and only keep the _libftprintf.a_ library, run:

```sh
make clean
```

## :joystick: Usage

To use this function, compile and execute this way:

```sh
gcc -Wall -Wextra -Werror your_main.c libftprintf.a
./a.out
```

In which your_main.c should be something like:

```C
#include "src/ft_printf.h"

int     main(void)
{
    ft_printf("%10.5d\n", 1234567);
    return (0);
}
```

The results will be printed on _stdout_. 

## :blue_book: License
[MIT](https://opensource.org/licenses/MIT)