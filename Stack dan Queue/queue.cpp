#include <stdio.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];
int depan = -1;
int akhir = -1;

void enqueue(int value) 
{
	if (akhir == MAX_SIZE - 1) 
	{
		printf("Queue overflow\n");
		return;
	}
	if (depan == -1) 
	{
		depan = 0;
	}
	akhir++;
	queue[akhir] = value;
}

void dequeue() 
{
	if (depan == -1) 
	{
		printf("Queue underflow\n");
		return;
	}
	depan++;
	if (depan > akhir) 
	{
		depan = akhir = -1;
	}
}

int peek() 
{
	if (depan == -1) 
	{
		printf("Queue kosong\n");
		return -1;
	}
	return queue[depan];
}

bool kosong() 
{
	return depan == -1;
}

void printQueue() 
{
	if (kosong()) 
	{
		printf("Queue kosong\n");
		return;
	}
	printf("\nIsi queue: ");
	for (int i = depan; i <= akhir; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n\n");
}

int main() 
{
	while (1) 
	{
		printf("Operasi pada queue \n1 untuk Enqueue \n2 untuk Dequeue \n0 untuk Keluar \n:");
		int pilih;
		scanf("%d", &pilih);
		if (pilih == 1) 
		{
			int value;
			printf("Masukkan ke queue: ");
			scanf("%d", &value);
			enqueue(value);
			printf("Queue depan: %d\n", peek());
			printf("Queue belakang: %d\n", queue[akhir]);
			printQueue();
		}
		else if (pilih == 2) 
		{
			dequeue();
			printf("Queue depan: %d\n", peek());
			printf("Queue belakang: %d\n", queue[akhir]);
			printQueue();
		}
		else 
		{
			break;
		}
	}
	printf("Queue setelah operasi:\n");
	printQueue();
	return 0;
}