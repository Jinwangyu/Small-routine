#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
ifstream fin;
bool f;
char sentence[100000000],input[100000000];
string finsentence,fininput;
double ac;
int len;
int main(){  
	fin.open("TEXT.TYPETRAINER"); 
	cout<<"��ѡ���ı���Դ��"<<endl<<"1.�ļ�"<<endl<<"0.���"<<endl; 
	cin>>f;
	for(len=ac=100;;len+=100,ac=100.0){
	    system("cls");
	    cout<<len<<"�ַ��ı�"<<endl; 
		if(f){
	    	getline(fin,finsentence);
			for(int i=0;i<len;i++)
				cout<<finsentence[i];
	    }
	    if(!f){
			srand(time(0)); 
			for(int i=0;i<len;i++){
				sentence[i]=char(65+rand()%(65-122+1));
				cout<<sentence[i];
			}
		}
		Sleep(3000);
		cout<<endl<<"��ʱ��ʼ��"<<endl;
		double start,stop,durationTime;
		start = clock();
		if(f) getline(cin,fininput);
		if(!f)
		for(int i=0;i<len;i++)
			 cin>>input[i];
		for(int i=0;i<len;i++)
			if(sentence[i]!=input[i]&&!f||finsentence[i]!=fininput[i]&&f) ac-=100/double(len);
		stop = clock();
	    durationTime = ((double)(stop-start))/CLK_TCK;
	    cout<<"��ʱ������"<<endl; 
	    system("cls");
	    cout<<"��һ�����ѣ�"<<durationTime<<" �����"<<len<<"���ַ��Ĵ��ֲ��ԣ�"<<endl;
	    cout<<"��ȷ�ʣ�"<<ac<<"%"<<endl; 
	    cout<<"���Ĵ����ٶȣ�"<<len/(durationTime/60)<<"�ַ�/����"<<endl; 
	    cout<<"������ȷ�����ٶȣ�"<<len/(durationTime/60)*(ac*0.01)<<"�ַ�/����"<<endl; 
	    cout<<"���ͣ�"<<endl; 
	    Sleep(1000);
	    system("pause");
	}
}
