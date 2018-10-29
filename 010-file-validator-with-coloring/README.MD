# How it works?

It will compare two files and show dfferences in color terminal output.

Example 1.txt:
```
1234567890
1234567890
5
```
Example 2.txt
```
1234567890
123AAA7890
5
```
Command to run:

`type 1.txt | 010-file-validator-with-coloring.exe 2.txt`

Return will be with red `AAA`:
```
1234567890
123AAA7890
5
```

Have fun :)

# What to do?

run in windows inside Debug folder `type 1.txt | 010-file-validator-with-coloring.exe 2.txt`