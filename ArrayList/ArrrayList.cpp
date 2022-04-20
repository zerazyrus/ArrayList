#include "ArrayList.h"
using namespace std;

MangMotChieu::MangMotChieu()
{
}

void MangMotChieu::set(int m) {
    n = m;
}

MangMotChieu& MangMotChieu::operator=(MangMotChieu &a)
{
    if (this == &a)
        return *this;
    int N = sizeof(a) / sizeof(a[0]);
    n = N;
    for (int i = 0; i < N; i++)
    {
        A[i] = a[i];
    }
    return *this;
}


void MangMotChieu::Add()
{

}

int MangMotChieu::IndexOf(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] = x)
            return i;
    }
}

void MangMotChieu::Union()
{

}


void MangMotChieu::Concat()
{
}

void MangMotChieu::Contains()
{
}

istream& operator>>(istream& is, MangMotChieu& a)
{
    throw "Nhap gia tri tung phan tu:";
    for (int i = 0; i < n; i++)
    {
        is >> A[i];
    }
    return is;
}
ostream& operator<<(ostream& os, MangMotChieu a)
{
    cout << "Gia tri tung phan tu la:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]=" << A[i] << endl;
    }
}

MangMotChieu::~MangMotChieu()
{
}