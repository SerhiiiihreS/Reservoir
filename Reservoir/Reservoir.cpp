#include "Reservoir.h"
#include<iostream>
using namespace std;


Reservoir::Reservoir(int wd)
{
	if (wd > 0) {
		width = wd;
	}
}

Reservoir::Reservoir(int wd, int lg):Reservoir(wd)
{
	if (lg > 0) { 
		length = lg; 
	}
}

Reservoir::Reservoir(int wd, int lg, int dp):Reservoir(wd,lg)
{
	if (dp > 0) { 
		depth = dp; 
	}
}

Reservoir::Reservoir(int wd, int lg, int dp, char* nm):Reservoir(wd,lg,dp)
{
	this->Name = new char[strlen(nm) + 1]; 
	strcpy_s(this->Name, strlen(nm) + 1, nm); 
}

Reservoir::~Reservoir()
{
	width=0;
	length=0;
	depth=0;
	delete[]Name;
}

Reservoir::Reservoir(const Reservoir& h)
{
	this->Name = new char[strlen(h.Name) + 1]; 
	strcpy_s(this->Name, strlen(h.Name) + 1, h.Name);
	width = h.width; 
	length =h.length;
	depth = h.depth; 
}

void Reservoir::SetName(const char* nm)
{
	this->Name = new char[strlen(nm) + 1]; 
	strcpy_s(this->Name, strlen(nm) + 1, nm);
} 

void Reservoir::Setwidth(int wd)
{
	if (wd > 0) {
		width = wd;
	}
}

void Reservoir::Setlength(int lg)
{
	if (lg > 0) {
		length = lg;
	}
}

void Reservoir::Setdepth(int dp)
{
	if (dp > 0) {
		depth = dp;
	}
}

const char* Reservoir::GetName() const
{
	return Name;
}

int Reservoir::Getwidth() const
{
	return width;
}

int Reservoir::Getlength() const
{
	return length;
}

int Reservoir::Getdepth() const
{
	return depth;
}
