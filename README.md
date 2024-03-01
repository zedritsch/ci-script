# CI-Script
Minimalistic hobby programming language

## Components
Comments    | `2`
------------|----
`#`         | Line comment
`###` `###` | Block comment

### Keywords
Directive        | `2`
-----------------|----
`import`         | Includes the given module's definitions into another module
`export`         | Grands other modules access to the storage type after it

Storage Modifier | `2`
-----------------|----
`mut`            | Makes variables able to change their state
`async`          | Enables creation of a new thread/coroutine on function call

Storage Type     | `5`
-----------------|----
`enum`           | Namespace for multiple values known at compile time
`struct`         | Namespace for multiple variables
`const`          | Value which is known at compile time
`var`            | Value that could be known at runtime
`func`           | Callable code block

Conditional      | `5`
-----------------|----
`if`             | Code block which executes when the given expression doesn't evaluate to `false` or `null`
`while`          | Code block which executes as long as the given expression doesn't evaluate to `false` or `null`
`not`            | Modifies an expression to evaluate `true` instead of `false` or `null`
`for`            | Code block which executes through an iteration of a collection
`in`             | Makes the value of the current iteration available inside the for loop

Flow Control     | `4`
-----------------|----
`skip`           | Skips one or a given number of iterations
`break`          | Terminates one or a at compile time known number of loops
`await`          | Joins two separate threads/coroutines together
`return`         | Returns a value if given and terminates the function

Constructs       | `6`
-----------------|----
`true`           | Evaluates but is not equal to `1`
`false`          | Evaluates but is not equal to `0`
`this`           | Accesses a global variable/constant with the same name as a local variable/constant
`null`           | Represents the absence of a value. Evaluates but is not equal to `0` or `false`
`void`           | Makes a function not return a value
`auto`           | Represents a type known at compile time

### Operators
Logical    | `8`
-----------|----
`!`        | NOT (Complement)
`&`        | AND
`\|`       | OR
`~`        | XOR
`<<`       | Left Shift
`>>`       | Right Shift
`<~`       | Left Rotate
`~>`       | Right Rotate

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
`&&`       | AND (May not evaluate the expression on the right)
`\|\|`     | OR (May not evaluate the expression on the right)

Other      | `8`
-----------|----
`=`        | Assignment
`?`        | Optional Type (Nullable)
`$`        | Reference (Variable can be mutated by the given function)
`@`        | Copy (The variable's value is passed to the given function)
`..`       | Exclusive range (`0..2` => `[0, 1]`)
`.=`       | Inclusive range (`0.=2` => `[0, 1, 2]`)
`?!`       | Conditional (Ternary)
`=>`       | Function literal (Only available if I add function callbacks)

### Built-in
Primitive Types | `16`
----------------|----
`bool`          | Either `true` or `false`
`u32` `u64` ... | `0` up to max value of the given size
`i32` `i64` ... | `0` up to half max value of the given size and down to the same value `-1`
`f32` `f64` ... | Real numbers both positive and negative
`char`          | A single 8-Bit character
`str`           | An array of characters usually terminated with `\0` at the end

### Punctuation
Enclosure | `8`
----------|----
`(` `)`   | Parameter in function declaration and call / Prioritized expression
`[` `]`   | Array / Array index
`{` `}`   | Code block
`'` `'`   | Character literal
`"` `"`   | String literal

Separator | `4`
----------|----
`.`       | Property/Function
`,`       | Parameter
`:`       | Type
`;`       | Statement

## Grammar
```cis
# This is almost the whole grammar of CI-Script!
###
`<` & `>` insert identifier in this style / value as listed below
`(` & `)` group multiple values into one
`[` & `]` same as `(` & `)` but mark the value optional
`|` separate multiple options
`''` | `""` escape a character
`...` repeat the value before this
###
[import '"'[(std|res|lib):][<path>/][...]<module-name>'"';]
[...]

[[export ]enum <Enumerator> {
	[<MEMBER>[: <type>][ = <EXPRESSION>];]
	[...]
}]
[...]

[[export ]struct <Structure> {
	[[mut ]<property>([: <type>[?]] = <expression>|: <type>[?]);]
	[...]
}]
[...]

[[export ]const (<CONSTANT>[: <type>] = <EXPRESSION>;|{
	[<CONSTANT>[: <type>] = <EXPRESSION>;]
	[...]
})]
[...]

[[export ][mut ]var <variable>[: (auto|<type>)[?]][ = <expression>];]
[...]

[[export ][async ]func <function>'('[[mut ]<parameter>: (auto|<type>)[?]][, ...]')'[: ((auto|<type>)[?]|void)] {
	[<statement>]
	[...]
}]
[...]

### List of values which replace some of the labels above
<type> = `
(<Enumerator>|<Structure>|bool|(u|i)(8|16)|(u|i|f)(32|64|128)|char|str)
`
<statement> = `
((if|while) [not ]<expression> {
	[<statement>]
	[...]
}|for [[mut ]<iterator>[: <type>[?]] in ]<expression> {
	[<statement>]
	[...]
}|((return|skip)[ <expression>]|break[ <EXPRESSION>]|<expression>);)
`
<expression> = `
([await ]<function>'('[<expression>][, ...]')'|[this.]<variable>|null|<EXPRESSION>)
`
<EXPRESSION> = `
([this.]<CONSTANT>|<LITERAL>)
`
<LITERAL> = `
(<ARRAY>|<BOOLEAN>|<NUMBER>|<CHARACTER>|<STRING>|<STRUCTURE>)
`
<ARRAY> = `
'['[<ARRAY>[, ...]|<BOOLEAN>[, ...]|<NUMBER>[, ...]|<CHARACTER>[, ...]|<STRING>[, ...]|<STRUCTURE>[, ...]]']'
`
<BOOLEAN> = `
(false|true)
`
<NUMBER> = `
[-](0[_0][...][.9]|(0xF|0o7|0b1)[_0][...])
`
<CHARACTER> = `
"'"(A|'\'')"'"
`
<STRING> = `
'"'[A|"\""|{ <expression> }][...]'"'
`
<STRUCTURE> = `
<Structure>'('[<expression>][, ...]')'
`
###
```

```cis
# This would be an example
import "std:path/module-name";

export enum Enumerator {
	MEMBER: u32 = 0;
}

export struct Structure {
	mut property: u32? = null;
}

export const CONSTANT: u32 = 0;

export mut var variable: u32? = null;

export async func function(mut parameter: auto?): void {
	if not null {
		for mut iterator: u32? in [null] {
			return;
		}
	}
}

### I hope this gave you a good overview ###
```

## Editor Support
CI-Script has a Visual Studio Code extension for syntax highlighting. Find it [here](https://github.com/zedritsch/ci-script-extension)