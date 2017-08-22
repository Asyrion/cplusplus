# cplusplus

## How to Setup Linux (Kubuntu) for compiling and executing C++
To compile and execute C++ code on kubuntu linux we need some tools and software.

1. GNU C and C++ compiler collection 
2. Development tools
3. Development libraries
4. IDE or text editor for coding purposes

### Step1: Install C/C++ compiler tools
If you are using Fedora, Red Hat, CentOS, or Scientific Linux, 
use the following yum command to install GNU c/c++ compiler:

    `# yum groupinstall 'Development Tools'`
    
If you are using Debian or Ubuntu Linux, type the following apt-get command to install GNU c/c++ compiler:
    
    `$ sudo apt-get update`
    
**or**
    
    `$ sudo apt-get install build-essential manpages-dev`
    
    
### Step2: Verify installation
Type the following command to display the version number and location of the compiler on Linux:

    `$ whereis gcc`

    `$ which gcc`

    `$ gcc --version`
    
**Sample outputs:**



![Image of sample outputs](https://www.cyberciti.biz/media/new/faq/2014/04/gcc-verification.jpg)



#### How to Compile and Run C/C++ programm on Linux
Create a file called demo.c using a text editor such as vi, emacs or joe:

  ```c++ 
  #include<stdio.h>
  /* demo.c:  My first C program on a Linux */
  int main(void)
  {
    printf("Hello! This is a test prgoram.\n");
    return 0;
  }
  ```
  
#### How do I compile the program on Linux?

Use any one of the following syntax to compile the program called demo.c:

  `cc program-source-code.c -o executable-file-name`

**OR**

  `gcc program-source-code.c -o executable-file-name`

**OR**

assuming that executable-file-name.c exists
  `make executable-file-name`

In this example, compile demo.c, enter:

  `cc     demo.c   -o demo`

**OR**

## assuming demo.c exists in the current directory ##
  `make demo`

If there is no error in your code or C program then the compiler will successfully create an executable file called demo in the current directory, otherwise you need fix the code. To verify this, type:

  `$ ls -l demo*`
  
#### How do I run or execute the program called demo on Linux?

Simply type the the program name:

  `$ ./demo`

**OR**

  `$ /path/to/demo`



**Samples session:**



![Test](https://www.cyberciti.biz/media/new/faq/2014/04/gnu-linux-c-c++compile-demo.gif)


#### Compiling and running a simple C++ program

Create a program called demo2.C as follows:
  ```c++
  #include "iostream"
  // demo2.C - Sample C++ prgoram 
  int main(void) 
  {
      std::cout << "Hello! This is a C++ program.\n";
      return 0;
  }
  ```

To compile this program, enter:

  `g++ demo2.C -o demo2`
  
or use the following syntax

  `make demo2`

To run this program, type:

  `./demo2`
  
  
#### How do I generate symbolic information for gdb and warning messages?

The syntax is as follows C compiler:
  
  `cc -g -Wall input.c -o executable`

The syntax is as follows C++ compiler:
  
  `g++ -g -Wall input.C -o executable `
  
#### How do I generate optimized code on a Linux machine?

The syntax is as follows C compiler:
  
  `cc -O input.c -o executable`

The syntax is as follows C++ compiler:

  `g++ -O -Wall input.C -o executable `
  
#### How do I compile a C program that uses math functions?

The syntax is as follows when need pass the -lm option with gcc to link with the math libraries:

  `cc myth1.c -o executable -lm`


#### How do I compile a C++ program that uses Xlib graphics functions?

The syntax is as follows when need pass the -lX11 option with gcc to link with the Xlib libraries:

  `g++ fireworks.C -o executable -lX11`


#### How do I compile a program with multiple source files?

The syntax is as follows if the source code is in several files (such as light.c, sky.c, fireworks.c):

  `cc light.c sky.c fireworks.c -o executable`

C++ syntax is as follows if the source code is in several files:

  `g++ ac.C bc.C file3.C -o my-program-name`

These are all basics steps needed to compile software made in C/C++.
