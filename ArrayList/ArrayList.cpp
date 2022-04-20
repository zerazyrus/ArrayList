#include "ArrayList.h"
using namespace std;

MangMotChieu::MangMotChieu(int n)
{
    size = (n > 0 ? n : 10);
    ptr = new int[size];
    for (int i = 0; i < size; i++)
        ptr[i] = 0;
}

MangMotChieu::MangMotChieu(const MangMotChieu& arr) : size(arr.size) {
    ptr = new int[size];
    for (int i = 0; i < size; i++)
        ptr[i] = arr.ptr[i];
}

MangMotChieu::~MangMotChieu()
{
    delete[] ptr;
}

MangMotChieu& MangMotChieu::operator=(MangMotChieu& a)
{
    if (this == &a)
        return *this;
    if (a.size != size) {
        delete[] ptr;
        size = a.size;
        ptr = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
    return *this;

}

const int MangMotChieu::operator [] (int index) {
    if (index >= 0 && index < size) {
        return ptr[index];
    }
    
}

istream& operator>>(istream& is, MangMotChieu& arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        is >> arr.ptr[i];
    }
    return is;
}

ostream & operator << (ostream& os, const MangMotChieu& arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        os << arr.ptr[i] << endl;
    }
    return os;
}

void MangMotChieu::Add(int x)
{
    size = size + 1;
    int * a;
    a = new int[size];
    for (int i = 0; i < size; i++)
    {
        a[i] = ptr[i];
    }

    a[size] = x;

    cout << a;
}

int MangMotChieu::IndexOf(int x)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == x)
            return i;
    }
}

void MangMotChieu::Union(MangMotChieu& a)
{
    int* temp;
    temp = new int[size];
    temp = ptr;

    for (int i = 0; i < size+a.size; i++)
    {
        if ()

        ptr[i] = a.ptr[i];
    }



    return *this;
}


MangMotChieu MangMotChieu::Concat(MangMotChieu& a)
{
    MangMotChieu * temp = new MangMotChieu(size+a.size);
    for (int i = 0; i < size; i++)
    {
        temp->ptr[i] = ptr[i];
    }

    for (int i = size; i < size + a.size; i++)
    {
        temp->ptr[i] = a.ptr[i];
    }

    delete[] ptr;
    size = size + a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = temp->ptr[i];
    }

    return *this;
}

bool MangMotChieu::Contains(int x)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == x)
            return 1;
    }
    return 0;
}

int MangMotChieu::getSize() const 
{ 
    return size; 
}



