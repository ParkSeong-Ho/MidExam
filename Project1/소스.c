

//#include<stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int gcd = 0;
//	int primenumber[100] = {0};
//	int num1;
//	int i=0;
//	int dir=0,count = 0;
//	scanf("%d",&num1);
//	for (int i = 1; i <= num1; i++)
//	{
//	
//		for (int j = 1; j <= i; j++)
//		{
//			count++;
//			if (i%j==0)
//			{
//				gcd++;
//			}
//			
//		}
//		if (gcd==2)
//		{
//			primenumber[dir] = i;
//			dir++;
//			
//		}
//		gcd = 0;
//	}
//	
//	for (int c = 0; c <= dir; c++)
//	{
//		printf("%d\n", primenumber[c]);
//		
//	}
//	printf("연산횟수 %d", count);
//	
//	
//
//
//
//
//}
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int gcd = 0;
//	int primenumber[100] = { 0 };
//	int num1;
//	int i = 0;
//	int dir = 0, count = 0;
//	scanf("%d", &num1);
//	for (int i = 1; i <= num1; i++)
//	{
//
//		for (int j = 1; j <= i; j++)
//		{
//			count++;
//			if (i % j == 0)
//			{
//				gcd++;
//			}
//
//		}
//		if (gcd == 2)
//		{
//			primenumber[dir] = i;
//			dir++;
//
//		}
//		gcd = 0;
//	}
//
//	for (int c = 0; c < dir; c++)
//	{
//		printf("%d\n", primenumber[c]);
//
//	}
//	printf("연산횟수 %d", count);
//
//
//
//
//
//
//}
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int gcd = 0;
//	int primenumber[100] = { 0 };
//	int num1;
//	int i = 0;
//	int dir = 0, count = 0;
//	scanf("%d", &num1);
//	for (int i = 1; i <= num1; i++)
//	{
//
//		for (int j = 1; j <= i; j++)
//		{
//			count++;
//			if (i % j == 0)
//			{
//				gcd++;
//			}
//
//		}
//		if (gcd == 2)
//		{
//			primenumber[dir] = i;
//			dir++;
//
//		}
//		gcd = 0;
//	}
//
//	for (int c = 0; c < dir; c++)
//	{
//		printf("%d\n", primenumber[c]);
//
//	}
//	printf("연산횟수 %d", count);
//
//
//
//
//
//
//}
//#include<stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	int gcd = 0;
//	int primenumber[100] = { 0 };
//	int num1;
//	int i,j = 2;
//	int dir = 0, count = 0,numbercount=0;
//	scanf("%d", &num1);
//	if (num1>=2)
//	{
//		printf("2\n");
//	}
//	for (int i = 3; i <= num1; i++)
//	{
//		gcd = 0;
//		j = 2;
//		while (gcd==0&&j<i)
//			//while문은 for문과 다른다 이사람아 제발 똑바로 보라고 
//		{
//			count++;
//			if (i % j == 0)
//			{
//				gcd++;
//				break;
//			}
//			j++;
//		}
//		if (gcd == 0)
//		{
//			primenumber[dir] = i;
//			dir++;
//
//		}
//		
//	}
//
//	for (int c = 0; c < dir; c++)
//	{
//		printf("%d\n", primenumber[c]);
//
//	}
//	printf("연산횟수 %d", count);
//
//
//
//
//
//
//}
//#include<stdio.h>
//int main() {
//	int i, j, count, num, numbercount = 0;
//	scanf_s("%d", &num);
//	if (num >= 2) printf("2\n");
//	for (i = 3; i <= num; i++) {
//		count = 0;
//		j = 2;
//		while (count == 0 && j < i)
//		{
//			numbercount++;
//			if (i % j == 0) {
//				count++;
//				break;
//
//			}
//			j++;
//		}
//
//
//		if (count == 0)
//		{
//			printf_s("%d\n", i);
//		}
//
//	}
//	printf("계산 돌린 횟수 :%d", numbercount);
//	return 0;
//
//
//}

