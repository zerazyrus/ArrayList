#include <iostream>
#include <conio.h>
#include <math.h>
#define MAX 100
#include <iostream>
#include "ArrayList.h"


int main()
{
	int n = 0;
	MangMotChieu A;
	cout << "Nhap so luong phan tu trong mang: ";
	cin >> n;
	A.set(n);
	A.Nhap();
	A.Xuat();
	A.Demsolanxuathien();
	A.Kiemtratangdan();
	A.Phanlenhonhat();
	A.Sntlonnhat();
	return 0;
}