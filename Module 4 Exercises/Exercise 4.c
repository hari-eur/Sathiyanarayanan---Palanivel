#include <stdio.h>
#include <string.h>
void swap(char* alp1, char* alp2)
{
	char temp;
	temp = *alp1;
	*alp1 = *alp2;
	*alp2 = temp;
}

void permute(char* str, int start, int end)
{
	int i;
	if (start == end)
		printf("%s\n", str);
	else {
		for (i = start; i <= end; i++) {
			swap((str + start), (str + i));
			permute(str, start + 1, end);
			swap((str + start), (str + i)); 
		}
	}
}

int main()
{
	char str[1000];
	printf("Enter the string : ");
	scanf("%s",str);
	int n = strlen(str);
	printf("\nThe combinations are : \n");
	permute(str, 0, n - 1);
	return 0;
}
