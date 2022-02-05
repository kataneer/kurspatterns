class rivWatcher {
public:
	float square;
	float speed;
	float time;
	float cont;
	void initWatcher (float a, float b, float c)
	{
		square = a;
		speed = b;
		time = c;
	}
	void Consumption()
	{
		cont = square * speed * time;
	}
};

class proxyWatcher {
public:
	rivWatcher *ras;
	void Consumption()
	{
		ras->Consumption();
	}

	proxyWatcher(float a, float b, float c)
	{
		ras = new rivWatcher();
		ras->initWatcher(a, b, c);
	}
};

class rivWatch {
public:
	rivWatcher *watchi;
	proxyWatcher *pwatchi;
	rivWatch(float a, float b, float c)
	{
		watchi = new rivWatcher();
		watchi->initWatcher(a, b, c);
		pwatchi = new proxyWatcher(a, b, c);
	}
	void Consumption()
	{
		watchi->Consumption();
	}
	void pConsumption()
	{
		pwatchi->Consumption();
	}
};

class fallRivers : public rivWatcher {
private:
	float sideRivSpeed;
public:
	void fallInit(float a, float b, float c)
	{
		square = a;
		speed = b;
		time = c;
	}
	void setSpeed(float a)
	{
		sideRivSpeed = a;
	}
	float getSpeed()
	{
		return sideRivSpeed;
	}
	void sideConsumption()
	{

	}
};