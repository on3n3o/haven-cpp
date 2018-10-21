# My first makefile file

CC = gcc

all: run.c
	$(CC) -g run.c -o run.exe -DCURL_STATICLIB -I.\curl\include -L.\curl\bin  -lcurl -lstdc++ -Wall

clean:
	@echo Removing .exe
	del run.exe