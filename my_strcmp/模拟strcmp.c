#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* q, const char* w)
{
	assert(q && w);
	while (*q == *w)
	{
		if (!(*q))
		{
			return 0;
		}
		q++;
		w++;
	}
	if (*q > *w)
	{
		return 1;
	}
	else
		return -1;
}
int main()
{
	char q[] = "123456789";
	char w[] = "123456789";
	int e = 0;
	e = my_strcmp(q, w);
	printf("%d\n", e);
	return 0;
}