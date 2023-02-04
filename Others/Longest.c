#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void Calculation();
void Sum();
void Subtract();
void Multiply();
void Divide();
void Factorial();
void NTable();
void TableTo();
void NumSer();
void NatNum();
void WhNum();
void EvNum();
void OdNum();
void PrNum();
void FabSer();
void NumCheck();
void EvCheck();
void OdCheck();
void PrCheck();
void PrintPattern();
void TriPatt();
void RectPatt();
void PyrPatt();
void RomPatt();
void nNum();
void NSum();
void NMul();
void Sqr();
void Sqrr();
void Cbr();
void Cbrt();

int Mmain()
{
	char input;
	printf("Remember this : \nA for Again \nB for Back \nE for Exit \nM for Main Menu \n");
top:
	printf("\n**********Main Menu**********\n");
	printf("Select one option : \n1=> Calculation \n2=> n numbers option \n3=> Table n to m \n4=> Number Series \n5=> Number Check \nP=> Print Pattern \n    I choose : ");
	scanf("%c", &input);
	if (input == 'p')
	{
		input = 'P';
	}
	else if (input == 'm' || input == 'M' || input == 'b')
	{
		input = 'B';
	}
	else if (input == 'e')
	{
		input = 'E';
	}
	switch (input)
	{
	case 'B':
	{
		goto top;
		break;
	}
	case '1':
	{
		Calculation();
		break;
	}
	case '2':
	{
		nNum();
		break;
	}
	case '3':
	{
		TableTo();
		break;
	}
	case '4':
	{
		NumSer();
		break;
	}
	case '5':
	{
		Factorial();
		break;
	}
	case 'P':
	{
		PrintPattern();
		break;
	}
	case 'E':
	{
		goto end;
	}
	default:
	{
		printf("Wrong Entered,please choose correct option\n");
		goto top;
	}
	}
// getch();
end:
	return 0;
}
int main()
{
	Mmain();
	return 0;
}
void Calculation()
{
	char input;
	printf("\n**********Calculation Menu**********\n");
	printf("Choose an option : \n1=> Sum \n2=> Subtract \n3=> Multiply \n4=> Divide \n");
top:
	printf("    I Choose : ");
	scanf("%c", &input);
	if (input == 'm' || input == 'b' || input == 'B')
	{
		input = 'M';
	}
	else if (input == 'e')
	{
		input = 'E';
	}

	switch (input)
	{
	case '1':
	{
		Sum();
		break;
	}
	case '2':
	{
		Subtract();
		break;
	}
	case '3':
	{
		Multiply();
		break;
	}
	case '4':
	{
		Divide();
		break;
	}
	case 'M':
	{
		Mmain();
		break;
	}
	case 'E':
	{
		exit(0);
	}
	default:
	{
		printf("Wrong Entered,please choose correct option\n");
		goto top;
	}
	}
}

