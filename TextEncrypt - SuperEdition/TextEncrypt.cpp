#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;
string str[10005],passwd,o;
ofstream fout;
ifstream fin;
int main(int argc,char *argv[]){
	cout<<"������......"<<endl;
	Sleep(1000); 
	if(argc==2){
		ifstream fin;
		fin.open(argv[1]);
		system("cls");
		cout<<"���������룺";
		getline(cin,passwd);
		system("cls");
		cout<<"���ڷ������룬���Ժ�......"<<endl;
		Sleep(1000);
		system("cls");
		cout<<"������......"<<endl; 
		Sleep(1000);
		int n=0;
		while(getline(fin,str[n])) n++;
		for(int i=0;i<n;i++)
			for(int j=0;j<str[i].length();j++)
				for(int k=0;k<passwd.length();k++)
					str[i][j]-=passwd[k];
		fin.close();
		system("cls");
		cout<<"������"<<passwd<<"��Կ���ܵ��ı���"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<str[i].length();j++)
				cout<<str[i][j];
			cout<<endl;
		}
		system("pause");
	}
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
			cout<<"����������ı������10000�У���������ɺ��У�����Ctrl+Z���ٰ�һ��Enter�������룩��";
			int n=0;
			while(getline(cin,str[n])) n++;
			system("cls");
			cout<<"���ڷ����ı������Ժ�......"<<endl;
			Sleep(1000);
			system("cls"); 
			cout<<"���������룺";
			cin.clear(); cin.sync();
			getline(cin,passwd);
			system("cls");
			cout<<"���ڷ������룬���Ժ�......"<<endl;
			Sleep(1000);
			system("cls");
			cout<<"������......"<<endl; 
			Sleep(1000);
		 	fout.open("����.txt"); 
			for(int i=0;i<n;i++){
				for(int j=0;j<str[i].length();j++)
					for(int k=0;k<passwd.length();k++)
						str[i][j]+=passwd[k];
		 		fout<<str[i]<<endl;
		 	}
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
			int n=0;
			while(getline(fin,str[n])) n++;
			for(int i=0;i<n;i++)
				for(int j=0;j<str[i].length();j++)
					for(int k=0;k<passwd.length();k++)
						str[i][j]-=passwd[k];
			fin.close();
			system("cls");
			cout<<"������"<<passwd<<"��Կ���ܵ��ı���"<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<str[i].length();j++)
					cout<<str[i][j];
				cout<<endl;
			}
		 	system("pause");
		}
	}
	return 0;
}
