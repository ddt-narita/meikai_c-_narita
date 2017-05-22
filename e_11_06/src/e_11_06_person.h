#ifndef ___Class_Person
#define ___Class_Person

#include<iostream>
#include<string>
#include"e_11_06_Date.h"

class Person
{
	std::string fullname;	//名前に関するデータメンバ
	int year;				//年に関するデータメンバ
	double height;			//身長に関するデータメンバ
	double weight;			//体重に関するデータメンバ
	double vision;			//視力に関するデータメンバ
	Date birthday;

public:
	//コンストラクタを定義
	Person(std::string name, int y, double h, double w, double v,const Date& birth);

	//設定された個人情報を表示
	void print_spec ()
	{
		//名前を表示
		std::cout << "名前：" << fullname 	<< "\n";
		//年齢を表示
		std::cout << "年齢：" << year 		<< "\n";
		//身長を表示
		std::cout << "身長：" << height 	<< "cm\n";
		//体重を表示
		std::cout << "体重：" << weight 	<< "kg\n";
		//視力を表示
		std::cout << "視力：" << vision 	<< "\n";
	}

	//設定されたデータからBMIを求めて表示
	void print_BMI()
	{
		//BMIの計算式は体重÷身長（ｍ単位）の2乗
		double BMI = weight / height * 100 / height * 100;;
		//求めたBMIを表示
		std::cout << "BMI：" << BMI << "\n";
	}

	Date opening_date() const
	{
		return birthday;
	}
};

#endif
