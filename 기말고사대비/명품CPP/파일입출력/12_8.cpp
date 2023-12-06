#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;




void printHexa(char *buf, int n){
	for (int i=0;i<16;i++){
		cout<<setw(2)<<setfill('0')<<hex<<(int)buf[i];
		
		if(i==n-1) {	
			cout<<' ';
			for(int j=i+1;j<16;j++){
				cout<<setw(2)<<setfill(' ')<<hex<<' ';
				cout<<' ';
			}
			break;
		}
		
		if(i==7) cout<<setw(4)<<setfill(' ')<<' '; 
		
		else cout<<' '; 
	}
}
 void printChar(char *buf, int n){
	cout << setw(4) << setfill(' ') << ' ';	

 	for(int i=0; i<16; i++) {
 		if(isprint(buf[i]))
 			cout << buf[i];
 		else
 			cout << '.';

 		if(i == n-1) {
 			break;
 		}
	
 		if(i == 7) cout << setw(4) << setfill(' ') << ' ';
 		else cout << ' ';
 	}

 }

 int main(){
 	fstream fin("/home/myunggi/.nanorc", ios::in | ios::binary); 
    //책에 적힌 파일경로 대로 하시면 됩니다.
 	if(!fin){
 		cout<<"파일 열기 오류"<<endl;
 	return 0;
 	}
	
 	char buf[16];
 	while(true){
		fin.read(buf, 16);
 		int real = fin.gcount();
 		printHexa(buf, real);
 		printChar(buf, real);
 		cout<<endl;
		
 		if(real<16) break;
 	} 

 	fin.close();
 }
