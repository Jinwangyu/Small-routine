//Copyright (C) 2018 XiyuWang All rights reserved.
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(int argc,char *argv[]){
	ifstream fin;
	fin.open(argv[1]);
	string tmp;
	for(int len=0;getline(fin,tmp);cout<<tmp<<endl<<endl,len++)
		if(len%20==0&&len!=0){
			cout<<"�밴���������......";
			getch();
			cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		}
	cout<<"==========��=========="<<endl; 
	getch();
	return 0;
}