void Sum()
{
	char input;
	float num1, num2;
	float sum;
	printf("\n**********Sum Of Two Number**********\n");
	printf("Enter two number : ");
	scanf("%f %f", &num1, &num2);
	sum = num1 + num2;
	printf(" %.1f + %.1f = %.1f\n", num1, num2, sum);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Sum();
	}
	else if (input == 'M' || input == 'm' || input == 'b' || input == 'B')
	{
		Mmain();
	}
}
void Subtract()
{
	char input;
	float num1, num2;
	float sub;
	printf("\n**********Subtract Of Two Number**********\n");
	printf("Enter two number : ");
	scanf("%f %f", &num1, &num2);
	sub = num1 - num2;
	printf("%.2f - %.2f = %.2f\n", num1, num2, sub);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Subtract();
	}
	else if (input == 'M' || input == 'm' || input == 'B' || input == 'b')
	{
		Mmain();
	}
}
void Multiply()
{
	char input;
	float num1, num2;
	float mul;
	printf("\n**********Multiply Of Two Number**********\n");
	printf("Enter two number : ");
	scanf("%f %f", &num1, &num2);
	mul = num1 * num2;
	printf(" %.2f x %.2f = %.2f\n", num1, num2, mul);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Multiply();
	}
	else if (input == 'M' || input == 'm' || input == 'b' || input == 'B')
	{
		Mmain();
	}
}
void Divide()
{
	char input;
	float num1, num2;
	float div;
	printf("\n**********Divide Of Two Number**********\n");
	printf("Enter two number : ");
	scanf("%f %f", &num1, &num2);
	div = num1 / num2;
	printf(" %.1f / %.1f = %.2f\n", num1, num2, div);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Divide();
	}
	else if (input == 'M' || input == 'm' || input == 'b' || input == 'B')
	{
		Mmain();
	}
}
void Factorial()
{
	char input;
	int fact = 1, a, b;
	printf("\n**********Factorial**********\n");
	printf("Enter the number : ");
	scanf("%d", &a);
	for (b = a; b >= 1; b--)
	{
		if (b == 1 || b == 0)
		{
			b = 1;
		}
		fact = fact * b;
	}
	printf("Factorial of %d is = %d\n", a, fact);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Factorial();
	}
	else if (input == 'M' || input == 'm' || input == 'b' || input == 'B')
	{
		Mmain();
	}
}
void TableTo()
{
	char input;
	int table, a, b, i;
	printf("\n**********Table**********\n");
	printf("Enter two number : ");
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
		printf("***********************\n");
		printf("The Table of %d is : \n", i);
		for (int j = 1; j <= 10; j++)
		{
			table = i * j;
			printf("%dx%d=%d\n", i, j, table);
		}
	}

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		TableTo();
	}
	else if (input == 'M' || input == 'm' || input == 'b' || input == 'B')
	{
		Mmain();
	}
}
void NumSer()
{
	char input;
	printf("\n************Number Series Menu*************\n");
	printf("1=> Natural Number \n2=> Whole number \n3=> Even Number \n4=> Odd Number \n5=> Prime Number \n6=> Fabonacci Series \n");
up:
	printf("   I choose : ");
	scanf("%c", &input);
	if (input == 'm' || input == 'M' || input == 'b')
	{
		input = 'B';
	}
	else if (input == 'e')
	{
		input = 'E';
	}
	switch (input)
	{
	case 'B':
	{
		Mmain();
		break;
	}
	case '1':
	{
		NatNum();
		break;
	}
	case '2':
	{
		WhNum();
		break;
	}
	case '3':
	{
		EvNum();
		break;
	}
	case '4':
	{
		OdNum();
		break;
	}
	case '5':
	{
		PrNum();
		break;
	}
	case '6':
	{
		FabSer();
		break;
	}
	case 'E':
	{
		exit(0);
	}
	default:
	{
		printf("Wrong Entered,please choose correct option\n");
		goto up;
	}
	}
}
void NatNum()
{
	int n, a;
	char input;
	printf("\n**********Natural Numbers**********\n");
	printf("Enter series range : ");
	scanf("%d", &n);
	printf("\nNatural Number Series :\n");
	for (a = 1; a <= n; a++)
	{
		printf("%d\t", a);
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		NatNum();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'B' || input == 'b')
	{
		NumSer();
	}
}
void WhNum()
{
	int n, a;
	char input;
	printf("\n**********Whole Number**********\n");
	printf("Enter series range : ");
	scanf("%d", &n);
	printf("\nWhole Number Series :\n");
	for (a = 0; a <= n; a++)
	{
		printf("%d\t", a);
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		WhNum();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		NumSer();
	}
}
void EvNum()
{
	int n, a;
	char input;
	printf("\n**********Even number**********\n");
	printf("Enter series range : ");
	scanf("%d", &n);
	printf("\nEven Number Series: \n");
	for (a = 1; a <= n; a++)
	{
		if (a % 2 == 0)
		{
			printf("%d\t", a);
		}
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		EvNum();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		NumSer();
	}
}
void OdNum()
{
	int n, a;
	char input;
	printf("\n**********Odd Number**********\n");
	printf("Enter series range : ");
	scanf("%d", &n);
	printf("\nOdd Number Series: \n");
	for (a = 1; a <= n; a++)
	{
		if (a % 2 != 0)
		{
			printf("%d\t", a);
		}
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		OdNum();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		NumSer();
	}
}
void PrNum()
{
	int n, a, b;
	char input;
	printf("\n**********Prime Number**********\n");
	printf("Enter series range : ");
	scanf("%d", &n);
	printf("\nPrime Number Series: \n");
	for (a = 2; a <= n; a++)
	{
		for (b = 2; b <= a; b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (a == b)
		{
			printf("%d\t", a);
		}
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		PrNum();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		NumSer();
	}
}
void FabSer()
{
	int n, a;
	char input;
	printf("\n**********Fibonacci Number**********\n");
	printf("Enter series range : ");
	scanf("%d", &n);
	printf("\nFibonacci Series: \n");
	int fab[n];
	for (a = 1; a <= n; a++)
	{
		if (a == 1)
		{
			fab[1] = 0;
		}
		else if (a == 2 || a == 3)
		{
			fab[a] = 1;
		}
		else
		{
			fab[a] = fab[a - 1] + fab[a - 2];
		}
		printf("%d\t", fab[a]);
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		FabSer();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		NumSer();
	}
}
void NumCheck()
{
	char input;
	printf("\n**********Check Number Menu**********\n");
	printf("Choose one : \n1=> Even Number \n2=> Odd Number \n3=> Prime Number \n ");
up:
	printf("    I choose : ");
	scanf("%c", &input);
	if (input == 'm' || input == 'M' || input == 'b')
	{
		input = 'B';
	}
	else if (input == 'e')
	{
		input = 'E';
	}
	switch (input)
	{
	case 'B':
	{
		Mmain();
		break;
	}
	case '1':
	{
		EvCheck();
		break;
	}
	case '2':
	{
		OdCheck();
		break;
	}
	case '3':
	{
		PrCheck();
		break;
	}
	case 'E':
	{
		exit(0);
	}
	default:
	{
		printf("Wrong Entered,please choose correct option\n");
		goto up;
	}
	}
}
void EvCheck()
{
	char input;
	printf("\n**********Even Number Check**********\n");
	printf("Enter number :");
	scanf("%d", &input);
	if (input % 2 == 0)
	{
		printf("%d is a even number\n", input);
	}
	else
	{
		printf("%d is not a even number\n", input);
	}

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		EvCheck();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'B' || input == 'b')
	{
		NumCheck();
	}
}
void OdCheck()
{
	char input;
	printf("\n**********Odd Number Check**********\n");
	printf("Enter number :");
	scanf("%d", &input);
	if (input % 2 == 0)
	{
		printf("%d is not a odd number\n", input);
	}
	else
	{
		printf("%d is a odd number\n", input);
	}

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		OdCheck();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'B' || input == 'b')
	{
		NumCheck();
	}
}
void PrCheck()
{
	int b;
	char input;
	printf("\n**********Prime Number Check**********\n");
	printf("Enter number :");
	scanf("%d", &input);
	for (b = 2; b <= input; b++)
	{
		if (input % b == 0)
		{
			break;
		}
	}
	if (input == b)
	{
		printf("%d is a prime number\n", input);
	}
	else
	{
		printf("%d is not a prime number\n", input);
	}

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		PrCheck();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		NumCheck();
	}
}
void PrintPattern()
{
	char input;
	printf("\n************Pattern Menu*************\n");
	printf("\nChoose one : \n1=> Triangle Pattern \n2=> Rectangle Pattern \n3=> Pyramid Pattern \n4=> Rombus Pattern \n");
up:
	printf("    I choose : ");
	scanf("%c", &input);
	if (input == 'm' || input == 'M' || input == 'b')
	{
		input = 'B';
	}
	else if (input == 'e')
	{
		input = 'E';
	}
	switch (input)
	{
	case 'B':
	{
		Mmain();
		break;
	}
	case '1':
	{
		TriPatt();
		break;
	}
	case '2':
	{
		RectPatt();
		break;
	}
	case '3':
	{
		PyrPatt();
		break;
	}
	case '4':
	{
		RomPatt();
		break;
	}
	case 'E':
	{
		exit(0);
	}
	default:
	{
		printf("Wrong Entered,please choose correct option\n");
		goto up;
	}
	}
}
void PyrPatt()
{
	int i, n, j;
	char input;
	printf("\n**********Pyramid Pattern**********\n");
	printf("Enter the number of line : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2 * n - 1; j++)
		{
			if (j >= n + 1 - i && j <= n - 1 + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		PyrPatt();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		PrintPattern();
	}
}
void RectPatt()
{
	int n, i, j;
	char input;
	printf("\n**********Rectangle Pattern**********\n");
	printf("Enter the number of line : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		RectPatt();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		PrintPattern();
	}
}
void TriPatt()
{
	int n, i, j;
	char input;
	printf("\n**********Triangle Pattern**********\n");
	printf("Enter the number of line : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2 * n - 1; j++)
		{
			if (j == n + 1 - i || j == n - 1 + i)
			{
				printf("*");
			}
			else if (i == n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		TriPatt();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		PrintPattern();
	}
}
void RomPatt()
{
	int n, i, j;
	char input;
	printf("\n**********Rombus Pattern**********\n");
	printf("Enter the number of line : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 2 * n - 1; j++)
		{
			if (j >= n + 1 - i && j <= n - 1 + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 2 * n - 1; j >= 1; j--)
		{
			if (j >= n + 1 - i && j <= n - 1 + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		RomPatt();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		PrintPattern();
	}
}
void nNum()
{
	char input;
	printf("\n************N Number Menu*************\n");
	printf("\nChoose one : \n1=> Sum of N Natural Number \n2=> Table of N \n3=> Square of n \n4=> Square root of n \n5=> Cube of n \n6=> Cube root of n \n7=> Factorial \n");
up:
	printf("    I Choose : ");
	scanf("%c", &input);
	if (input == 'm' || input == 'M' || input == 'b')
	{
		input = 'B';
	}
	else if (input == 'e')
	{
		input = 'E';
	}
	switch (input)
	{
	case 'B':
	{
		Mmain();
		break;
	}
	case '1':
	{
		NSum();
		break;
	}
	case '2':
	{
		NTable();
		break;
	}
	case '3':
	{
		Sqr();
		break;
	}
	case '4':
	{
		Sqrr();
		break;
	}
	case '5':
	{
		Cbr();
		break;
	}
	case '6':
	{
		Cbrt();
		break;
	}
	case '7':
	{
		Factorial();
		break;
	}
	case 'E':
	{
		exit(0);
	}
	default:
	{
		printf("Wrong Entered,please choose correct option\n");
		goto up;
	}
	}
}
void NSum()
{
	int n;
	char input;
	printf("\n**********Sum Of N Number**********\n");
	printf("Enter the number :");
	scanf("%d", &n);
	int sum = n * (n + 1) / 2;
	printf("Sum of 1 to %d is : %d \n", n, sum);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		NSum();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		nNum();
	}
}
void NTable()
{
	char input;
	int table, a, b;
	printf("\n**********Table Of N**********\n");
	printf("\nEnter the number : ");
	scanf("%d", &a);
	printf("\n**********************\n");
	printf("The table of %d is : \n", a);
	for (b = 1; b <= 10; b++)
	{
		table = b * a;
		printf(" %dx%d=%d\n", a, b, table);
	}
	printf("\n");

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		NTable();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		nNum();
	}
}
void Sqr()
{
	int n;
	char input;
	printf("\n**********Square of n**********\n");
	printf("\nEnter the number : ");
	scanf("%d", &n);
	printf("Square of %d is : %d \n", n, n * n);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Sqr();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		nNum();
	}
}
void Sqrr()
{
	int n;
	char input;
	printf("\n**********Square Root Of N**********\n");
	printf("\nEnter the number : ");
	scanf("%d", &n);
	printf("Square root of %d is : %.2f \n", n, sqrt(n));

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Sqrr();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		nNum();
	}
}
void Cbr()
{
	int n;
	char input;
	printf("\n**********Cube of n**********\n");
	printf("\nEnter the number : ");
	scanf("%d", &n);
	printf("Cube of %d is : %d \n", n, n * n * n);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Cbr();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		nNum();
	}
}

void Cbrt()
{
	int n;
	char input;
	float num1;
	printf("\n**********Cube Root Of N**********\n");
	printf("\nEnter the number : ");
	scanf("%d", &n);
	num1 = cbrt(n);
	printf("Cube root of %d is : %.2f \n", n, num1);

	scanf("%c", &input);
	if (input == 'a' || input == 'A')
	{
		Cbrt();
	}
	else if (input == 'M' || input == 'm')
	{
		Mmain();
	}
	else if (input == 'b' || input == 'B')
	{
		nNum();
	}
}