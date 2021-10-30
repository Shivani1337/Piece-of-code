#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char msg[100];
	char con='y';
	int i,j,len,c,key;
	cout<<"Enter the strings: \n";
	cin.getline(msg,100);
	len = strlen(msg);
  cout<<"Enter your choice: "<<endl<<"Enter 1 for Encryption"<<endl<<"Enter 2 for Decryption"<<endl<<"Enter your choice: ";
	cin>>c;
	string s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string s2 = "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA9876543210";
	
	if(c == 1)
	{
		char ch;
		for(int i = 0; msg[i] != '\0'; ++i){
			ch = msg[i];
			int j = s1.find(ch);
			msg[i] = s2.at(j);

		}
		cout<<"Encrypted message: "<<msg;
	}
	else if(c==2){
	char ch;
	for(int i =0 ; msg[i] != '\0'; ++i){
		ch = msg[i];
		int j  = s2.find(ch);
		msg[i]= s1.at(j);
	}
	cout<<"Decrypted message: "<<msg;
}
}
