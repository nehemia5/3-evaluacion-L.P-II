#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void c(int x, int y, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || j==0 ||i==n-1){
				gotoxy(x+j, y+i);
				cout<<"#";
			}
		}
	}
}
void o(int x, int y, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || j==0 ||i==n-1 ||j==n-1 ){
				gotoxy(x+j, y+i);
				cout<<"#";
			}
		}
	}
}
void s(int x, int y, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || (i<=n/2 && j==0) || (i==n/2 && j<n) || (i>=n/2 && j==n-1) || (i==n-1) ){
				gotoxy(x+j, y+i);
				cout<<"#";
			}
		}
	}
}
void dos(int x, int y, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if( (i==0) || (j==n-1 && i<=n/2) || (j==0 && i>=n/2) || (i==n-1) || (i==n/2 && j<n) ){
				gotoxy(x+j, y+i);
				cout<<"#";
			}
		}
	}
}
void ocho(int x, int y, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if( (i==0) || (j==0) || (j==n-1) || (i==n-1) || (i==n/2 && j<n) ){
				gotoxy(x+j, y+i);
				cout<<"#";
			}
		}
	}
}
int main(){
	
//	o(2,5,5);
	
//	c(8,5,5);
	
//	s(14,5,5);

    dos(2,5,5);
    
    o(8,5,5);
    
    o(14,5,5);
    
    ocho(20,5,5);
	return 0;
	
	
}