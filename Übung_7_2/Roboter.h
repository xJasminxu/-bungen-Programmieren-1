#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <time.h>
#include <ctime>

class Roboter
{
public:
	Roboter();
	~Roboter();
	int R2D2();
	int C3PO();
	
private:
	int energie;
	int positionR2D2;
	int positionC3PO;
	
};

