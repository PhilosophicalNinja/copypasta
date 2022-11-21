#include<iostream>
using namespace std;
char str[5] = ".txt";
char number = '0';
int main(int argc, char * args[])
{
    system("echo \"This is a test\" > C:\\Users\\www09\\Documents\\start\\sourceFile.txt");
    for(int i = 0; i < 10; i++){
        //number = '0';
        //number += i;
        cout << i;
        //system("C:\\Users\\www09\\Documents\\start\\sourceFile.txt C:\\Users\\www09\\Documents\\finish\\sourceFile" + number + '.' + 't' + 'x' + 't');
    }
    //system("COPY C:\\Users\\www09\\Documents\\start\\sourceFile.txt C:\\Users\\www09\\Documents\\finish\\sourceFile1.txt");
	return 0;
}