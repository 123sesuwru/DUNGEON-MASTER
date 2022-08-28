#pragma once

#include <SFML/Graphics.hpp>

#include<iostream>

#include "Map.h" 

#include "KeyPressedAction.h"

#include "Camera.h" 

using namespace sf;// ����� �� ������ sf::

using namespace std; //����� �� ������ std::

class Engine {

	// ��� ����� �������� ������, �������� main public:

	// ����� ������������ �����

public:

	RenderWindow window;// ������ �������� ����

	Map map;

	KeyPressedAction pressedAction;

	Camera* camera;// �������� ��������� �� ������ ������ 

	Engine();// ����������� ������ 

	void init();// ��� �������� ������� �����������

	void loop();// ������� ����(�� ���� while (true) � main.

	void draw();

	void update();// ����������

};
