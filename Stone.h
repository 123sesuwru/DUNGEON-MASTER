#pragma once

#include <SFML/Graphics.hpp>//����������� sfml 

using namespace sf;//������������� ������������ ��� sf 

class Stone {//����� ����� 

private://��������� ���� 

	Vector2f position;//������� ����� 

	Sprite sprite;//������ �����

	Texture texture;//�������� �����

	void init();//��������� �������� ����� 

	Stone(Vector2f position);//����������� ������ 

	float speed_y;

public:
	void setSpeed(float speed_y);
	void update();
	Sprite getSprite();
	void setPosition(Vector2f position);
	void setTextureRect(IntRect rect);


};