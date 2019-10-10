//assumption overhere is that you only giving the only one anagram pairs to be checked by the code.
#include <bits/stdc++.h>
using namespace std;
string st(string s1){                                 //this function converts the given string into all lower cases charachters.
  string temp1;
  int j=0;
  while (s1[j]){
    char ch = s1[j];                    //declaring the single charchter.
    ch=tolower(ch);
    temp1=temp1+ch;                           //gradually making the new modified reuired string
    j++;
  }
  return temp1;
}
int count(string s1, char c){                             //this function counts the occurance of given word in the string.
  int counter=0;
  for (int i=0;i<s1.length();i++){
      if (s1[i]==c){
        counter++;
      }
    }
  return counter;
}
void to_check(string a, string b){
  bool flag=true;
  a=st(a);
  b=st(b);
  int for_a;
  int for_b;
  int i=0;
  while(a[i]){                  //checking the charchters of original string charchter by charachter.

    for_a=count(a,a[i]);        //counting the occurance of given no. of letters in a

    for_b=count(b,a[i]);          //counting the occurance of given no. of letters in a

    if (for_a!=for_b){
      break;
      flag=false;
    }
    else if (for_a==for_b){
      i++;
      }
    }
  if (flag==true){
    cout<<"yes the given two words are anagram"<<endl;
  }
  else if (flag==false){
    cout<<"no the given words are not anagram"<<endl;
  }
}

int main(){
  string s1;
	string s2;
	cout<<"enter the orignal string"<<endl;
	cin>>s1;
	cout<<"enter the string to be checked as anagram"<<endl;
	cin>>s2;
  to_check(s1,s2);
}
