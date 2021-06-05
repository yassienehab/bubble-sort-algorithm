#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std; 
void bubble_sort(int list[], int length);
int main()
{
	int list[10]; 
	cout << "enter the elements of your list with maximum 10 elements " << endl; 
	for (int i = 0; i < 10; i++)
		cin >> list[i]; 
	bubble_sort(list, 10); 
	cout << "the list after arrangement are" << endl; 
	for (int i = 0; i < 10; i++)
		cout << list[i]<<endl;

	return 0; 
}
void bubble_sort(int list[], int length)
{
	int temp; 
	int itiration; //number of stages 
	int index ; 
	for (itiration=1 ; itiration  < length ;  itiration++ )
	{
		for (index = 0; index < length - itiration ; index ++) //number of comaprisons in each stage 
			if (list [index]> list [index +1])
			{
				temp = list[index]; 
				list[index] = list[index + 1]; 
				list[index + 1] = temp; 
			}
	}
}