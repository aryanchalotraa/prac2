#include<iostream>
#include<string>
using namespace std;
string str_concat(string str1, string str2){
	return str1+str2;
}
void find_substring(string str,string sub_str){
	size_t found = str.find(sub_str);
	if(found != string :: npos){
		cout<<"Substring found at index: " << found << endl;
	}
	else{
		cout<<"Substring not found "<< endl;
	}
}
string replace_str(string str, string from, string to){
	size_t start_pos= str.find(from);
	if(start_pos != string :: npos){
		str.replace(start_pos, from.length(),to);
	}
	return str;
}
int main(){
	//INPUT
	string str1, str2,result;
	string str="Hello! Welcome to MIET";
	getline(cin,str1);
	getline(cin,str2);

	//CONTAENATION
	result=str_concat(str1,str2);
	cout<<"concatenated string: "<<result<<endl;

	//FIND SUBSTRING
	find_substring("Hello world! ok","WORLD");

	//REPLACE
	cout<<"Replaced String: "<<replace_str("hello earth ok","earth","world")<<endl;

	//substring
	string substring= str.substr(2,5);
	cout<<"substring: "<<substring<<endl;
 
	
	//insert
	str.insert(0,"Hello! ");
	cout<<str<<endl;
	
	//erase
	str.erase(0,7);
	cout<<str;
	
	//size
	str = "Hello, World!";

	cout << "Length: " << str.length() << endl;

	cout << "Size: " << str.size() <<endl;


// duplicate word
	str1 = "Hello";

   str2 = "World";

  int result = str1.compare(str2);

  if (result == 0) {

	cout << "Strings are equal." <<endl;

  } else if (result < 0) {

	cout << "str1 is less than str2." << endl;

  } else {

	cout << "str1 is greater than str2." << endl;

  }

  return 0;

}