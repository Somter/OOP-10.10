// OOP 10.10.cpp : This file contains the 'main' function. Program execution begins and ends there.

 #include <iostream>
#include "Exception.h"
#include"DivideByZero.h"
#include "IndexEception.h"

using namespace std;

int main()
{
    double numerator = 0.0;
    double denominator = 0.0;

    try
    {
        cout << "Enter a numerator: ";
        cin >> numerator;

        cout << "Enter a denominator: ";
        cin >> denominator;

        if (denominator == 0.0)
        {
            throw DivideByZero("Divide by zero");
        }
        cout << "Result = " << numerator / denominator << endl; 

        int mas[3]{ 1,2,3 };
        for (int i = 0; i < 5; i++)
        {
            if (i >= 3)
            {
                throw IndexEception("No index");    
            }
            cout << mas[i] << "\t"; 
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            if (i >= 3)
            {
                throw Exception("No index"); // тут надо генерировать исключение типа IndexException
            }
            cout << mas[i] << "\t";
        }
        cout << endl;

    }
    catch (DivideByZero exception)
    {
        cout << exception.GetMessage() << endl;
    }
    catch (IndexEception exception) 
    {
        cout << exception.GetMessage() << endl;
    }

    return 0;
}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(0, "ru");
//	double a, b;
//	try
//	{
//		cin >> a >> b;
//		if (b == 0)
//		{
//			throw 1;
//		}
//		cout << a / b << endl;
//
//		int mas[3]{ 1,2,3 }; // 0 1 2
//		for (int i = 0; i < 5; i++)
//		{
//			if (i >= 3)
//			{
//				throw "Нет такого индекса";
//			}
//			cout << mas[i] << "\t";
//		}
//		cout << endl;
//
//		cout << "Hello world\n";
//	}
//	catch (int a)
//	{
//		cout << "На 0 делить нельзя\n";
//	}
//	catch (const char* error)
//	{
//		cout << error << endl;
//	}
//	catch (...) // универсальный catch
//	{
//		cout << "Error\n";
//	}
//
//	return 0;
//}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
