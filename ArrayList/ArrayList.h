#ifndef MangMotChieu_H
#define MangMotChieu_H

#include<math.h>
#include<string>
#include<iostream>

using namespace std;

class MangMotChieu {
	friend istream & operator >>(istream& is, MangMotChieu& a);
	friend ostream & operator <<(ostream& os, const MangMotChieu& a);
private:
	int * ptr;
	int size;
public:
	MangMotChieu(int = 10);
	MangMotChieu(const MangMotChieu &);
	~MangMotChieu();

	int getSize() const;
	const int operator[](int);
	MangMotChieu& operator= (MangMotChieu& a);
	void Add(int);

	int IndexOf(int);
	void Union(MangMotChieu& a);
	MangMotChieu Concat(MangMotChieu& a);
	bool Contains(int);
};

#endif

