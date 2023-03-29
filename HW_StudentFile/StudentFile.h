#pragma once
#include <iostream>
#include <fstream>
class StudentFile
{
	std::string _name;
	unsigned short _age;
	std::string _group;
	float _average;
public:
	StudentFile() = default;
	StudentFile(std::string name, unsigned short age, std::string group, float average)
	{
		this->_name = name;
		this->_age = age;
		this->_group = group;
		this->_average = average;
	}
	void save(const char* path)
	{
		std::ofstream Save(path);
		if (Save.is_open())
		{
			Save << this->_name << ' ' << this->_age << ' ' << this->_group << ' ' << this->_average << ' ';
			Save.close();
		}
		else
		{
			std::cout << "File wan not openned\n";
		}
	}
	void load(const char* path)
	{
		std::ifstream Load(path);
		if (Load.is_open())
		{
			Load >> this->_name >> this->_age >> this->_group >> this->_average;
			Load.close();
		}
		else
		{
			std::cout << "File was not openned\n";
		}
	}
	int getAge() const
	{
		return _age;
	}
};

