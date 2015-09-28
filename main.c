#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char name[64];
	fgets(name,64,stdin);
	strtok(name, "\n");
	printf("hello %s!\n",name);
}
