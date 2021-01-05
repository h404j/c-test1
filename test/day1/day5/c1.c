#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(char *s)
{
	int i = 0, j = 0;
	int flag = 0;
	int len = strlen(s);
	for (i = len - 1; i >= j;)
	{
		char a = s[i];
		char b = s[j];
		if (a <= 'z' & a >= 'a' || a <= 'Z' & a >= 'A')
		{
			if (b <= 'z' & b >= 'a' || b <= 'Z' & b >= 'A')
			{
				if (a + 32 == b || a == b || a - 32 == b)
				{
					i--;
					j++;
					continue;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else
			{
				j++;
			}
		}
		else if (b <= 'z' & b >= 'a' || b <= 'Z' & b >= 'A')
		{
			i--;
		}
		else
		{
			i--;
			j++;
		}
	}
	if (flag)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char *s="OPO";
	bool a=isPalindrome(s);

}