//
//}#include<stdio.h>
//#pragma warning(disable:4996)
////알고리즘 3번 소수에서 짝수는 2말고 존재하지 않는다 이것을 기준을 개발
//int main() {
//	int gcd = 0;
//	int primenumber[100] = { 0 };
//	int num1;
//	int i, j = 2;
//	int dir = 0, count = 0, numbercount = 0;
//	scanf("%d", &num1);
//	if (num1 >= 2)
//	{
//		printf("2\n");
//	}
//	for (int i = 3; i <= num1; i+=2)
//	{
//		gcd = 0;
//		j = 2;
//		while (gcd == 0 && j < i)
//			
//		{
//			count++;
//			if (i % j == 0)
//			{
//				gcd++;
//				break;
//			}
//			if (j==2)
//			{
//				j++;
//				count--;
//			}
//			else
//			{
//				j += 2;
//			}
//		}
//		if (gcd == 0)
//		{
//			primenumber[dir] = i;
//			dir++;
//
//		}
//
//	}
//
//	for (int c = 0; c < dir; c++)
//	{
//		printf("%d\n", primenumber[c]);
//
//	}
//	printf("연산횟수 %d", count);
//
//
//
//
//

//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
////알고리즘 4번 우리는 소수를 구할때 굳이 그수까지 나눠보지 않아도 된다 그수의 루트값이 나뉘어진다는것은 그수도 나누어 떨어진다는 뜻이다.
//int main() {
//	int gcd = 0;
//	int primenumber[100] = { 0 };
//	int num1;
//	int i, j = 2;
//	int dir = 0, count = 0, numbercount = 0;
//	scanf("%d", &num1);
//	if (num1 >= 2)
//	{
//		printf("2\n");
//	}
//	for (int i = 3; i <= num1; i += 2)
//	{
//		gcd = 0;
//		j = 2;
//		
//		while (gcd == 0 && j <= sqrt(i))
//			 
//		{
//			count++;
//			if (i % j == 0)
//			{
//				gcd++;
//				break;
//			}
//			if (j == 2)
//			{
//				j++;
//				count--;
//			}
//			else
//			{
//				j += 2;
//			}
//		}
//		if (gcd == 0)
//		{
//			primenumber[dir] = i;
//			dir++;
//
//		}
//
//	}
//
//	for (int c = 0; c < dir; c++)
//	{
//		printf("%d\n", primenumber[c]);
//
//	}
//	printf("연산횟수 %d", count);
//
//
//
//
//
//
//}


