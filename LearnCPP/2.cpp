// Example program
/*
#include <iostream>
#include <string>

int main()
{
	const int N = 100;
	int A[N];
	for (int i = 0; i < N; ++i)
	{
		A[i] = 0;
	}
	int A[N];

	// Обход массива, указателями
	int* p = A;
	int* pe = A + N;
	while (p < pe)
		*p++ = 0;

	memset(A, 0, N * sizeof(int));

	int z = 150;								
	int* A = new int[z];
}
*/