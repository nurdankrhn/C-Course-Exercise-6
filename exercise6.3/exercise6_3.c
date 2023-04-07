#include <stdio.h>

void disp_complex(int real, int imag);

int main(void)
{
	disp_complex(1, 3);
	disp_complex(5, 1);
	disp_complex(-1, -3);
	disp_complex(3, 0);
	disp_complex(0, 3);
	disp_complex(0, 1);
	disp_complex(0, 0);
	return 0;
}

void disp_complex(int real, int imag)
{
	if (real != 0 && imag != 0)
	{
		if (imag == 1)
			printf("%d + i\n", real);
		else if (imag == -1)
			printf("%d -i\n", real);
		else if (imag > 0)
			printf("%d + %di\n", real, imag);
		else if (imag < 0)
			printf("%d - %di\n", real, -imag);
	}
	else if (real == 0 && imag != 0)
	{
		if (imag == 1)
			printf("i\n");
		else if (imag == -1)
			printf("-i\n");
		else
			printf("%di\n", imag);
	}
	else
		printf("%d\n", real);

}
