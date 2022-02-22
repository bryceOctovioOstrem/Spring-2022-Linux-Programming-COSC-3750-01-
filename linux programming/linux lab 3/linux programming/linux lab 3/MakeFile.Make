/*
* wycat.c
* Author: Bryce Ostrem
* Date: Feb 20, 2020
*
* COSC 3750, Homework 4
*
* makefile to generate executable for wycat.c. It also removes the executable and deletes the dump file
* 
*
*/
CC= gcc
CFLAGS= -ggdb -Wall
.PHONY: clean tidy
wycat.c: 
	${CC} ${CFLAGS} wycat wycat.c
Tidy:
	/bin/rm -f
clean: 
	rm wycat.exe
	rm *.DMP