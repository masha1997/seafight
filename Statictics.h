#include <ctime>

#pragma once
class Statictics
{
private:
	time_t date_;
	int humanScore_;
	int autoScore_;
public:
	void AddStatictics(FILE *fp, Statictics statictics);
	Statictics GetAll();
	//std::list<Statictics> GetLast();
	Statictics();
	~Statictics();
};

