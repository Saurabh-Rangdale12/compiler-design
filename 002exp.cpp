// use cpp code

//  Write a C/C++ program to find the number of occurrences of any word in a file and replace that with another word

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    cout<<"Enter the word or substring to be search in the string available"<<endl;
    string word;
    cin>>word;
    cout<<"Enter the word with which you want to replace the previous word with size of ."<<endl;
    string replace;
    cin>>replace;
    cout<<endl;
    string line ;
    line = "hello there i am saurabh. saurabh is me . me is everything. saurabh is saurabh.";
    // line = "Today Startups are being widely recognized as important engines for growth and job generation. Through innovation and scalable technology, startups can generate impactful solutions, and thereby act as vehicles for socio-economic development and transformation.Today Startups are being widely recognized as important engines for growth and job generation. Through innovation and scalable technology, startups can generate impactful solutions, and thereby act as vehicles for socio-economic development and transformation.Today Startups are being widely recognized as important engines for growth and job generation. Through innovation and scalable technology, startups can generate impactful solutions, and thereby act as vehicles for socio-economic development and transformation.";
    int ans = 0;
    for(int i=0;i<line.size();i++){
        if(line[i]==word[0]){
            int bol=0;
            for(int j=0;j<word.size();j++){
                if(line[i+j]!=word[j]){
                    bol=1;
                }
            }
            if(bol==0){
                ans++;
                for(int j=0;j<word.size();j++){
                line[i+j]=replace[j];
                }
                // cout<<"word is present"<<endl;
                // break;
            }
        }
    }
    cout<<line<<endl;
    return 0;
}