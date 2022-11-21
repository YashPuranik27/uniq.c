uniq.c
Write a program that reads from stdin and filters out duplicate lines of input. It
should read lines from stdin, and then print each unique line along with a count of
how many times it appeared. Input is case-sensitive, so “hello” and “Hello” are not
duplicates. There can be an arbitrary number of strings, of arbitrary length.
Note that only adjacent duplicates count, so if the input were the lines “hello”,
“world”, and “hello” again, all three would be treated as unique.

./uniq
hello
hello
hello
world
world
^D # close stdin
3 hello
2 world

./uniq
hello
world
hello
^D # close stdin
1 hello
1 world
1 hello