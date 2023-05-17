# C - Simple Shell

The simple shell is a project by alx- SE program.

The simple shell is meant to demonstrate the working of the linux shell
or terminal.

## The shell basically has two modes of interaction:
* Interactive mode.
	* In the interactive mode the shell project is run in the format of:
	```console
	$ ./hsh
	```
	After the program executable has been run, the program will keep running in an infinite loop until the user exits it by either the use of the "exit" command or using the EOF trigger which is "Ctr + D" or "Ctr + C" which imply end of file whish interm exits the program.
	The output is in the form:

	```console
	Ubuntu: $ ./hsh
	#cisfun: $ ls
	main.c shell.h execv.c
	#cisfun: $ exit
	Ubuntu: $
	```

	This executable is only available after the program code has been executed successfully

* Non interactive mode.
	* In the non interactive mode, after compilation of the prgram files to form an executable file, the program is run in the format of:
	```console
	$ echo "/bin/ls" | ./hsh
	```

	After this has been run, the program runs once and exits to the normal or run tim environment.

In this two modes, there is a similar implementation of the different aspects of the shell.

The most important of all this is that the shell basically runs under an infinite loop
that can only be terminated when the user manually terminates it meaning inorder to create
a linux shell, you must make sure that the shell prompt is under an infinite loop inorder to
keep accepting commands.

## The linux terminators are:
* the exit command
* Ctr + C or Ctr +D

## Tokenisation
* Tokenisation is basically breaking down what ever input has been entered by the terminal user into small chanks of strings inorder to distinguise between commands and other text strings.

* The tokenization procedure works in the presence of the delimeter which acts as a break point to strings and a trigger to tokenize it


## Location

This is basically a finding the location of different commands since the commands don't have to be rewritten, they
are to be reused from the /bin directory which contains the executable linux commands.


## Fork
fork() is a system call that creates a process which is accompanies by a process ID (PID).
this then becomes a child process to the caller.

On creating the child process, both the child and the parent process execute the next intruction.

## Memory allocation and mem leaks

This is the most important part of the project whereby inorder for any program to run smoothly, there should not be any memory leaks that can be checked with programs like Valgrind. 

Mem leaks are basically leaks in memory that occur due to failure of the program to free certain allocated memory or freeing more memory than it has been allocated. This inturn causes inefficiency in the running of the program.


## Common errors made in the ALX simple shell project
* Outputtting a prompt in the non interactive mode. This results in out put of a second prompt provided by the checker which then creates more string output than expected by the checker
* Forgetting to clear memory leaks in the program and this is the key component of efficient code.

Inorder to check for C program mem leaks you can use a program called vagrind

Valgrind code is run in the format of:

```console
$ valgrind --leak-check=yes ./hsh

```
Valgrind can be made efficient to detect lines in the code blocks and funtions with errors with soecific lines when the C code is compiled in the way of:
```console
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh -g
```
