
libstringEx.a: stringEx.c stringEx.h
	gcc -o stringEx.o -c stringEx.c
	ar rcs libstringEx.a stringEx.o
