# CI-Script
[Components](#components)             | `64`
--------------------------------------|------
[Keywords](#keywords)                 | `16`
[Operators](#operators)               | `32`
[Constants](#constants)               |  `2`
[Primitive Types](#primitive-types)   |  `6`
[Standard Library](#standard-library) |  `8`

[Syntax](#syntax)                     | S
--------------------------------------|---
[Declarations](#declarations)         |
[Statements](#statements)             |

[Toolchain](#toolchain)               | T
--------------------------------------|---
[Commands](#commands)                 |

## Components
### Keywords
Storage Modifer | `4`
----------------|----
`pub`           | Makes the storage visible to the outside of a structure
`mut`           | Sets a variable to be mutable
`async`         | Specifies that the function will be executed asynchronously
`in`            | Makes the variable an iterator

Storage Type    | `4`
----------------|----
`const`         | Stores a value, which is known at compile time
`var`           | Stores a value, which doesn't have to be known at compile time
`struct`        | Holds variables of different types under a single name
`func`          | Contains a code snippet, which can be called from multiple places

Conditional     | `4`
----------------|----
`if`            | Evaluates the expression and if true, statements inside the body are executed
`for`           | Traverse through an array
`while`         | Evaluates the expression and while true, statements inside the body are executed
`until`         | Statements inside the body are executed and repeated until the expression is false

Flow Control    | `4`
----------------|----
`skip`          | Skips the current iteration or the given number of iterations
`break`         | Terminates the innermost loop or the given number of loops
`await`         | Makes the thread wait for an asynchronous function to finish
`return`        | Terminates the function and returns a value if given

### Operators
Logical    | `8`
-----------|----
`!`        | NOT
`&`        | AND
`\|`       | OR
`~`        | XOR
`<<`       | Shift Left
`>>`       | Shift Right
`<~`       | Rotate Left
`~>`       | Rotate Right

Arithmetic | `8`
-----------|----
`++`       | Increment
`--`       | Decrement
`+`        | Add
`-`        | Subtract
`*`        | Multiply
`/`        | Divide
`%`        | Modulo
`^`        | Exponate

Relational | `8`
-----------|----
`==`       | Equal
`!=`       | Not Equal
`<`        | Smaller Than
`>`        | Greater Than
`<=`       | Smaller Or Equal
`>=`       | Greater Or Equal
`&&`       | AND
`\|\|`     | OR

Other      | `8`
-----------|----
`=`        | Assignment
`?!`       | Conditional (Ternary)
`..`       | Exclusive Range
`.=`       | Inclusive Range
`$`        | Reference (Address)
`@`        | Value At Reference
`__`       |
`__`       |

NOTE: Almost every operator can be combined with the assignment operator (e.g. `<identifier> += <expression>`)

### Constants
Constants | `2`
----------|----
`true`    | `1` Or Higher
`false`   | `0`

### Primitive Types
Primitive Types | `6`
----------------|----
`bool`          |
`int`           |
`uint`          |
`float`         |
`char`          |
`str`           |

### Standard Library
Standard Library | `8`
-----------------|----
`stddef`         |
`stdios`         |
`stdfss`         |
`stdgui`         |
`stdmem`         |
`stdcon`         |
`stddev`         |
`stdsys`         |

## Syntax
### Declarations
```
[pub ]const <identifier>[: <type>] = <expression>;

[pub ][mut ]var <identifier>[: <type>][ = [await ]<expression>];

[pub ]struct [<identifier>] {
	# Code
}

[pub ][async ]func <identifier>([[mut ]<identifier>[: <type>][ = <expression>][, ...]])[: <type>] {
	# Code
}
```

### Statements
```
(if|while|until) <expression>[ (&&|||) ...] {
	# Code
}

for [mut ]<identifier>[: <type>] in <expression> {
	# Code
}

(skip|break|return)[ <expression>];
```

## Toolchain
### Commands
```
cis[ ([/b] <filename>|/lsp)]
```
