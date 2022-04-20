#include <iostream>
#include <conio.h>
#include <math.h>
#define MAX 100
#include <iostream>
#include "ArrayList.h"


int main()
{
	MangMotChieu A(5);
	cout << "Nhap gia tri tung phan tu:" << endl;
	cin >> A;
	MangMotChieu B(3);
	cout << "Nhap gia tri tung phan tu:" << endl;
	cin >> B;
	A = B;
	cout << A;

	cout << A;
	A.Add(100);
	cout<<"Vi tri cua phan tu can tim la: "<< A.IndexOf(4);

	A.Concat(B);
	cout << endl;
	cout << A;
	
}