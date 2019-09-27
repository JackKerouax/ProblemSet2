# Problem set 2

Start Date and Time| Due Date and Time | Cut-off Date and Time |
---|---|---|
10:50:00 AM on September 20, 2019 | 11:59:59 PM on September 26, 2019 | 12:00:00 AM on October 4, 2019 |

## Reading
- Online: 
	- [C/C++ for Visual Studio Code](https://code.visualstudio.com/docs/languages/cpp)
	- [Getting Started with Visual Studio Code](https://code.visualstudio.com/docs)
	- [Using Clang in Visual Studio Code](https://code.visualstudio.com/docs/cpp/config-clang-mac)
	- [GDB and LLDB Command Examples](https://developer.apple.com/library/archive/documentation/IDEs/Conceptual/gdb_to_lldb_transition_guide/document/lldb-command-examples.html)
	- [Configuring C/C++ debugging](https://code.visualstudio.com/docs/cpp/launch-json-reference)
	- [Hexadecimal](https://en.wikipedia.org/wiki/Hexadecimal)
	- [Endianness](https://en.wikipedia.org/wiki/Endianness)

- The C Programming Language book:
	- Chapter 2.1, 2.2, 2.5, 2.6, 2.8, 2.10, 2.11, 2.12

- The Audio Programming Book:
	- Appendix B
	
## Problem 2.1
- Create a file named `ProblemSet2.1.c`.
- Write a C program that tests and prints out `0` or `1` whether a given character variable `c` is either lowercase or uppercase letter using comparison and/or logical expressions. (*Hint: look into the values of characters in the ASCII table*)
- The program should print two lines that look something like this:

		A letter is lowercase: 0
		A letter is uppercase: 1

- For example, in the first printed line, if a character variable `c` holds a letter `'a'`, then the program should print out `1`, indicating that the letter is a lowercase. The second line should print `0` since the letter `'a'` is not an uppercase letter. 
- Do not use the `if` or `switch` statement for this problem. Just printing the result of the expressions.
- Print the result using `printf()`.

## Problem 2.2
- Create a file named `ProblemSet2.2.c`.
- Include `math.h` in the program.
- Use MIDI to frequency conversion equation found [here](https://newt.phys.unsw.edu.au/jw/notes.html) to convert a given MIDI note to a corresponding frequency. 
- The MIDI-to-Frequency equation is (`^` represents exponent):

		f = 2^((m-69)/12) * 440

- Use the [`pow()`](https://www.tutorialspoint.com/c_standard_library/c_function_pow.htm) function from `math.h` to implement the equation. (*Hint: Chapter 1.2.8 in the Audio Programming book)
- Print the original MIDI note number and the converted frequency value using `printf()`.

## Problem 2.3
- Create a file named `ProblemSet2.3.c`.
- Write a program that swaps a value between two integer variables.
- Print the initial values and values after swapping.

## Problem 2.4
- Create a file named `ProblemSet2.4.c`.
- Write a program that converts BPM (beats-per-minute) to a millisecond interval representation. (*Hint: Get BPS first then take the reciprocal)
- Print the initial BPM value and the converted millisecond interval representation.

## Grading Rubric
Description|Grade
---|---:|
No compilation warning or error| 10%
Clean, understandable, commented, and organized | 20%
Thoroughly documented in README.md | 20%
Correctly implemented | 50%
**Total** | **100%**

## Submission Guideline
- Make sure you have a folder with your name at the root directory of the repository.
- Create a folder name with the right problem set number (i.e. `Problem Set 1`) within the folder that has your name.
- Please follow the example `README.md` file in `Akito van Troyer/Problem Set 1/` for documenting your problem set.
- Commit and push C files and README.md for this problem set into the newly created folder to complete the problem set.

## Submission policy:
- All problem must be submitted to: https://github.com/navreyort/EP-353-FA2019
- Late projects will incur a penalty of 10% for each day it is late.
- Problem sets and projects are due by 11:59:59pm on the date specified
- After 12:00:00am (the next day after the due day), your problem sets/projects is one day late (-10%).
- After the next 12:00:00am cycle (two days after the due day), your problem sets/projects is two days late (-20%).
- Problem sets and projects will not be accepted after 12:00:00am at one week after the deadline

--- 
**Berklee College of Music**  
Electronic Production and Design  
EP-353: Audio Programming in C  
Fall 2019