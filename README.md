# CI-Script
Minimalistic hobby programming language

## Components
Comments   | `4`
-----------|----
`#`        | Line comment
`/*`       | Block comment start
`*/`       | Block comment end
`\``       | Documentation in comment

### Keywords
Directive        | `4`
-----------------|----
`import`         | Specify identifiers to import
`from`           | Specify from where to import
`export`         | Make identifiers visible to other modules
`module`         | Hold source code

Storage Modifier | `2`
-----------------|----
`mut`            | Make variables able to change thier state
`async`          | Make functions able to spawn a new thread

Storage Type     | `5`
-----------------|----
`enum`           | Group many values in a single place
`struct`         | Group variables under a single name
`const`          | Value which is known at compile time
`var`            | Value that could be known at runtime
`func`           | Code block which can be called later

Conditional      | `5`
-----------------|----
`if`             | Code block which executes when the given expression isn't false or null
`while`          | Code block which executes as long as the expression isn't false or null
`not`            |
`for`            | Code block which executes iterates through each element of a collection
`in`             |

Flow Control     | `4`
-----------------|----
`skip`           | Skips one or a given number of iterations
`break`          | Terminates one or a given number of loops
`await`          | Joins two separate threads together
`return`         | Returns a value if given and terminates tue function

Constants        | `2`
-----------------|----
`true`           | Boolean true
`false`          | Boolean false

Constructs       | `2`
-----------------|----
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

### Punctuation
Definition | `8`
-----------|----
`(`        |
`)`        |
`[`        |
`]`        |
`{`        |
`}`        |
`'`        |
`"`        |

Separator  | `4`
-----------|----
`.`        |
`,`        |
`:`        |
`;`        |

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