#pragma once
#include<iostream>
void Example() {
	using namespace std;
	int carrots;
	cout << "how many carrots do you have\n";
	cin >> carrots;
	cout << "here is two more\n";
	carrots = carrots + 2;
	cout << "now you have " << carrots << " carrots." << endl;
	cin.get();
}