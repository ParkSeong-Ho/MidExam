//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(suppress : 4996)
//#define _CRT_SECURE_NO_WARNINGS
//
//#define MAX_SIZE 100
//#define MAZE_SIZE 10
//
//typedef struct Mouse {
//	int row;
//	int col;
//} Mouse;
//
//typedef struct Stack {
//	Mouse data[MAX_SIZE];
//	int top;
//} Stack;
//
//char maze[MAZE_SIZE][MAZE_SIZE];
//
//int mazeRow = 0; int mazeCol = 0;
//
//void readMaze(char string[]) {
//	FILE* fp;
//	fp = fopen(string, "r");
//
//	while (!feof(fp)) {
//		char c = fgetc(fp);
//		if (c == '\n') {
//			mazeRow++; mazeCol = 0;
//		}
//		else maze[mazeRow][mazeCol++] = c;
//	}
//	fclose(fp);
//	mazeRow++; mazeCol--;
//}
//
//void init(Stack* p) {
//	p->top = -1;
//}
//
//int isFull(Stack* p) {
//	return (p->top == MAX_SIZE - 1);
//}
//
//int isEmpty(Stack* p) {
//	return (p->top == -1);
//}
//
//void push(Stack* p, Mouse data) {
//	if (isFull(p))
//	{
//		printf("Stack is full.\n");
//		return;
//	}
//	else {
//		p->top++;
//		p->data[p->top].row = data.row;
//		p->data[p->top].col = data.col;
//	}
//}
//
//Mouse pop(Stack* p) {
//	if (isEmpty(p)) {
//		printf("Stack is empty.\n");
//		exit(1);
//	}
//	return p->data[(p->top)--];
//}
//
//void pushTrace(Stack* s, int x, int y) {
//	if (x<0 || y<0 || x>MAZE_SIZE || y>MAZE_SIZE) {
//		return;
//	}
//	else if (maze[x][y] != '1' && maze[x][y] != '.') {
//		Mouse tmp;
//		tmp.row = x;
//		tmp.col = y;
//
//		push(s, tmp);
//	}
//}
//
//void drawMap() {
//	for (int row = 0; row < mazeRow; row++) {
//		for (int col = 0; col < mazeCol; col++) {
//			if (maze[row][col] == '0') {
//				printf("□");
//			}
//			else if (maze[row][col] == '1') {
//				printf("■");
//			}
//			else {
//				printf("%c ", maze[row][col]);
//			}
//		}
//		printf("\n");
//	}
//}
//
//int init_mouse(Mouse* m) {
//	for (int row = 0; row < MAZE_SIZE; row++) {
//		for (int col = 0; col < MAZE_SIZE; col++) {
//			if (maze[row][col] == 'M') {
//				m->row = row;
//				m->col = col;
//				return 0;
//			}
//		}
//	}
//	printf("couldn't find an  entrance: fail\n");
//	exit(1);
//}
//
//void appendMaze() {
//	FILE* fp;
//	fp = fopen("trace.txt", "a");
//	if (fp == NULL) {
//		puts("파일을 찾을 수 없습니다.");
//		exit(1);
//	}
//	for (int row = 0; row < mazeRow; row++) {
//		for (int col = 0; col < mazeCol; col++) {
//			fputc(maze[row][col], fp);
//		}
//		fputc('\n', fp);
//	}
//	fclose(fp);
//}
//
//int main(int argc, char* argv[]) {
//	if (argc != 2) {
//		puts("파일 열기에 실패했습니다.\n");
//		return 1;
//	}
//	Stack s;
//	Mouse m;
//	int col, row, x, y;
//	FILE* fp;
//	fp = fopen("trace.txt", "w");
//	if (fp == NULL) {
//		printf("파일을 만들 수 없습니다.\n");
//		exit(1);
//	}
//
//	readMaze(argv[1]);
//
//	init(&s);
//
//	init_mouse(&m);
//
//	printf("미로 \n");
//	drawMap();
//
//	printf("\n이동 경로\n");
//	printf("시작 (%d, %d) -> ", m.row, m.col);
//	fprintf(fp, "시작 (%d, %d) -> ", m.row, m.col);
//
//	while (maze[m.row][m.col] != 'X') {
//		x = m.row;
//		y = m.col;
//
//		maze[x][y] = '.';
//
//		pushTrace(&s, x + 1, y);
//		pushTrace(&s, x - 1, y);
//		pushTrace(&s, x, y + 1);
//		pushTrace(&s, x, y - 1);
//
//		if (isEmpty(&s)) {
//			printf("\n이동 경로를 찾을 수 없습니다. 실패\n");
//			drawMap();
//			return 0;
//		}
//		else {
//			m = pop(&s);
//			printf("(%d, %d) -> ", m.row, m.col);
//			fprintf(fp, "(%d, %d) -> ", m.row, m.col);
//		}
//	}
//	printf("도착\n");
//	fprintf(fp, "도착\n");
//	fclose(fp);
//
//	drawMap();
//	printf("탐색 성공\n");
//	appendMaze();
//
//	return 0;
//}

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
#include <stdio.h>
#pragma warning(disable:4996)


int main() {
	int num1[100]   ,num2[100] ;
	int number1, number2;
	int gcd = 0;
	int arrcount1=-1,arrcount2=-1;

	scanf_s("%d", &number1);
	scanf_s("%d", &number2);
	while (gcd <99)
	{
		gcd++;
		num1[gcd] = 0;
		num2[gcd] = 0;
		
	}
	gcd = 0;
	for (int  i = 1; i <= number1; i++)
	{
		
			if (number1 % i == 0)
			{
				arrcount1++;
				num1[arrcount1] = i;
				
			}
		
	
	}
	//int c=0;
	//while (num1[c] !=0)
	//{
	//	printf("%d\n", num1[c]);
	//	c++;
	//}
	for (int j = 1; j <= number2; j++)
	{

		if (number2 % j == 0)
		{
			arrcount2++;
			num2[arrcount2] = j;
			
		}


	}
	//c = 0;
	//while (num2[c] != 0)
	//{
	//	printf("%d\n", num2[c]);
	//	c++;
	//}
	
	while (gcd==0)
	{
		printf("%d %d\n", num1[arrcount1], num2[arrcount2]);
		if (num1[arrcount1] > num2[arrcount2])
		{
			
			arrcount1--;
			
		}
		else if (num1[arrcount1] < num2[arrcount2])
		{

			arrcount2--;
			
		}
		else
		{
			gcd = 1;
			break;
		}
	}
	if (gcd == 1)
	{
		printf("최대공약수 %d", num1[arrcount1]);
	}
	




	return 0;
}