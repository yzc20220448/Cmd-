#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;
void sys(string a){
	ofstream listout("cmd++\\list.bat");
	listout<<"@echo off"<<endl<<a<<endl<<"exit";
	listout.close();
	system("start /min cmd++\\list.bat");
	system("rd cmd++ /Q");
	return ;
}
string syc(string a){
	ofstream listout("cmd++\\list.bat");
	listout<<a<<endl<<"exit";
	listout.close();
	system("start /min cmd++\\list.bat>cmd++\\list.txt");
	ifstream listin("cmd++\\list.txt");
	string s;
	while(listin>>a)s+=a+'\n';
	s.erase(s.size()-1);s.erase(s.size()-1);
	system("rd cmd++ /Q");
	return s;  
}
