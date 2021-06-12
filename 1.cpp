/*Reverse a string without affecting special characters
Difficulty Level : Easy
Last Updated : 14 May, 2021
Given a string, that contains a special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse the string in a way that special characters are not affected.
Examples: 
 

Input:   str = "a,b$c"
Output:  str = "c,b$a"
Note that $ and , are not moved anywhere.  
Only subsequence "abc" is reversed

Input:   str = "Ab,c,de!$"
Output:  str = "ed,c,bA!$"
*/

#include <bits/stdc++.h>
using namespace std;

bool check(char c){
    return (c>='a'&&c<='z')||(c>='A'&&c<='Z') ;
}

int main() {
	// your code goes here
	
	string s ;
	cin>>s ;
	
	int i=0 ;
	int j=s.length()-1 ;
	
	while(i<j){
	    if(check(s[i])&&check(s[j])){
	        swap(s[i],s[j]) ;
	        i++ ;
	        j-- ;
	    }
	    else if(check(s[i])){
	        j-- ;
	    }
	    else
	    i++ ;
	}
	cout<<s<<endl ;
	return 0;
}
