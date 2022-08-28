#include "KeyPressedAction.h"

KeyPressedAction::KeyPressedAction() {

}

void KeyPressedAction::setPlayer(Mage* mage) {

	//������� ��������� �� ����

	this->mage = mage; //����� ���� ������ KeyPressedAction

}

void KeyPressedAction::action() {

	if (Keyboard::isKeyPressed(Keyboard::Right)){ 
		//���� ������� ������ ������ 

		mage->setSpeed(Vector2f(0.4, 0));//������� �������� ���� �������

	mage->setTextureRect(IntRect(int(mage->currentFrame) * mage->getWidth(), 2 * mage->getHeight(), mage->getWidth(), mage->getHeight()));

	// ������� ������ �������� �� ������� ������, ����� ������� ��� �� ���������� ������� 

	}
	else if (Keyboard::isKeyPressed(Keyboard::Left)) { 
		//���� ������� ����� ������

		mage->setSpeed(Vector2f(-0.4, 0));//������� �������� ���� ������

		mage->setTextureRect(IntRect(int(mage->currentFrame) * mage->getWidth(), 1 * mage->getHeight(), mage->getWidth(), mage->getHeight()));

		// ������� ������ �������� �� ������ ������, ����� ������� ��� �� ���������� ������

	}
	else if (Keyboard::isKeyPressed(Keyboard::Up)) {

		//���� ������� ����� ������

		mage->setSpeed(Vector2f(0, -0.4));

		mage->setTextureRect(IntRect(int(mage->currentFrame) * mage->getWidth(), 3 * mage->getHeight(), mage->getWidth(), mage->getHeight()));

		// ������� ������ �������� �� ������ ������, ����� ������� ��� �� ���������� ������

	}

	else if (Keyboard::isKeyPressed(Keyboard::Down)) {

		//���� ������� ���� ������

		mage->setSpeed(Vector2f(0, 0.4));

		//������� �������� ���� ����

		mage->setTextureRect(IntRect(int(mage->currentFrame) * mage->getWidth(), 0 * mage->getHeight(), mage->getWidth(), mage->getHeight()));

		// ������� ������ �������� �� ������� ������, ����� ������� ��� �� ���������� ����

	}

	else {

		mage->setSpeed(Vector2f(0, 0));//�������� �������� ����

	}

	mage->currentFrame = mage->currentFrame + 0.005;

	if (mage->currentFrame > 4) {// ���� currentFrame ������ ���� �� ������� ���

		mage->currentFrame = 0;//�������� currentFrame

	}
}