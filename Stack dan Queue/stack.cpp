#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int value) 
{
	if (top >= MAX_SIZE - 1) 
	{
		printf("Stack overflow\n");
		return;
	}
	top++;
	stack[top] = value;
}

void pop() 
{
	if (top < 0) 
	{
		printf("Stack underflow\n");
		return;
	}
	top--;
}

int peek() 
{
	if (top < 0) 
	{
		printf("Stack kosong\n");
		return -1;
	}
	return stack[top];
}

bool kosong() 
{
	return top < 0;
}

void printstack() 
{
	if (kosong()) 
	{
		printf("Stack kosong\n");
		return;
	}
	printf("Isi stack: ");
	for (int i = top; i >= 0; i--) 
	{
		printf("%d ", stack[i]);
	}
	printf("\n\n");
}

int main() 
{
	while (1) 
	{
		printf("Apakah Anda ingin melakukan operasi pada stack? \n1 untuk Push\n2 untuk Pop\n0 untuk Keluar\n: ");
		int pilih;
		scanf("%d", &pilih);
		if (pilih == 1) 
		{
			int value;
			printf("Masukkan nilai yang ingin ditambahkan ke dalam stack: ");
			scanf("%d", &value);
			push(value);
			printf("Top: %d\n", peek());
			printstack();
		}
		else if (pilih == 2) 
		{
			pop();
			printf("Elemen teratas stack: %d\n", peek());
			printstack();
		}
		else 
		{
			break;
		}
	}
	printf("Stack setelah operasi:\n");
	printstack();
	return 0;
}