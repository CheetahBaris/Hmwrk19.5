#include<iostream>

 

class Animal
{
private:
	int x;
public:
	Animal(){}
	Animal(int _x) : x(_x){}

	virtual void Voice()
	{

		std::cout << "Salam!\n";
	}
};

class Dog : public Animal
{
private:
	int y;
public:
	Dog(){}
	Dog(int _y) : y(_y){}

	void Voice() override
	{
		std::cout << "Woof!\n";

	}




};
class Cat : public Animal
{
private:
	int	q;
public:
	Cat(){}
	Cat(int _q) : q(_q){}

	void Voice() override
	{

		std::cout << "Mya!\n";
	}



};
class Humster : public Animal
{
private:
	int r;
public:
	Humster(){}
	Humster(int _r) : r(_r){}

	void Voice() override
	{
		std::cout << "Grrr!\n";
	}



};

int main()
{
	Animal*  animal[3];
	animal[0] = new Dog;
	animal[1] = new Cat;
	animal[2] = new Humster;
	
	for (Animal* p : animal)
	{
		p->Voice();
	 }

	return 0;
}


//������� ����� Animal � ��������� ������� Voice() ������� ������� � ������� ������ � �������.
//����������� �� Animal ������� ��� ������(� ������� Dog, Cat � �.�.) � � ��� ����������� ����� Voice() ����� �������, 
//����� ��� ������� � ������ Dog ����� Voice() ������� � ������� "Woof!".
//� ������� main ������� ������ ���������� ���� Animal � ��������� ���� ������ ��������� ��������� �������.
//����� �������� ������ �� �������, ������� �� ������ �������� ������� ����� Voice().
//�������������� ��� ������, ������ ���������� ��������� �� ����� ������� ����������� Animal.
