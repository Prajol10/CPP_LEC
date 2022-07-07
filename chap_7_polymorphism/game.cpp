#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>

using namespace std;

int scoreCalculator(int total);
char userWord;
int points;
int total=0;
int main()
{

char userWord[11];
for (int i=0; i<11; i++)
{
    userWord[i]='\0';
}

cout<<"Enter your word less than 10 letters: "<<endl;
cin>>userWord;
cout<<"Here is the word you inputted: "<<userWord<<endl;  

int scrabblePoints[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

for(int j=0; j<26; j++)
{
    userWord[i]
}

cout<<"Here is your score: "<<scoreCalculator(total)<<endl;

}
int scoreCalculator(int total)
{

total+=scrabblePoints[j];

}