#include <stdio.h>
#include <string.h>
void disp_ratio(int num, int denom);

int main(void)
{
	disp_ratio(1, 3);
	disp_ratio(2, 4);
	disp_ratio(2, 0);
	disp_ratio(3, 1);
	disp_ratio(0, 5);
	disp_ratio(-1, 5);
	disp_ratio(1, -5);
	disp_ratio(-10, -5);
	return 0;
}

void disp_ratio(int num, int denom) {
	
	int i, temp = 0;
	if (denom == 0)
	{
		printf("infinite\n");
		return;
	}

	else if (num < 0 && denom < 0)
	{
		num *= -1;
		denom *= -1;
		goto SUB;
	}

	else if (num < 0 && denom > 0)
	{
		temp = num;
		num *= -1;
		goto SUB;
	}
	
	else if (num > 0 && denom < 0)
	{
		temp = denom;
		denom *= -1;
		goto SUB;
	}

	else if (num == 0 && denom != 0)
	{
		printf("%d\n", 0);
		return;
	}

	SUB:
	i = 3;
	if (num % 2 == 0 && denom % 2 == 0)
	{
		num /= 2;
		denom /= 2;
	}
	while (i <= num && i <= denom)
	{
		if (num % i == 0 && denom % i == 0) 
		{
			num /= i;
			denom /= i;
			i = 3;
			continue;
		}
		i += 2;
	}
	if (temp < 0)
		num *= -1;
	if (denom == 1)
		printf("%d\n", num);
	else 
		printf("%d / %d\n", num, denom);		

}
