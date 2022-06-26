# Basic procedurally oriented algorithmic language.

### Alphabet of language

The alphabet of a language is the set of valid characters that can be used to write a program.

- latin capital letters
- latin lowercase letters
- Arabic numerals
- Special symbols

### Rules for writing the main objects of the language.

The names of operators, variables, constants, types of values, the name of the program itself are assigned by the programmer and are called identifiers in Pascal. There are rules that all identifiers must follow:

- the identifier must be unique, that is, different objects cannot be named with the same name;
- the identifier has a length limit (depends on the specific implementation of the language on the computer);
- identifier can only consist of latin characters, digits and underscore ("_");
- ID cannot start with a number.

### Data types

In computer science and computer programming, a data type or simply type is an attribute of data which tells the compiler or interpreter how the programmer intends to use the data. Most programming languages support basic data types of integer numbers (of varying sizes), floating-point numbers (which approximate real numbers), characters and Booleans. A data type constrains the values that an expression, such as a variable or a function, might take. This data type defines the operations that can be done on the data, the meaning of the data, and the way values of that type can be stored. A data type provides a set of values from which an expression (i.e. variable, function, etc.) may take its values.

### Constants

If the value does not change, then we are dealing with a constant

### Variable

Variable, a symbolic name associated with a value and whose associated value may be changed.

### Labels

A label in a programming language is a sequence of characters that identifies a location within source code. 

In most languages labels take the form of an identifier, often followed by a punctuation character (e.g., a colon). In many high level programming languages the purpose of a label is to act as the destination of a GOTO statement.

### Expression

In computer science, an expression is a syntactic entity in a programming language that may be evaluated to determine its value. It is a combination of one or more constants, variables, functions, and operators that the programming language interprets (according to its particular rules of precedence and of association) and computes to produce ("to return", in a stateful environment) another value. This process, for mathematical expressions, is called evaluation.

In simple settings, the resulting value is usually one of various primitive types, such as numerical, string, boolean, complex data type or other types.

Expression is often contrasted with statement—a syntactic entity that has no value (an instruction). 


### Arithmetic and logical expressions

For example, 2 + 3 is both an arithmetic and programming expression, which evaluates to 5. A variable is an expression because it denotes a value in memory, so y + 6 is also an expression. An example of a relational expression is 4 ≠ 4, which evaluates to false.

### Description of linear and branching structures of algorithms.

A linear algorithm is an algorithm in which operations are performed sequentially.

A branching algorithm is an algorithm in which the sequence of operations depends on certain conditions.
If there are "action1" and "action2" in the algorithm (that is, branch 1 and branch 2), then this is a branching algorithm with a full alternative. If instead of "action2" there is a transition to the execution of operation "n", which is in the general (main) branch, then this form of notation is called an incomplete alternative.


### Organization of cyclic structure algorithms.

A cyclic algorithm is an algorithm in which the same actions are repeatedly performed, for example, with the aim of repeatedly performing calculations on the same dependencies with different values of the variables included in them.

### Algorithmic description of nested cyclic structures.

Nested (inner) loops. Inside the cyclic structure algorithm, another cycle can be placed - a nested (inner) cycle. The nested loop must be completely within the scope of the outer loop. There can be one nested loop, but there can be several nested loops. The second is nested in the first, the third is nested in the second, and so on.