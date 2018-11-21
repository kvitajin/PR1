#include <iostream>
#include <vector>
#include <cstring>
enum days{
    monday,
    thuesday,
    wednesday,
};
enum status{
    ok,
    crashed,
    stealed,
};

struct Car{
    std::string name;
    double weight;
    int speed;
    std::string color;
    int status;
};
struct Garage{
    std::string location;
    std::string name;
    std::vector<Car> cars;
    int maxCars;
};

bool addCarToGarage(Garage* garage, Car* car);
std::string carToString(Car* car);
int getCrashedCars(Garage* garage);
void repareCar(Car* car);
void relocateCars (Garage* from, Garage* to, std::vector<Car> cars);
bool removeCarFromGarage(Car* car, Garage* garage);
int removeCarsFromGarage(std::string name, Garage* garage); //return number of removed cars
bool writeTextToFile(std::string filename, std::string text, bool append=false);

std::string carToString(Car* car){
    std::string automobil;

    automobil.append(car->name);
    automobil=car->name;
    automobil+="\n";
    automobil+=std::to_string(car->weight);
    automobil+="\n";
    automobil+=std::to_string(car->speed);
    automobil+="\n";
    automobil+=car->color;
    automobil+="\n";
    automobil+=std::to_string(car->status);
    automobil+="\n";
}

int main() {
    days day =monday;
    std::cout   <<  day<<   std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


/*regex
 *
https://codeshare.io/5zPRMr

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Status
{
	OK,
	CRASHED
};

struct Garage
{
	string location;
	string name;
	vector<Car> cars;
	int maxCars;
};

struct Car
{
	string name;
	double weight;
	int speed;
	string color;
	Status status;
};

bool addCarToGarage(Garage* garage, Car* car);
string carToString(Car* car);
int getCrashedCars(Garage* garage);
void repareCar(Car* car);
void relocateCars(Garage* from, Garage* to, vector<Car> cars);
bool removeCarFromGarage(Car* car, Garage* garage);
int removeCarsFromGarage(string name, Garage* garage); // returns number of removed cars
bool writeTextToFile(string filename, string text, bool append = false);

int main() {
	return 0;
}
 */