#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <windows.h>
#include "Dark.h"
using namespace std;
using namespace sf;
class FonColor : public Dark
{
	Color color = Color(0, 0, 0, 0);
	int opacity = 0;
public:
	FonColor(int op) : Dark()
	{
		opacity = op;
		color = Color(0, 0, 0, opacity);
		fon.setFillColor(color);
	}
	void zatemnenie(RenderWindow&);
};