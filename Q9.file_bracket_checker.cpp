#include<bits/stdc++.h>
using namespace std;


int check(char ch){                                       //function to check character scanned
	if(ch=='{' || ch=='[' || ch=='(')	                           //if opening bracket return 1
		return 1;
	if(ch=='}' || ch==']' || ch==')')	                           //if closing bracket return 2
		return 2;
	return 0;							//else 0
}


int main(){
	ifstream Opfile;
	stack<char> s;
	map<char,char> brackets;	//maping the opening and closing brackets
	brackets[']']='[';
	brackets['}']='{';
	brackets[')']='(';
	Opfile.open("input.txt");	//opening input.txt file
	char ch;
	int r_value;
	bool allok=true;	//marking file as valid
	//read till end of file
	while(!Opfile.eof()){
		Opfile.get(ch);	//taking input character by character
		r_value=check(ch);	//calling check function
		if(r_value==0)		//if non bracket then continue
			continue;
		if(r_value==1)		//if opening bracket then append it to stack
			s.push(ch);
		if(r_value==2){		//if closing bracket
			if(s.empty() || s.top()!=brackets[ch])	//check whether stack is empty of bracket doesnt match with respective opening bracket
			{

				allok=false;							//making file as invalid
				break;										//and exiting the loop
			}
			s.pop();	//removing bracket from stack
		}
	}
	Opfile.close();		//closing the file
	if(!s.empty())		//if stack is not empty then also mark it invalid
		allok=false;
	//printing whether file is valid or not
	if(allok)
		cout<<"File OK";
	else
		cout<<"Invalid File";
	return 0;
}
