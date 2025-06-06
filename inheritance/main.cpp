//// 1.设计一个Person基类和Student派生类
////  Person基类：包含私有成员变量name（姓名，字符串类型）、age（年龄，整数类型）。提供有参构造函数用于初始化姓名和年龄，
////  以及成员函数void displayInfo() 用于显示姓名和年龄信息。Student派生类：公有继承自Person类，
////  增加私有成员变量studentId（学号，字符串类型）和grade（年级，整数类型）。实现派生类构造函数，
////  调用基类构造函数初始化姓名和年龄，并初始化学号和年级。重写基类的displayInfo() 函数，在显示姓名和年龄的基础上，
////  显示学号和年级信息。编写主程序测试：创建Student对象，调用displayInfo()函数，检查信息显示是否正确。
//
//#include <iostream>
//#include <string>
//
//class Person
//{
//private:
//	std::string name;
//	int age;
//public:
//	Person(std::string name, int age) : name(name), age(age) {	}
//	virtual void displayInfo()
//	{
//		std::cout << "name:" << name << "\nage:" << age << std::endl;
//	}
//};
//
//class Student : public Person
//{
//private:
//	std::string studentId;
//	int grade;
//public:
//	Student(std::string name, int age, std::string studentId, int grade) : Person(name, age), studentId(studentId), grade(grade) { }
//	virtual void displayInfo()
//	{
//		Person::displayInfo();
//		std::cout << "studentId:" << studentId << "\ngrade:" << grade << std::endl;
//	}
//};
//
//int main()
//{
//	Student s1("xiaoning", 88, "1001", 84);
//	s1.displayInfo();
//	return 0;
//}