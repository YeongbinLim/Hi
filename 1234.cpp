#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int sort(int distance[5][5], int sta);

int main()
{
	int s[5][5] = { 5, 4, 3, 2, 1 };
	printf("%d", sort(s, 1));
	return 0;
}
int sort(int distance[5][5], int sta)
{
	int i;
	int temp, *end;
	int q[5];
	int *q1, *q2, *q3, *q4;
	q1 = &distance[sta][0];
	q2 = &q[0];
	end = &distance[5 - 1][5 - 1];
	while (q1 <= end)
	{
		*q2 = *q1;
		q1++; q2++;
	}
	for (i = 1; i <= 5; i++)
		if (q[i] > q[i + 1])
		{
			temp = q[i];
			q[i] = q[i + 1];
			q[i + 1] = temp;
		}
	for (i = 1; i <= 5; i++)
		if (q[i] > q[i + 1])
		{
			temp = q[i];
			q[i] = q[i + 1];
			q[i + 1] = temp;
		}
	for (i = 1; i <= 5; i++)
		if (q[i] > q[i + 1])
		{
			temp = q[i];
			q[i] = q[i + 1];
			q[i + 1] = temp;
		}
	for (i = 1; i <= 5; i++)
		if (q[i] > q[i + 1])
		{
			temp = q[i];
			q[i] = q[i + 1];
			q[i + 1] = temp;
		}
	for (i = 1; i <= 5; i++)
		if (q[i] > q[i + 1])
		{
			temp = q[i];
			q[i] = q[i + 1];
			q[i + 1] = temp;
		}
	for (i = 1; i <= 5; i++)
		if (q[i] > q[i + 1])
		{
			temp = q[i];
			q[i] = q[i + 1];
			q[i + 1] = temp;
		}
	int a, b, c, d, e;
	a = q[1];
	b = q[2];
	c = q[3];
	d = q[4];
	e = q[5];

	return a;
}