#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 9

/**
 * main - generate valid random password
 * Return: Awlways 0
 *
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	char charset[]  = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i, index;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';
	
	printf("%s\n", password);
	return (0);
}
