// https://dmoj.ca/problem/ccc06j1

#include <iostream>

using namespace std;

// list of things to order (choices)
enum FirstChoice {
	Cheeseburger = 461,
	FishBurger   = 431,
	VeggieBurger = 420,
	NoBurger     = 0
};

enum SecondChoice {
	Fries        = 100,
	BakedPotato  = 57,
	ChefSalad    = 70,
	NoSideOrder  = 0
};

enum ThirdChoice {
	SoftDrink    = 130,
	OrangeJuice  = 160,
	Milk         = 118,
	NoDrink      = 0
};

enum FourthChoice {
	ApplePie     = 167,
	Sundae       = 266,
	FruitCup     = 75,
	NoDessert    = 0
};

int main() {
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	
	int Calories1, Calories2, Calories3, Calories4;

  // converting int to enum_index
	switch (a) {
	case 1: 
		Calories1 = FirstChoice(Cheeseburger);
		break;
	case 2: 
		Calories1 = FirstChoice(FishBurger);
		break;
	case 3:
		Calories1 = FirstChoice(VeggieBurger);
		break;
	default:
		Calories1 = FirstChoice(NoBurger);
	}

	switch (b) {
	case 1:
		Calories2 = SecondChoice(Fries);
		break;
	case 2:
		Calories2 = SecondChoice(BakedPotato);
		break;
	case 3:
		Calories2 = SecondChoice(ChefSalad);
		break;
	default:
		Calories2 = SecondChoice(NoSideOrder);
	}

	switch (c) {
	case 1:
		Calories3 = ThirdChoice(SoftDrink);
		break;
	case 2:
		Calories3 = ThirdChoice(OrangeJuice);
		break;
	case 3:
		Calories3 = ThirdChoice(Milk);
		break;
	default:
		Calories3 = ThirdChoice(NoDrink);
	}
  
	switch (d) {
	case 1:
		Calories4 = FourthChoice(ApplePie);
		break;
	case 2:
		Calories4 = FourthChoice(Sundae);
		break;
	case 3:
		Calories4 = FourthChoice(FruitCup);
		break;
	default:
		Calories4 = FourthChoice(NoDessert);
	}

	long int sumCalories = Calories1 + Calories2 + Calories3 + Calories4;
	cout << "Your total Calorie count is " << sumCalories << "." << endl; // and done!

  return 0;
}
