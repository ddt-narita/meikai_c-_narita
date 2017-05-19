/* 演習10-01
 * 名前、身長、体重等をメンバとしてもつ人間クラスを自由に定義
 * 作成日：5月19日
 * 作成者：成田修之
 */

#include<iostream>
#include<string>

class Person
{
	std::string fullname;
	int year;
	int height;
	int weight;
	double vision;


public:

	Person(std::string name, int y, int h, int w, double v)
	{
		fullname = name;
		year = y;
		height = h;
		weight = w;
		vision = v;
	}

	void print_spec ()
	{
		std::cout << "名前：" << fullname 	<< "\n";
		std::cout << "年齢：" << year 		<< "\n";
		std::cout << "身長：" << height 	<< "cm\n";
		std::cout << "体重：" << weight 	<< "kg\n";
		std::cout << "視力：" << vision 	<< "\n";
	}

};
