// Write a C/C++ program to search the number of occurrences of any str, string and sub sequence in a given string

// Toggle Word Wrap alt+z

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    cout<<"Enter the str"<<endl;
    string str;
    getline(cin,str);
    string str2 ;
    str2 = "Today Startups are being widely recognized as important engines for growth and job generation. Through innovation and scalable technology, startups can generate impactful solutions, and thereby act as vehicles for socio-economic development and transformation.Today Startups are being widely recognized as important engines for growth and job generation. Through innovation and scalable technology, startups can generate impactful solutions, and thereby act as vehicles for socio-economic development and transformation.Today Startups are being widely recognized as important engines for growth and job generation. Through innovation and scalable technology, startups can generate impactful solutions, and thereby act as vehicles for socio-economic development and transformation.";
    int count = 0;
    for(int i=0;i<str2.size();i++){
        if(str2[i]==str[0]){
            int bol=0;
            for(int j=0;j<str.size();j++){
                if(str2[i+j]!=str[j]){
                    bol=1;
                }
            }
            if(bol==0){
                count++;
                // cout<<"str is present"<<endl;
                // break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}