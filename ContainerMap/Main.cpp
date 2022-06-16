// ** ContainerMap ver0.2 06.16

#include <iostream>
#include <string>
#include <map>

using namespace std;

map<int, int> Numbers;

void AddData(int _Key , int _Value);

int main(void)
{
	Numbers[1] = 10;
	Numbers[2] = 10;

	Numbers.insert(make_pair(0, 30));
	Numbers.insert(make_pair(3, 30));
	Numbers.insert(make_pair(4, 40));
	
	AddData(2, 200);

	for (map<int, int>::iterator iter = Numbers.begin();
		iter != Numbers.end(); ++iter)
		cout << iter->second << endl;


	return 0;
}

void AddData(int _Key, int _Value)
{
	map<int, int>::iterator iter = Numbers.find(_Key);

	if (iter == Numbers.end())
		Numbers.insert(make_pair(_Key, _Value));
	else
			iter->second = _Value;
}

/*
map<string, int> Numbers2;
이진 트리구조
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
