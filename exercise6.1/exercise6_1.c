#include <stdio.h>
#include <string.h>
#include <math.h>
char *num2text(unsigned long long number, char *buf ,size_t bufsize);

int main(void)
{
	char array[400];
	//18 446 744 073 709 551 615 
	//18 kentilyon 446 katrilyon 774 trilyon 73 milyar  709 milyon 551 bin 615
	unsigned long long num = 18446744073709551615;
	num2text(num, array, 400);
	printf("%llu:%s", num, array);



	return 0;
}

char* num2text(unsigned long long number, char* buf, size_t bufsize)
{


	int temp = 0;
	char* ones[] = { "", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz" };
	char* tens[] = { "", "on", "yirmi", "otuz", "kirk", "elli", "altmis", "yetmis", "seksen", "doksan" };
	int one, ten, hundred;
	int index = 0;
	if (number == 0) {
		strcpy(buf, "sifir");
		return;
	}
	int numArray[7] = { 0 };
	unsigned long long tempobj = number, numtemp = number;
	int counter = 0;
	while (numtemp )
	{
		tempobj = numtemp % 1000;
		numArray[counter] = tempobj;
		counter++;
		numtemp /= 1000;

	}


	
	while(counter - 1 >= 0 )
	{
		temp = numArray[counter - 1];
		counter--;
		
		goto SUB;

	SUB:
		one = temp % 10;
		ten = temp / 10 % 10;
		hundred = temp / 100;

		if (hundred > 0 && index < bufsize - 1 ) {
			if (hundred != 1 )
				index += sprintf(buf + index, "%s ", ones[hundred]);
			index += sprintf(buf + index, "yuz");
		}
		if (ten > 0 && index < bufsize - 1) {
			if (hundred > 0)
				buf[index++] = ' ';
			index += sprintf(buf + index, "%s", tens[ten]);
		}
		if (one > 0 && index < bufsize - 1) {
			if (temp > 10)
				buf[index++] = ' ';
			index += sprintf(buf + index, "%s", ones[one]);
		}
		buf[index++] = ' ';

		switch (counter) {
		case 0:
			break;
		case 1:
			index += sprintf(buf + index, " bin");
			break;
		case 2:
			index += sprintf(buf + index, " milyon");
			break;
		case 3:
			index += sprintf(buf + index, " milyar");
			break;
		case 4:
			index += sprintf(buf + index, " trilyon");
			break;
		case 5:
			index += sprintf(buf + index, " katrilyon");
			break;
		case 6:
			index += sprintf(buf + index, "kentrilyon");
			break;

		}
		buf[index++] = ' ';
		
	}
	buf[index] = '\0';
	if ( !(index < bufsize - 1))
		printf("your bufferSize:\"%zd\" is smaller than required space to write all number, please enter bigger size!!\n", bufsize);
	return buf;
}
