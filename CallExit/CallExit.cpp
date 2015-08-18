// CallExit.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int main()
{
	printf("Hello world!\n");
	ExitProcess(1);
	printf("Must not get here!!!\n");
    return 0;
}

