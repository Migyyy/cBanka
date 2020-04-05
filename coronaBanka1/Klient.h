#pragma once
#include <string>
using namespace std;

class Klient {
private:
	static int objectsCount;
	int kod;
	string meno;
public:
	static int GetObjectsCount();
	Klient(int k, string m);
	~Klient();
	int GetKod();
	string GetMeno();
};