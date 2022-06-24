#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main() {
    char c, u;
    char fname[10];
    system("cls");
    ofstream out;
    cout << "Enter File Name:";
    cin>>fname;
    out.open(fname);
    cout << "Enter the text(Enter # at end)\n"; //write contents to file
    while ((char*gets(c))!= '#') {
        
		u = c - 32;
        out << u;
    }
    out.close();
    ifstream in(fname); //read the contents of file
    cout << "\n\n\t\tThe File contains\n\n";
    while (in.eof() == 0) {
        in.get(c);
        cout << c;
    }
   return 0;
}
