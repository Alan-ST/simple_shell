# Holberton Shell
![Simple shell](https://i.pinimg.com/564x/cf/5d/04/cf5d04f7cf2daae64f5cd3d622e440bd.jpg)

The goal of this project is create a simple UNIX shell that can:
- Display a prompt and wait for the user to type a command.
- Display a prompt again each time a command has executed.
- Handle command line with arguments.
- Handle the PATH.
- Handle the exit and env built-ins.

## Requirements 🚀

- Files should be compiled with gcc 4.8.4
- No more than 5 functions per file
- Files should end with a new line
- No global variables allowed
- Not have any memory leaks

## How to Install 🔧

    git clone git@github.com:Alan-ST/simple_shell.git

## How to Compile ▶

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## Files 📋

| Filename | Description |
|--|--|
| main.c | entry point source file |
| get_env.c | searches the environment for a given string |
| _strdup.c | creates a duplicate of a string |
| append.c | appends user input to path environment directory |
| built-in.c | chops newline and executes exit and env built-in functionality |
| fork_execute.c | fork a child and execute the command |
| _execve.c | checks if file exists |
| print_dir.c | counts the number of directories |
| ret_array.c | counts the number of tokens |
| _strcmp.c | compares two strings |
| holberton.h | contains function prototypes |
| man_1_simple_shell | manual for the hsh shell |

## Built-ins 

|Command|Description|
|--|--|
| env | prints the environment |
| exit | prints the environment |
| ctrl-d | exits with status 0 |

## Usage example ⌨️
```
root@ec2f6e1bbfe5:~/simple_shell# gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *                                                                                      .c -o hsh
root@ec2f6e1bbfe5:~/simple_shell# ./hsh
($) ls
AUTHORS    _realloc.c         error.c            hsh                 prompt.c
README.md  _strtok.c          free_double_ptr.c  int_to_string.c     set_env.c
__exit.c   _wich.c            get_env.c          linked_list.c       source.c
_cd.c      c_strok.c          get_line.c         main.c              test
_execve.c  env_linked_list.c  holberton.h        man_1_simple_shell
($) ls -la
total 124
drwxr-xr-x 4 root root  4096 Aug 26 07:53 .
drwx------ 1 root root  4096 Aug 24 03:03 ..
drwxr-xr-x 8 root root   220 Aug 24 03:08 .git
-rw-r--r-- 1 root root   175 Aug 18 23:50 AUTHORS
-rw-r--r-- 1 root root     5 Aug 18 23:50 README.md
-rw-r--r-- 1 root root  1143 Aug 24 01:27 __exit.c
-rw-r--r-- 1 root root  3731 Aug 24 03:08 _cd.c
-rw-r--r-- 1 root root  1283 Aug 24 03:02 _execve.c
-rw-r--r-- 1 root root   756 Aug 24 01:27 _realloc.c
-rw-r--r-- 1 root root  2323 Aug 24 01:27 _strtok.c
-rw-r--r-- 1 root root  1052 Aug 24 01:27 _wich.c
-rw-r--r-- 1 root root  1453 Aug 24 01:27 c_strok.c
-rw-r--r-- 1 root root   477 Aug 24 01:27 env_linked_list.c
-rw-r--r-- 1 root root  1982 Aug 24 01:27 error.c
-rw-r--r-- 1 root root   142 Aug 24 01:27 free_double_ptr.c
-rw-r--r-- 1 root root   655 Aug 24 01:27 get_env.c
-rw-r--r-- 1 root root   847 Aug 24 01:27 get_line.c
-rw-r--r-- 1 root root  2004 Aug 24 03:00 holberton.h
-rwxr-xr-x 1 root root 27736 Aug 26 07:53 hsh
-rw-r--r-- 1 root root   884 Aug 24 01:27 int_to_string.c
-rw-r--r-- 1 root root  1973 Aug 24 01:27 linked_list.c
-rw-r--r-- 1 root root   976 Aug 24 01:27 main.c
-rw-r--r-- 1 root root     5 Aug 18 23:50 man_1_simple_shell
-rw-r--r-- 1 root root   945 Aug 24 03:03 prompt.c
-rw-r--r-- 1 root root  2025 Aug 24 01:27 set_env.c
-rw-r--r-- 1 root root  1088 Aug 24 01:27 source.c
drwxr-xr-x 2 root root    35 Aug 24 02:44 test
($) exit
root@ec2f6e1bbfe5:~/simple_shell#

```

## About ✒️
This project was created by Team - [Dickson Carrillo](https://github.com/dcarrill-code),  [Yessica Bertel](https://www.instagram.com/yessbertel/)  and  [Alan Gonzales](https://github.com/Alan-ST).
