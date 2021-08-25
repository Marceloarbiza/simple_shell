# Simple shell project :shell:

A simple command-line interpreter developed as an end of trimester project at Holberton School.

<h2>Description: :thought_balloon:</h2>

Simple shell reads simple commands from standard input or from a file and executes them.

<h3>Compilation :fireworks::</h3>

To invoke simple_shell, you must compile all the *.c files in the repository and run the resulting executable:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`<br/>
`./hsh`

Simple shell can be invoked in two modes: interactive and non-interactive.<br/>

**Non-interactive mode**

If invoked with standard input simple shell will read and execute commands in order.

Example:

`root@dea58c22b3fe:~/simple_shell# echo "/bin/ls" | ./hsh`<br/>
`'#README.md#'       a.out        getEnvironCharN.c   main.c                  strD2PathCpy.c   strtokPath.c`<br/>
`6forkExePrueba.c   concPath.c   hsh                 man_1_simple_shell.gz   strconcat.c`<br/>
`README.md          funcs.c      lib.h               strD2Cpy.c              strtok.c`<br/>
`root@dea58c22b3fe:~/simple_shell# echo "pwd" | ./hsh`<br/>
`/root/simple_shell`<br/>
`root@dea58c22b3fe:~/simple_shell#`<br/>


**Interactive mode**

Simple shell can also be invoked with standard input which will be determined isatty(). In this mode simple_shell will display a prompt, $, when ready to read the user's input.

Example:

`root@dea58c22b3fe:~/simple_shell# ./hsh`<br/>
`$ ls`<br/>
`6forkExePrueba.c  concPath.c         hsh     man_1_simple_shell.gz  strconcat.c`<br/>
`README.md         funcs.c            lib.h   strD2Cpy.c             strtok.c`<br/>
`a.out             getEnvironCharN.c  main.c  strD2PathCpy.c         strtokPath.c`<br/>
`$ pwd`<br/>
`/root/simple_shell`<br/>
`$ sooooo`<br/>
`IT DOES NOT WORK!`<br/>

<h2>Features</h2>

|   | Example |
|------------|-----------------|
| Handle simple commands        | `/bin/ls`, `/usr/bin/pwd`    |
| Handle `PATH`        | `ls`, `pwd`    |
| Handle single commands with arguments | `ls -l /root`, `/usrbin -l`    |
| Handle errors        |    |
| Handles `exit` buit-in to exit the shell | `exit` |
| Handles `env` buit-in to print current environment |`env`  |


<h1>Notes :books:</h1>
Simple shell does not handle comments, `Ctrl + D` condition, `Ctrl + C` signal, nor the `help` buit-in command. 
<br>
<br>
<h1>Authors :writing_hand:</h1>

:princess: [Alina de los Santos](https://github.com/alina-delossantos) :princess:, :suspect: [Marcelo Arbiza](https://github.com/Aortiz91) :suspect: and :hurtrealbad: [Agustin Bolioli](https://github.com/bolioliagustin)
