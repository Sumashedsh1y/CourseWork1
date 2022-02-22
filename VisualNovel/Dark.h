#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
using namespace std;
using namespace sf;
class Dark
{
	int x = 1920;
	int y = 1080;
public:
	RectangleShape fon;
	Dark()
	{
		fon.setSize(Vector2f(x, y));
	}
	RectangleShape getFon();
};