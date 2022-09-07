# CI-Script
[Language Components](#language-components) | `128`
--------------------------------------------|------
[Keywords](#keywords)                       | `32`
[Operators](#operators)                     | `32`
[System](#system)                           | `48`
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

Data Types | `8`
-----------|----
`void`     |
`bool`     |
`char`     |
`int`      |
`frac`     |
`dec`      |
`str`      |
`date`     | FIXME: Delete and turn into `auto`?

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
`|`     | Or
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
------|--------------------------------
`$`   | Address
`*`   | Pointer
`->`  | Pointer Value
`->`  | Iterator
`=>`  | FIXME: Necessary?
`?`   | FIXME: Really separate into two Parts?
`:`   | FIXME: Really separate into two Parts?


### System


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
-----------|-------------------
`.`        | Class Member
`,`        | Parameter & Entry
`:`        | Data Type Modifier
`;`        | Command