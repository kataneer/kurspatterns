#include "string.h"
#include <iostream>
#include <map>
FILE *ved = fopen("log.txt", "w");
FILE *cole = fopen("counters.txt", "w");

using namespace std;

class metFields {  
private:
	float time;
	float wind;
	float tempView;
public:
	void setParams(float t, float w, float tw)
	{
		time = t;
		wind = w;
		tempView = tw;
	}
	float getTime()
	{
		return time;
	}
	float getWind()
	{
		return wind;
	}
	float getTempView()
	{
		return tempView;
	}
	float atFieldCount(int atm, float temp)
	{
		return atm - 0.05 * ((tempView + wind)/time);
	}

	float tempFieldCount(int atm, float temp)
	{
		return temp + 0.05 * (temp - tempView)/time;
	}
};

class metCounter {
public:
	char *name = new char[];
	char *type = new char[];
	int number;
public:
	metFields *fieldWay;
	metCounter()
	{
		fieldWay = new metFields();
	}
	int atm;
	int temp;
	void initM(char *nm, char *tp, int num)
	{
		name = nm;
		type = tp;
		number = num;
	}
	char *getName()
	{
		return name;
	}
	char *getType()
	{
		return type;
	}
	void init(int a, int b)
	{
		atm = a;
		temp = b;
	}
	void meteoCount();
};

class weatherCounter : public metCounter {
public:
	float ets;
	void meteoCount()
	{
		ets = atm * temp;
	}
};
class highWaters {
private:
	float time;
public:
	void setTime(float t)
	{
		time = t;
	}
	float getTime()
	{
		return time;
	}
	float highWatersEvents(float square, float width, float density, float drain, float atm, float temp)
	{
		float a = (atm + temp + width) * time / 2 * (square + density + drain);
		return a;
	}
};

class snowCounter : public metCounter {
private:
	float square;
	float width;
	float density;
	float drainSquare;
public:
	highWaters *higher;
	float res;
	snowCounter()
	{
		higher = new highWaters();
	}
	void setParams(float sq, float wi, float de, float dr)
	{
		square = sq;
		width = wi;
		density = de;
		drainSquare = dr;
	}
	void meteoCount()
	{
		res = (square + width + density) * (drainSquare + atm - temp);
	}
};

class highIcers {
private:
	float square;
	float density;
public:
	void setIceParams(float sq, float de)
	{
		square = sq;
		density = de;
	}
	float setJamEvents(float atm, float temp, float width)
	{
		float a = (atm + temp + width) / (square + density);
		return a;
	}
};

class iceCounter : public metCounter {
private:
	float width;
public:
	highIcers *icer;
	float res;
	iceCounter()
	{
		icer = new highIcers();
	}
	void setWidth(float w)
	{
		width = w;
	}
	float getWidth()
	{
		return width;
	}
	void meteoCount()
	{
		res = width * (atm / abs(temp)) / 10;
	}
};




class countersFactory {  
public:
	typedef std::map<int, metCounter*> counters;
	counters avgRiv;
	countersFactory() {};
	void creati(char nameCount[], char type[], int number, int atm, int temp)
	{
		metCounter* count = new metCounter();
		if (strcmp(type, "Снег") == 0)
		{
			count = new snowCounter;
			fprintf(ved, "Создан новый счетчик снега.\n");
			fprintf(cole, "%i %s %s %i %i\n", number, nameCount, type, atm, temp);
		}
		else if (strcmp(type, "Лед") == 0)
		{
			count = new iceCounter;
			fprintf(ved, "Создан новый счетчик льда.\n");
			fprintf(cole, "%i %s %s %i %i\n", number, nameCount, type, atm, temp);
		}
		else if (strcmp(type, "Погода") == 0)
		{
			count = new weatherCounter;
			fprintf(ved, "Создан новый счетчик погоды.\n");
			fprintf(cole, "%i %s %s %i %i\n", number, nameCount, type, atm, temp);
		}
		count->initM(nameCount, type, number);
		count->init(atm, temp);
		avgRiv[number] = count;
	}
};
