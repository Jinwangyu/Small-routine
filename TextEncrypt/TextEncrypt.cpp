#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;
string str,passwd,o;
ofstream fout;
ifstream fin;
int main(){
	cout<<"������......"<<endl;
	Sleep(1000); 
	while(1){
		cin.clear();
		cin.sync();
		system("cls");
		system("title �ı����ܽ�����");
		system("color f0");
		cout<<"�ı����ܽ�����"<<endl<<"1.����"<<endl<<"2.����"<<endl<<"���������"; 
		o[0]=getch();
		if(o[0]=='1'){
		 	system("cls");
			cout<<"������һ���ı���";
			getline(cin,str);
			system("cls");
			cout<<"���ڷ����ı������Ժ�......"<<endl;
			Sleep(1000);
			system("cls"); 
			cout<<"���������룺";
			getline(cin,passwd);
			system("cls");
			cout<<"���ڷ������룬���Ժ�......"<<endl;
			Sleep(1000);
			system("cls");
			cout<<"������......"<<endl; 
			Sleep(1000);
			for(int i=0;i<str.length();i++)
				for(int j=0;j<passwd.length();j++)
					str[i]=str[i]+passwd[j];
		 	fout.open("����.txt"); 
		 	fout<<str<<endl;
		 	fout.close(); 
		 	system("cls");
		 	cout<<"��ɣ�"<<endl;
		 	system("pause");
		}
		if(o[0]=='2'){
			system("cls");
			cout<<"���������룺";
			getline(cin,passwd);
			system("cls");
			cout<<"���ڷ������룬���Ժ�......"<<endl;
			Sleep(1000);
			system("cls");
			cout<<"������......"<<endl; 
			Sleep(1000);
			fin.open("����.txt");
			getline(fin,str);
			for(int i=0;i<str.length();i++)
				for(int j=0;j<passwd.length();j++)
					str[i]=str[i]-passwd[j];
			fin.close();
			system("cls");
			cout<<"������"<<passwd<<"��Կ���ܵ��ı���"<<endl;
			cout<<str<<endl;
		 	system("pause");
		}
	}
	return 0;
}
