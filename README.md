# CI-Script
Minimalistic hobby programming language

## Components
### Keywords
Directive        | `2`
-----------------|----
`import`         |
`from`           |

Storage Modifier | `4`
-----------------|----
`export`         |
`mut`            | Mutable storage
`async`          | Specifies that the function will be executed asynchronously
`in`             | Traverse through an array

Storage Type     | `6`
-----------------|----
`module`         |
`enum`           |
`struct`         |
`const`          | An identifier can be declared constant
`var`            | Variable declaration
`func`           | Function declaration

Conditional      | `4`
-----------------|----
`if`             | 0 or 1; Evaluates the expression and if true, statements inside the body are executed
`not`            |
`while`          | 0 to n; Evaluates the expression and while true, statements inside the body are executed
`for`            | just n; Used when the number of iterations is known

Flow Control     | `4`
-----------------|----
`skip`           | Skips the statements after it inside the loop for the iteration
`break`          | Terminates the innermost loop immediately when it's encountered
`await`          | Makes the program wait for an asynchronous function to finish
`return`         | The return keyword terminates the function and returns the value

Constants        | `4`
-----------------|----
`true`           | Boolean true
`false`          | Boolean false
`this`           |
`null`           |

Primitive Types  | `8`
-----------------|----
`void`           |
`bool`           | Boolean
`i32`            | Integers are whole numbers that can have both zero, positive and negative values
`u32`            | Allows for storage of only positive numbers
`f32`            | Used to hold real numbers
`char`           | Keyword char is used for declaring character type variables
`str`            | String
`auto`           |

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
`+`        | Addition
`-`        | Subtraction
`*`        | Multiplication
`/`        | Division
`%`        | Modulus
`^`        | Exponentiation

Relational | `8`
-----------|----
`==`       | Equality
`!=`       | Inequality
`<`        | Less than
`>`        | Greater than
`<=`       | Less than or equal to
`>=`       | Greater than or equal to
`&&`       | Conditional AND
`\|\|`     | Conditional OR

Other      | `8`
-----------|----
`=`        | Assignment
`?`        | Optional Type
`$`        | Reference (Address)
`@`        | Value at reference
`..`       | Exclusive range
`.=`       | Inclusive range
`?!`       | Conditional (ternary)
`~~`       |

NOTE: Almost every operator can be combined with the assignment operator (e.g. `<identifier> += <expression>`)

## Syntax
### Declarations
```cis
[public ]module {
	# Code
}

[public ]enum <Enumerator> {
	(<MEMBER>[: <Type>][ = <EXPRESSION>])[; ...]
}

[public ]struct <Structure> {
	([mut ]<member>(: <Type>[?]|[: <Type>[?]] = <expression>))[; ...]
}

[public ]const <CONSTANT>[: <Type>] = <EXPRESSION>;

[public ][mut ]var <variable>[: <Type>[?]][ = <expression>];

[public ][async ]func <function(([mut ]parameter[: <Type>[?]][ = <expression>])[, ...])>[: <Type>[?]] {
	# Code
}
```

### Statements
```cis
import <content>[, ...] from <"path">;

(if|while)[ not] <expression> {
	# Code
}

for [mut ]<variable> in <expression> {
	# Code
}

(skip|return)[ <expression>];

break[ <EXPRESSION>];

await <expression>;
```