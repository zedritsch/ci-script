# CI-Script
[Language Components](#language-components) | `64`
--------------------------------------------|------
[Keywords](#keywords)                       | `16`
[Operators](#operators)                     | `32`
[Primitive Types](#primitive-types)         |  `6`
[Constants](#constants)                     |  `4`
[]()                                        |  `6`

[Expressions](#expressions)   | E
------------------------------|---
[Storage](#storage)           |
[Conditional](#conditional)   |
[Loop Control](#loop-control) |
[Flow Control](#flow-control) |

[Compiler](#compiler) | C
----------------------|---
[Command](#command)   |

## Language Components
### Keywords
Storage  | `6`
---------|----
`secret` |
`async`  |
`var`    |
`const`  |
`func`   |
`struct` |

Conditional | `2`
------------|----
`if`        |
`else`      |

Loop Control | `4`
-------------|----
`do`         |
`while`      |
`for`        |
`in`         |

Flow Control | `4`
-------------|----
`skip`       |
`break`      |
`await`      |
`return`     |

### Operators
Logical | `8`
--------|----
`!`     | Not
`&`     | And
`\|`     | Or
`^`     | Xor
`<<`    | Shift Left
`>>`    | Shift Right
`++`    | `@` Increment
`--`    | `@` Decrement

Arithmetic | `8`
-----------|----
`+`        | `@` Add
`-`        | `@` Subtract
`*`        | `@` Multiply
`/`        | `@` Divide
`%`        | `@` Modulo
`**`       | `@` Exponate
`//`       | `@` Root
`%%`       | `@` Root Remainder

Relational | `8`
-----------|----
`==`       | `@` Equal
`!=`       | `@` Not Equal
`<`        | `@` Smaller Than
`>`        | `@` Greater Than
`<=`       | `@` Smaller Equal
`>=`       | `@` Greater Equal
`&&`       | And
`\|\|`       | Or

Other | `8`
------|----
`=`   | Assignment
`..`  | Exclusive Range
`.=`  | Inclusive Range
`$`   | Reference (Variable Address)
` `   | -> Iterator / Pointer Value?
` `   | => Result / Switch Case?
` `   | @ Variable At Address?
` `   | ~ Destructor?

`@` marks an operator as overloadable

### Primitive Types
Primitive Types | `6`
----------------|----
`bool`          | Single Bit
`int`           | Signed Integer
`uint`          | Unsigned Integer
`float`         | Signed Number
`char`          | Unsigned Integer
`string`        | Char Array

### Constants
Constants | `4`
----------|----
`this`    | Struct Instance Inside Definition
`null`    | No Instance Of Variable
`true`    | `1` Or Higher
`false`   | `0` Or `null`

### ???
??? | `6`
----|----
` ` |
` ` |
` ` |
` ` |
` ` |
` ` |

## Expressions
### Storage
```
[secret ][(const|var) ]<identifier>[: <type>][ = <value>][;]
```
```
[secret ][async ]func <identifier>([<parameter>[, <parameter>]*])[: <type>][[ {]
	<function_body>
[}]][;]
```
```
[secret ]struct [<identifier>[: <type>]][[ {]
	<structure_body>
[}]][;]
```

### Conditional
```
if <condition>[[ (&&|||) <condition>]*][ {]
	<if_body>
[}][;]
[else[ {]
	<else_body>
[}][;]]
```

### Loop Control
```
[do ]while <condition>[[ (&&|||) <condition>]*][ {]
	<while_body>
[}][;]
```
```
[do ]for <identifier> in <value>[ {]
	<for_body>
[}][;]
```

### Flow Control
```
skip[ <value>][;]
```
```
break[ <value>][;]
```
```
await <value>[;]
```
```
return[ <value>][;]
```

## Compiler
### Command
```
cis[ (<filename>|/lsp)]
```