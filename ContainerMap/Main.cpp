// ** ContainerMap ver0.3 06.17 - 1

#include <iostream>
#include <string>
#include <map>

using namespace std;
struct Vector3
{
	float x, y, z;
	Vector3()
		: x(0.0f) , y(0.0f) , z(0.0f) {};
	Vector3(const float _x, const float _y)
		: x(_x) , y(_y) , z(0.0f) {};
	Vector3(const float _x, const float _y, const float _z)
		: x(_x) , y(_y) , z(_z) {};
};

struct Transform
{
	Vector3 Position;
	Vector3 Rotation;
	Vector3 Scale;
};

struct Object
{
	Transform Info;

	Object() {};
	Object(const Transform& _Info) : Info(_Info) {};
};

struct Player : public Object
{

	Player() {};
	Player(const Transform& _Info) : Object(_Info) {};
};

map<string, Object*> Objects;

void AddObject(string _Key, Object* _Object);
void Initialize();

int main(void)
{
	Initialize();
	cout << Objects["Player"]->Info.Position.x << endl;
	cout << Objects["Player"]->Info.Position.y << endl;
	cout << Objects["Player"]->Info.Position.z << endl;

	return 0;

}

void Initialize()
{
	Transform Info;

	Info.Position.x = 10;
	Info.Position.y = 20;
	Info.Position.z = 30;

	Objects["Player"] = new Player(Info);
}

void AddObject(string _Key, Object* _Object)
{
	map<string, Object*>::iterator iter = Objects.find(_Key);

	if (iter == Objects.end())
		Objects.insert(make_pair(_Key, _Object));
	else
		iter->second = _Object;
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
