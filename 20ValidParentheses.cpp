//============================================================================
// Name        : Valid.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


string s ="[[()]]";

bool valid = true;


int pos =0;
char last = ' ';
int charLast=0;
char now=' ';
int charNow=0;
int p=s.length();
while(true){

	int v=0;

	if(s.at(pos)=='(' or s.at(pos)=='[' or s.at(pos)=='{'){

		last = s.at(pos);
		charLast=int(last);
		pos++;

		cout<<charLast<<" "<<last <<" "<<pos<<endl;
	}
	if(s.at(pos)==')' or s.at(pos)==']' or s.at(pos)=='}'){
		now = s.at(pos);
		charNow=int(now);

		cout<<charNow<<" "<<now<<endl;

		if(charLast+2==charNow or charLast+1==charNow){
		    s.erase(pos-1, pos);
			pos=0;
			p-=2;
			if(p==0){
				break;
			}
		}else{
			valid=false;
			break;

		}

	}if(pos==p-1){
		break;
	}
		

}

}
