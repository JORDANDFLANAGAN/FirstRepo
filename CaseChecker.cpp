#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
	
	int i;
	char string1[] = "upgsFpDhZqwt6Cr10Ktb";
	char string2[] = "tjDkqfGF7SvNfCKmIIJc";
	char string3[] = "amFL5tCFLjSngrPOn5BY";
	int lowercounter1 = 0;
	int lowercounter2 = 0;
	int lowercounter3 = 0;
	int uppercounter1 = 0;
	int uppercounter2 = 0;
	int uppercounter3 = 0;
	int digitcounter1 = 0;
	int digitcounter2 = 0;
	int digitcounter3 = 0;

	printf("STRING #0 \n");
	printf("Original String: %s \n", string1);
	printf("New String: ");
	//string1 changer
	for (i = 0; i < 21; i++) 
	{
		if (isupper(string1[i])) 
		{
			printf("%c", tolower(string1[i]));
			lowercounter1++;
		}
		else if(islower(string1[i]))
		{
			printf("%c", toupper(string1[i]));
			uppercounter1++;
		}
		else if (isdigit(string1[i])) {
			string1[i] = '*';
			printf("%c", string1[i]);
			digitcounter1++;
		}
		
	}
	printf("\n %d digits to spaces; %d lower to upper; %d upper to lower", digitcounter1, uppercounter1, lowercounter1);

	printf("\nSTRING #1 \n");
	printf("Original String: %s \n", string2);
	printf("New String: ");
	//string2 changer
	for (i = 0; i < 21; i++)
	{
		if (isupper(string2[i]))
		{
			printf("%c", tolower(string2[i]));
			lowercounter2++;
		}
		else if (islower(string2[i]))
		{
			printf("%c", toupper(string2[i]));
			uppercounter2++;
		}
		else if (isdigit(string2[i])) {
			string2[i] = '*';
			printf("%c", string2[i]);
			digitcounter2++;
		}

	}
	printf("\n %d digits to spaces; %d lower to upper; %d upper to lower", digitcounter2, uppercounter2, lowercounter2);

	printf("\nSTRING #2 \n");
	printf("Original String: %s \n", string3);
	printf("New String: ");
	//string1 changer
	for (i = 0; i < 21; i++)
	{
		if (isupper(string3[i]))
		{
			printf("%c", tolower(string3[i]));
			lowercounter3++;
		}
		else if (islower(string3[i]))
		{
			printf("%c", toupper(string3[i]));
			uppercounter3++;
		}
		else if (isdigit(string3[i])) {
			string3[i] = '*';
			printf("%c", string3[i]);
			digitcounter3++;
		}

	}

	printf("\n %d digits to spaces; %d lower to upper; %d upper to lower", digitcounter3, uppercounter3, lowercounter3);
}

//_strlwr_s
