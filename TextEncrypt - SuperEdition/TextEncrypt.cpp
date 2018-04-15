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
	cout<<"加载中......"<<endl;
	Sleep(1000); 
	if(argc==2){
		ifstream fin;
		fin.open(argv[1]);
		system("cls");
		cout<<"请输入密码：";
		getline(cin,passwd);
		system("cls");
		cout<<"正在分析密码，请稍后......"<<endl;
		Sleep(1000);
		system("cls");
		cout<<"解密中......"<<endl; 
		Sleep(1000);
		int n=0;
		while(getline(fin,str[n])) n++;
		for(int i=0;i<n;i++)
			for(int j=0;j<str[i].length();j++)
				for(int k=0;k<passwd.length();k++)
					str[i][j]-=passwd[k];
		fin.close();
		system("cls");
		cout<<"这是用"<<passwd<<"密钥解密的文本："<<endl;
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
		system("title 文本加密解密器");
		system("color f0");
		cout<<"文本加密解密器"<<endl<<"1.加密"<<endl<<"2.解密"<<endl<<"请输入命令："; 
		o[0]=getch();
		if(o[0]=='1'){
		 	system("cls");
			cout<<"请输入多行文本（最多10000行）（输入完成后换行，输入Ctrl+Z，再按一下Enter结束输入）：";
			int n=0;
			while(getline(cin,str[n])) n++;
			system("cls");
			cout<<"正在分析文本，请稍后......"<<endl;
			Sleep(1000);
			system("cls"); 
			cout<<"请输入密码：";
			cin.clear(); cin.sync();
			getline(cin,passwd);
			system("cls");
			cout<<"正在分析密码，请稍后......"<<endl;
			Sleep(1000);
			system("cls");
			cout<<"加密中......"<<endl; 
			Sleep(1000);
		 	fout.open("密文.txt"); 
			for(int i=0;i<n;i++){
				for(int j=0;j<str[i].length();j++)
					for(int k=0;k<passwd.length();k++)
						str[i][j]+=passwd[k];
		 		fout<<str[i]<<endl;
		 	}
		 	fout.close(); 
		 	system("cls");
		 	cout<<"完成！"<<endl;
		 	system("pause");
		}
		if(o[0]=='2'){
			system("cls");
			cout<<"请输入密码：";
			getline(cin,passwd);
			system("cls");
			cout<<"正在分析密码，请稍后......"<<endl;
			Sleep(1000);
			system("cls");
			cout<<"解密中......"<<endl; 
			Sleep(1000);
			fin.open("密文.txt");
			int n=0;
			while(getline(fin,str[n])) n++;
			for(int i=0;i<n;i++)
				for(int j=0;j<str[i].length();j++)
					for(int k=0;k<passwd.length();k++)
						str[i][j]-=passwd[k];
			fin.close();
			system("cls");
			cout<<"这是用"<<passwd<<"密钥解密的文本："<<endl;
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
