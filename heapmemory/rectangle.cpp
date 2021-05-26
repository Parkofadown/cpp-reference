#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int width;
};

int main(){
// accessing heap memory
struct rectangle *p;
p = (struct rectangle*)malloc(sizeof(struct rectangle));
p -> length = 10;
p -> width = 5;
cout << p;
}