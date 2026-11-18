#include<iostream>
#include<windows.h>
#include<conio.h>
#include <cctype>
using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 void o(int x, int y, int n){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || j==0 ||i==n-1 || j==n-1){
				gotoxy(x+j, y+i);
				cout<<"#";
			}
		}
	}
}

int main(){

	int x=10, y=10, mov=0;
	char t='t';
	do{
		system("cls");
			o(0,0,36);
	x=10, y=10, mov=0;

	
		
		t=getch();
		switch(t){
			case'w':if (y>0) y--; break;
			case's':if (y<21) y++; break;
			case'a':if (x>1) x--; break;
			case'd':if (x<59) x++; break;
		}
		mov++;
		gotoxy(x,y);cout<<"@";
		
	}while (t != 27);
	
	
}