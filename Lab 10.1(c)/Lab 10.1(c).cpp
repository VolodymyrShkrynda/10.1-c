﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;
int Count(char* str)
{
	if (strlen(str) < 3)
		return 0;
	int k = 0;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == '+' || str[i] == '-' || str[i] == '=')
			k++;
	return k;
}
int main()
{
	FILE* t;
	char ch;
	char str[101];
	
	if ((t = fopen("1.txt", "r")) == NULL)
	{
		cerr << "Error opening file '" << "1.txt" << "'" << endl;
		exit(1);
	}
	int i= 0;
	do {
		ch = getc(t);
		str[i] = ch;
		i++;
	} while (ch != EOF);
	cout <<"Count +,-,= :"<< Count(str);
	

	fclose(t);
	return 0;

}


