#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("c:\\users\\WIN11\desktop\\Raj.txt","w");
	printf("file create...!");
	fclose(fp);
	return 0;
}
