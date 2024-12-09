# Introduction

Two complete interpreters fro a full-featured language, Lox. Less theory, more practice.

## 1.1 Why Learn This Stuff

- Little languages are everywhere and it's good to know how to debug and maintain these
- Languages are great exercise
    - Deepens understanding of data structures and algorithms
- Helps overcome fear of difficult things

## 1.2 How the Book Is Organized

Three parts:

1. Introduction
2. Lox interpreter 1
3. Lox interpreter 2

The code: every single line of code needed is included; no "compiler-compilers" to
make sure no hidden abstractions.

Book also includes snippets, asides, and challenges. Challenges may lead you to
alter the interpreter in ways that conflict with future chapters - make changes in a
copy of your code.

This book focuses a little more on *design* than some other programming language books
that focus more strictly on just *implementation*.

## 1.3 The First Interpreter

jlox will be written in Java. It builds on the Java virtual machine's own runtime facilities.

## 1.4 The Second Interpreter

Start all over again but this time in C.

## Challenges

1. There are at least six domain-specific languages used to write and publish this book. What are they?

    1. HTML - author agrees
    2. SCSS - author lists SASS, think this is the same
    3. CSS - author agrees
    4. Markdown - author agrees
    5. Make - author lists as Makefile
    6. IML - author does not agree, he lists Jinja2 instead

2. Get a "Hello, World!" program written and running in Java. Set up whatever
 makefiles or IDE projects you need to get it working. If you have a debugger, get
 comfortable with it and step through your program as it runs.

    I used Google Cloud Platform to create a compute engine VM instance running Debian.

    Then I ran some instructions following this page: [How To Install Java with Apt on Debian 11](https://www.digitalocean.com/community/tutorials/how-to-install-java-with-apt-on-debian-11)

    ```bash
    sudo apt update
    java -version
    ```

    Java was not installed so I ran `sudo apt install default-jre` to install the Java
    Runtime Environment.
    Then I ran `javac -version` to check the install worked.

    After a lot of struggle, I managed to set up a Google Cloud Platform compute engine
    and connect to it with VS Code Remote-Host extension.

3. Do the same for C. To get some practice with pointers, define a doubly linked
list of heap-allocated strings. Write functions to insert, find, and delete items
from it. Test them.
