#pragma once
class Reservoir
{
private:
	char* Name;
	int width;
	int length;
	int depth;
public:
	Reservoir()=default;
	Reservoir(int wd);
	Reservoir(int wd, int lg);
	Reservoir(int wd, int lg, int dp);
	Reservoir(int wd, int lg, int dp, char* nm);
	~Reservoir();
	Reservoir(const Reservoir& h);

	void SetName(const char* nm);
	void Setwidth(int wd);
	void Setlength(int lg);
	void Setdepth(int dp);

	const char* GetName()const;
	int Getwidth()const;
	int Getlength()const;
	int Getdepth()const;



};

