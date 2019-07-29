# Commands

`exit`, `pwd`, `ls`, `man`, `.`, `..`, `mkdir`, `cd`, `rm`, `touch`, `*`, `cat`, `cp`, `mv`, `date`, `chmod`, `echo`, `cat`, `more`, `less`, `head`, `tail`, `grep`, `>`, `<`, `|`, `sort`, `cut`, `sed`, `tr`, `wc`, `file`, `ifconfig`, `bc`, `find`, `env`, `export`, `rv`, `2>&1`, `2>`, `/dev/null`, 

# Data types

* Numbers
  * Integers -> 2 - 4 bytes -> 10000000 00000000 00000000 00000000 -> -1
  * Unsigned integers -> 2 - 4 bytes -> 10000000 00000000 00000000 00000000 -> 2,147,483,648
* Characters -> 1 byte -> 01000001 (ASCII) -> 00000000 00000000 00000000 01000001 (UNICODE - UTF-8)

# Alias

`typedef TYPE NEW_TYPE`

# Variables

* Placeholders
* Spaces in memory

Decisions
Repetitions
Functions
Pointers
Program arguments
Memory allocation

`#include <stdlib.h>`
`VAR = (TYPE)malloc(sizeof(VAR) * LENGTH)` -> `VOID_POINTER` (`NULL` for error)
`free(VAR)`

Header files
Preprocessing

`#include <FILE_FROM_PATH>`, `#include "RELATIVE_PATH"`, `#defile KEY REPLACEMENT`, `#define KEY(ARGS[,...]) REPLACEMENT`, `#if`, `#ifdef KEY`, `#ifndef KEY`, `#endif`

Pointers to functions

`void (*NAME)(PARAMETERS); void (*NAME)(PARAMETERS) NEW_VAR;`, `typedef void (*NAME)(PARAMETERS); NAME NEW_VAR;`

Structures, unions and enums

`struct name { TYPE NAME, ... }`, `enum name { NAME[ = VALUE], ... }`, `union name { TYPE NAME, ... }`

# Files

`open(PATH, FLAGS, PERMS)` -> `FILE_DESCRIPTOR` (`-1` for error)
`cloce(FILE_DESCRIPTOR)` -> `ERROR` (`-1`)
`write(FILE_DESCRIPTOR, BUFFER, BYTES_TO_WRITE)` -> `WRITTEN_BYTES` (`-1` for error)
`read(FILE_DESCRIPTOR, BUFFER, BYTES_TO_WRITE)` -> `READ_BYTES` (`0` for `EOF`,`-1` for error)
`lseek(FILE_DESCRIPTOR, OFFSET, MODE)` -> `NEW_OFFSET` (`-1` for error)

# Compilation

`gcc -Wall -Wextra -Werror`, `norminette -R CheckForbiddenSourceHeader`, `gcc -Wall -Wextra -Werror -c`, `ar rc libNAME.a OBJECT_NAME.o...`, `ranlib libNAME.a`.

Makefile

