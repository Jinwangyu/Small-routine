#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
ifstream fin;
bool f;
char sentence[100000000],input[100000000];
string finsentence,finput;
double ac;
int len;
int main(){  
start:
	system("cls");
	fin.open("TEXT.TYPETRAINER"); 
	cout<<"请选择文本来源："<<endl<<"1.文件"<<endl<<"0.随机"<<endl; 
	cin>>f;
	if(!f){ 
			for(len=ac=100;;len+=100,ac=100.0){
			    system("cls");
			    cout<<len<<"字符文本"<<endl; 
				srand(time(0)); 
				for(int i=0;i<len;i++){
					sentence[i]=char(65+rand()%(65-122+1));
					cout<<sentence[i];
				}
			Sleep(3000);
			cout<<endl<<"计时开始！"<<endl;
			double start,stop,durationTime;
			start = clock();
			for(int i=0;i<len;i++){ 
				input[i]=getch();
				cout<<input[i];
			}
			for(int i=0;i<len;i++)
				if(sentence[i]!=input[i]&&!f) ac-=100/double(len);
			stop = clock();
		    durationTime = ((double)(stop-start))/CLK_TCK;
		    cout<<"计时结束！"<<endl; 
		    system("cls");
		    cout<<"您一共花费："<<durationTime<<" 秒完成"<<len<<"个字符的打字测试！"<<endl;
		    cout<<"正确率："<<ac<<"%"<<endl; 
		    cout<<"您的打字速度："<<len/(durationTime/60)<<"字符/分钟"<<endl; 
		    cout<<"您的正确打字速度："<<len/(durationTime/60)*(ac*0.01)<<"字符/分钟"<<endl; 
		    cout<<"加油！"<<endl; 
		    Sleep(1000);
		    system("pause");
			}
		}
	if(f){
			ac=100;
			system("cls");
		   	getline(fin,finsentence);
		   	fin.clear();
		   	fin.sync();
		   	cin.clear();
		   	cin.sync();
		   	len=finsentence.length();
		   	cout<<len<<"字符文本"<<endl; 
			cout<<finsentence;
		    Sleep(3000);
			cout<<endl<<"计时开始！"<<endl;
			double start,stop,durationTime;
			start = clock();
			getline(cin,finput);
			for(int i=0;i<len;i++)
				if(finsentence[i]!=finput[i]) ac-=100/double(len);
			stop = clock();
		    durationTime = ((double)(stop-start))/CLK_TCK;
		    cout<<"计时结束！"<<endl; 
		    system("cls");
		    cout<<"您一共花费："<<durationTime<<" 秒完成"<<len<<"个字符的打字测试！"<<endl;
		    cout<<"正确率："<<ac<<"%"<<endl; 
		    cout<<"您的打字速度："<<len/(durationTime/60)<<"字符/分钟"<<endl; 
		    cout<<"您的正确打字速度："<<len/(durationTime/60)*(ac*0.01)<<"字符/分钟"<<endl; 
		    cout<<"加油！"<<endl; 
		    Sleep(1000);
		    system("pause");
		    goto start;
		}
	return 0;
}
