# C - Simple Shell

The simple shell is a project by alx- SE program.

The simple shell is meant to demonstrate the working of the linux shell
or terminal.

## The shell basically has two modes of interaction:
* Interactive mode.
* Non interactive mode.

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
