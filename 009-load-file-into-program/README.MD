# How it works?

It will pipe text ( text | program )  into file and execute it inside.

Example text.txt:
```
2
10:20
10:90
```
Command to run:

`type test.txt | 009-load-file-into-program.exe`

Return will be:
```
Val1: 10 Val2: 20
Val1: 10 Val2: 90
```

Have fun :)

# What to do?

run in windows inside Debug folder `type test.txt | 009-load-file-into-program.exe`