#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
inline bool equal(string name1,string name2){
	bool unfilled=false;
	char ch1,ch2;
	for(int k(0);;k++){
		int cnt1(k),cnt2(k);
		freopen(name1.c_str(),"r+",stdin); 
		while(cnt1--)getchar();ch1=getchar();
		unfilled=ch1=='.';
		freopen(name2.c_str(),"r+",stdin);
		while(cnt2--)getchar();ch2=getchar();
		if(unfilled)return ch2=='.';
		if(ch1!=ch2)break;
	}
	return false;                                                                                        
}
inline void write(string s){
	char ch;
	for(int i(0);i<s.size();i++){
		ch=s[i];
		printf("%c",ch);
	}
} 
//100 data1.exe c1.exe c2.exe 1.out 2.out 100
int main(){
	int q;
	cin.tie(0),cout.tie(0); 
	cin>>q;
	int _time;
	string data,std,code,name1,name2;
	cout<<"data std code name1 name2 time:\n";
	cin>>data>>std>>code>>name1>>name2>>_time;
	system("cls");
	int n=q;
	while(q--){
		//freopen("CON","w",stdout);
		system("cls");
		write("working:count");
		printf("%d",n-q);
		cout<<'\n';
		system(data.c_str());
		//freopen(test.c_str(),"w+",stdout); 
		//write(testname);
		system(std.c_str());
		system(code.c_str());
		Sleep(_time); 
		if(!equal(name1,name2))break;
	}
	//freopen("CON","w",stdout);
	if(!(~q)){
		cout<<"NO PROBLEM";
		return 0;
	}
	Beep(1000,1000);
	system("cls");
	cout<<"Done\n";
	system("pause");
	return 0;
} 
