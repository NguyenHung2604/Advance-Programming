#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;
int selectNumber(int low, int high);
char hostNumber(int x);
int main()
{
    int low, high;
    srand(time(0));
    cout << "Please enter the size" << ' ';
    cin >> low >> high;
    int X;
    char Answer;
    do{
        X = selectNumber(low, high);
        Answer = hostNumber(X);
        if(Answer == '>') high = X -  1;
        if(Answer == '<') low = X + 1;
    }while(Answer != '=');

    cout << "You are good Computer" << endl;
}

int selectNumber(int low, int high)
{
    return (low + high)/2;
}

char hostNumber(int x)
{
    char answer;
    cout << "Is " << x << " is the correct Number";
    cin >> answer;
    return answer;
}




