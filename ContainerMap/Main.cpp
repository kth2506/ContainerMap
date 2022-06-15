// ** ContainerMap ver0.1 06.15

#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	

	map<string, int> Numbers2;

	// ** Key, Value
	//map<int, int>
	Numbers2["A"] = 1;
	Numbers2["B"] = 2;
	Numbers2["C"] = 3;
	Numbers2["D"] = 4;
	Numbers2["E"] = 5;
	for (auto iter = Numbers2.begin(); iter != Numbers2.end(); ++iter)
	{
		cout << iter->first << endl;
		cout << iter->second << endl;
	}


	
	return 0;
}

/*
map<string, int> Numbers2;

// ** Key, Value
//map<int, int>
Numbers2["A"] = 1;
Numbers2["B"] = 2;
Numbers2["C"] = 3;
Numbers2["D"] = 4;
Numbers2["E"] = 5;

for (map<string, int>::iterator iter = Numbers2.begin();
	iter != Numbers2.end(); ++iter)
{
	cout << iter->first << endl;
	cout << iter->second << endl;
}

for( auto iter = Numbers2.begin(); iter != Numbers2.end(); ++iter)
*/

/*
enum Key
{
	Player,
	Enemy,
	Bullet,
	Max,
};

const int MaxObject = 128;
int Array[Max][MaxObject];

for (int i = 0; i < Max; ++i)
{
	for (int j = 0; j < MaxObject; ++j)
	{
		Array[i][j] = i * j;
	}
}

for (int i = 0; i < Max; ++i)
{
	for (int j = 0; j < MaxObject; ++j)
	{
		cout << Array[i][j] << endl;
	}
}
*/
