/*
Вспомнили типЫ
Рассмотрели указатели
Адресация памяти 32 и 64
СОглашения об именовании перемен
Попробовали дебаггер


*/
void init_array(int* inpArr, int inSize) {
	int* ps = inpArr;
	int* pe = inpArr + inSize;
	while (ps < pe)
		*ps++ = 0;
}

int f1( int* ioPx) //i o io
{
	int res = 0;
	if (ioPx)
		*ioPx = 100;

	return(res);
	
}


int main() {
	const int kSize = 20;
	int A[kSize];
	init_array(A, kSize);
	return 0;
}
