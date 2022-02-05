using namespace std;
class Facade {
public:
	countersFactory *rivCounts;
	rivWatch *rivParams;
	Facade()
	{
		rivCounts = new countersFactory();
	}
	void facadeW(float a, float b, int c)
	{
		rivParams = new rivWatch(a, b, c);
	}
	void creati(char nameCount[], char type[], int number, int atm, float temp)
	{
		rivCounts->creati(nameCount, type, number, atm, temp);
	}
	void Consumption()
	{
		rivParams->Consumption();
	}
	void pConsumption()
	{
		rivParams->pConsumption();
	}
};

class mainRiver {
private:
	static mainRiver* instance;
	mainRiver(int data) {}
	mainRiver() {}
public:
	static mainRiver* Instance(int data);
	static mainRiver* Instance();
	Facade *eski;
	void run() {}
};
mainRiver* mainRiver::instance = nullptr;

mainRiver* mainRiver::Instance(int data) {
	if (instance == 0) {
		printf("Создан объект главной реки.\n");
		instance = new mainRiver(data);
	}
	else
		printf("Главная река уже задана!\n");
	return instance;
}
mainRiver* mainRiver::Instance() {
	if (instance == 0) {
		printf("Создан объект главной реки.\n");
		instance = new mainRiver();
	}
	else
		printf("Главная река уже задана!\n");
	return instance;
}


