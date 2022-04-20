#include<math.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<functional> // std:greater
#include<vector>
#pragma once
#define MAX 100

using namespace std;

class MangMotChieu {
private:
	int n;
	int A[100];
	int operator [] (int i) const { return A[i]; }
	int& operator [] (int i) { return A[i]; }
public:
	MangMotChieu();
	~MangMotChieu();
	void set(int m);
	MangMotChieu& operator= (MangMotChieu &a);
	friend istream& operator >>(istream &is, MangMotChieu &a);
	friend ostream& operator <<(ostream &os, MangMotChieu a);
	void Add();
	int IndexOf(int);
	void Union();
	void Concat();
	void Contains();
};