//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
//알고리즘 5번 우리는 소수를 구할때 굳이 그수까지 나눠보지 않아도 된다 그수의 루트값이 나뉘어진다는것은 그수도 나누어 떨어진다는 뜻이다.
//거기서 더 추가하여 우리 소수를 구한값을 통하여 나누어서 나누어떨어진다면 소수라는 하나의 조건을 더추가하였다 이 알고리즘은 
//int main() {
//
//	int ar[1000] = { 0,0,0,0,0,0 };
//	int i, count = 0, k, num, numbercount = 0, ccount, j;
//	scanf_s("%d", &num);
//	j = 0;
//	ar[0] = 2;
//	k = 0;
//	for (i = 3; i <= num; i += 2)
//	{
//		j = 0;
//		ccount = 0;
//		while (ar[j] <= sqrt((float)i) && ar[j] != 0)
//		{
//			numbercount++;
//			if (i % ar[j] == 0)
//			{
//				ccount++;
//				break;
//			}
//			if (ar[j] == 2)
//			{
//				numbercount--;
//			}
//			j++;
//		}
//
//
//
//
//
//		if (ccount == 0)
//		{
//			k++;
//			ar[k] = i;
//			k = k + 1;
//			ar[k] = 0;
//			k--;
//
//		}
//
//
//
//	}
//	int c = 0;
//
//	while (ar[c] != 0)
//	{
//		printf("%d\n", ar[c]);
//		c++;
//	}
//	printf("계산 돌린 횟수 : % d", numbercount);
//
//
//
//
//
//
//
//
//
//
//}
//#include <stdio.h>
//#pragma warning(disable:4996)
//
//
//int main() {
//	int num1[100]   ,num2[100] ;
//	int number1, number2;
//	int gcd = 0;
//	int arrcount1=-1,arrcount2=-1;
//
//	scanf_s("%d", &number1);
//	scanf_s("%d", &number2);
//	while (gcd <99)
//	{
//		gcd++;
//		num1[gcd] = 0;
//		num2[gcd] = 0;
//		
//	}
//	gcd = 0;
//	for (int  i = 1; i <= number1; i++)
//	{
//		
//			if (number1 % i == 0)
//			{
//				arrcount1++;
//				num1[arrcount1] = i;
//				
//			}
//		
//	
//	}
//	//int c=0;
//	//while (num1[c] !=0)
//	//{
//	//	printf("%d\n", num1[c]);
//	//	c++;
//	//}
//	for (int j = 1; j <= number2; j++)
//	{
//
//		if (number2 % j == 0)
//		{
//			arrcount2++;
//			num2[arrcount2] =j;
//			
//		}
//
//
//	}
//	//c = 0;
//	//while (num2[c] != 0)
//	//{
//	//	printf("%d\n", num2[c]);
//	//	c++;
//	//}
//	
//	while (gcd==0)
//	{
//		printf("%d %d\n", num1[arrcount1], num2[arrcount2]);
//		if (num1[arrcount1] > num2[arrcount2])
//		{
//			
//			arrcount1--;
//			
//		}
//		else if (num1[arrcount1] < num2[arrcount2])
//		{
//
//			arrcount2--;
//			
//		}
//		else
//		{
//			gcd = 1;
//			break;
//		}
//	}
//	if (gcd == 1)
//	{
//		printf("최대공약수 %d", num1[arrcount1]);
//	}
//	
//
//
//
//
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int N, i, count, k=0, m=0, n=0, flag = 0;
//	int number[100] = {2};
//	
//	scanf_s("%d", &N);
//
//	if (N >= 2)printf("2\n");
//	for (i = 3;  i<= N; i+=2) {
//		count = 0;
//		while (number[k] <= sqrt((float)(i)) && number[k] != 0)
//		{
//			if (i % number[k] == 0) { 
//				count++;
//				break;
//
//			}
//
//			k++;
//			
//		}
//			
//			
//		
//		if (count == 0) {
//			m++;
//			printf("%d\n", i);
//			number[m] = i;
//			m = m+ 1;
//			number[m] =  0 ;
//			m--;
//
//
//
//		}
//		flag = 0;
//	}
//}
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int gcdnumber[100];
	int smallcount=0,smallnumber,gcdnum;
	int number1, number2,reset=0;
	int gcd=1;
	scanf_s("%d", &number1);
	scanf_s("%d", &number2);
	while (reset<=99)
	{
		gcdnumber[reset] = 0;
		reset++;
	}
	reset = 0;
	if (number1>number2)
	{
		smallnumber = number2;
	}
	else
	{
		smallnumber = number1;
	
	}
	for (int i = 2; smallnumber != 1; i++)
	{
		
		while (smallnumber % i == 0)
		{
			
			gcdnumber[smallcount] = i;
			smallnumber=smallnumber / i;
			/*printf("%d %d\n", smallcount, gcdnumber[smallcount]);*/
			
		}
		smallcount++;
	}
	smallcount = 0;
	for (int i = 0; gcdnumber[i] !=0; i++)
	{
		while (number1 %gcdnumber[i]==0 && number2 %gcdnumber[i]==0)
		{
			gcd = gcd * gcdnumber[i];
			number1 = number1 / gcdnumber[i];
			number2 = number2 / gcdnumber[i];

		}
	}
	printf("%d", gcd);



}

//#include <stdio.h>
//
//int main() {
//	//최대공약수 알고리즘 2번
//	int i = 0, num = 0, num1, num2;
//	int ar[100] = { 0 };
//	int count = 0;
//	int arrcount = 0;
//	int GCD = 1;
//	scanf_s("%d", &num1);
//	scanf_s("%d", &num2);
//	if (num1 > num2)
//	{
//		num = num2;
//	}
//	else
//	{
//		num = num1;
//	}
//	for (i = 2; num != 1; i++)
//	{
//		count++;
//		if (num % i != 0) continue;
//		while (num % i == 0)
//		{
//			count++;
//			num /= i;
//			if (ar[arrcount] == i)
//			{
//				count--;
//			}
//			ar[arrcount] = i;
//		}
//
//		arrcount++;
//	}
//	for (int j = 0; ar[j] != 0; j++)
//	{
//		count++;
//		while ((num1 % ar[j] == 0) && (num2 % ar[j] == 0))
//		{
//
//			GCD = GCD * ar[j];
//			num1 = num1 / ar[j];
//			num2 = num2 / ar[j];
//
//		}
//
//	}
//	printf("최소공배수%d\n", GCD);
//	printf("계산횟수%d", count);
//
//
//
//
//
//
//
//	return 0;
//}

