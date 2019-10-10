#include <bits/stdc++.h>
using namespace std;

int to_check(string a,string modefied){
	string b;
	b=a;
	int i=0;
	string c;
	int siz= a.size();																	//storing the length of oringinal sring.
	bool flag= false;
	while (i < siz){
		c=b.substr(1,siz);
		string d = c+a[i];

		if (d==modefied){
        flag=true;
		    break;
		    }
		else{
		    b=d;																					//if the string id not still not same as the modified string then declaring the new original string as new modified string.
		    i++;
        flag=false;
		    }
	}

	if (flag==true){
        cout<<"yes it is possible"<<endl;																//if flag =true then prints it is that is possible.
	}
	else{
	cout<<"no it can't be derived."<<endl;														//if flag is false then it is not possible.
	}
}

int main(){
	string s1; 												//declaring two strings
	string s2;
	cout<<"enter the orignal string"<<endl;
	cin>>s1;
	cout<<"enter the string to be checked"<<endl;
	cin>>s2;
	to_check(s1,s2);											//calling the cheking function to know that it can be derived or not


}
