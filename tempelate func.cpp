#include <iostream>
using namespace std;
template<typename type>
type average(type arr[], int size){
    double sum = arr[0];
    for(int i = 1; i < size; i++) sum += arr[i];
    return (type)(sum / size);
}
int main(){
    int intarr[] = {1, 2, 3, 4, 5}, size = 5;
    cout<<"Integer: "<<average<int>(intarr, size);


    long longarr[] = {1, 2, 3, 4, 5};
    cout<<"\nLong: "<<average<long>(longarr, size);


    double doublearr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout<<"\nDouble: "<<average<double>(doublearr, size);


    char chararr[] = {'a', 'b', 'c', 'd', 'e'};
    cout<<"\nChar: "<<average<char>(chararr, size);


    return 0;
}
