//// 1.���һ��Person�����Student������
////  Person���ࣺ����˽�г�Ա����name���������ַ������ͣ���age�����䣬�������ͣ����ṩ�вι��캯�����ڳ�ʼ�����������䣬
////  �Լ���Ա����void displayInfo() ������ʾ������������Ϣ��Student�����ࣺ���м̳���Person�࣬
////  ����˽�г�Ա����studentId��ѧ�ţ��ַ������ͣ���grade���꼶���������ͣ���ʵ�������๹�캯����
////  ���û��๹�캯����ʼ�����������䣬����ʼ��ѧ�ź��꼶����д�����displayInfo() ����������ʾ����������Ļ����ϣ�
////  ��ʾѧ�ź��꼶��Ϣ����д��������ԣ�����Student���󣬵���displayInfo()�����������Ϣ��ʾ�Ƿ���ȷ��
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