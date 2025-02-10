#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int generateRandomNum();
int guessNumber();
void printAnswer(int number, int randomnumber);

int main()
{
    int Rannumber = generateRandomNum();
    int gNumber;
    do{
        gNumber = guessNumber();
        printAnswer(gNumber, Rannumber);
    }
    while(gNumber != Rannumber);


}



int generateRandomNum()
{
    
    return rand() % 100 + 1;   
    
}

int guessNumber()
{
    int x;
    cout << "Enter the number between 1 and 100: "; 
    cin >> x;
    return x;
}

void printAnswer(int number, int randomnumber)
{
    if(number < randomnumber)
    {
        cout << "Your number is too small" << endl;
    }
    else if(number > randomnumber)
    {
        cout << "Your number is too big" << endl;
    }
    else
    {
        cout << "Correct answer, Congratulation !" << endl;
    }
}