# CI-Script
[Language Components](#language-components) | `128`
--------------------------------------------|------
[Keywords](#keywords)                       | `24`
[Operators](#operators)                     | `32`
[System](#system)                           | `56`
[Miscellaneous](#miscellaneous)             | `16`



## Language Components
### Keywords
Macros  | `4`
--------|----
`#if`   |
`#elif` |
`#else` |
`#end`  |

Variables | `8`
----------|----
`import`  |
`using`   |
`pub`     |
`pvt`     |
`var`     |
`const`   |
`class`   |
`func`    |

Statements | `8`
-----------|----
`if`       |
`else`     |
`switch`   |
`case`     |
`other`    |
`break`    |
`skip`     |
`return`   |

Loops   | `4`
--------|----
`for`   |
`in`    |
`do`    |
`while` |


### Operators
Logical | `6`
--------|------------
`<<`    | Shift left
`>>`    | Shift right
`^`     | Cross
`&`     | And
`\|`    | Or
`!`     | Not

Arithmetic | `5`
-----------|---------------
`+`        | Addition
`-`        | Subtraction
`*`        | Multiplication
`/`        | Division
`%`        | Modulus

Assignment | `8`
-----------|----------
`++`       | Increment
`--`       | Decrement
`=`        | Assign
`+=`       | Add
`-=`       | Subtract
`*=`       | Multiply
`/=`       | Divide
`%=`       | Modulo

Relational | `6`
-----------|--------------
`==`       | Equal
`!=`       | Not Equal
`<`        | Smaller
`>`        | Greater
`<=`       | Smaller Equal
`>=`       | Greater Equal

Other | `7`
------|--------------------
`$`   | Address (Reference)
`*`   | Pointer
`->`  | Pointer Value
`->`  | Iterator
`?`   | Inline Value
`?`   | Optional Variable
`:`   | Type Specifier


### System
Classes   | `16`
----------|------------------------------------------------
`auto`    | Will get a Type at build Time
`void`    | No Type
`bool`    | A single Bit
`char`    | 1-64 Bit unsigned Integer
`int`     | 1-64 Bit signed Integer
`frac`    | 1-64 Bit unsigned Number (+ Decimal Point Bits)
`dec`     | 1-64 Bit signed Number (+ Decimal Point Bits)
`String`  | Character Array with extra Functionality
`IO`      | FIXME: Not final
`Process` | FIXME: Not final
`6` More  | TODO

Functions | `40`
----------|-------------------------------
`typeOf`  | Returns the Type of a Variable
`sizeOf`  |
`38` More | TODO


### Miscellaneous
Comments | `4`
---------|------------------
`#`      | Line
`/*`     | Block Start
`*/`     | Block End
`###`    | Block Start & End

Enclosures | `8`
-----------|------------------
`(`        | Parameter & Value
`)`        | Parameter & Value
`[`        | Entry
`]`        | Entry
`{`        | Command
`}`        | Command
`'`        | Character
`"`        | String

Separators | `4`
-----------|------------------
`.`        | Class Member
`,`        | Parameter & Entry
`:`        | Value
`;`        | Command



## Syntax Highlighting
01. parameter - orange
02. variable - light orange
03. constant - dark orange

04. keyword - dark red
05. operator - light red
06. function - light purple
07. class - dark purple

08. comment - gray

09. literal - dark blue
10. string - light blue

other - white