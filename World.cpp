//============================================================================
// Name        : World.cpp
// Author      : Please Lukau
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std; // @suppress("Symbol is not resolved")
#include <string>
using namespace std; // @suppress("Symbol is not resolved")



class Asset{
private:
	string description;
	int value;

	//here are our methods for the Asset class
	void destroy(){ // to destroy an existing asset
	}
	void upgrade(){
		value+=(value*20/100);
	}
};


class Creature{
private:
	string name;
	double chancesOfReplicating;
	double chancesOfDying;
	Asset myAsset;

	// Let's have a constructor
	void Creature(string namex, double chancesOfReplicatingx, double chancesOfDyingx, Asset myAssetx){
		name = namex;
		chancesOfReplicating = chancesOfReplicatingx;
		chancesOfDying = chancesOfDyingx;
		myAsset = myAssetx;
	}

	//here are our methods for the Creature class
	void die();

	Creature reproduce(){
		Creature child = new Creature((name + "-child"), (chancesOfReplicating)/2, (chancesOfDying)/2, NULL);
		return child;
	}

	void chanceRoller();
};


class Weapon: public Asset{
private:
	int harmLevel;
	void upgrade();
};

class World{
private:
string skyColor; // @suppress("Type cannot be resolved")
double chancesOfSpawning;
int map[10][10];
vector<Creature> population;
Creature createCreature(){

}
void placeCreature();
void replicate();
void chanceRoller(); //override
};
