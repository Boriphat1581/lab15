#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
    int r = rand() % 4;
    int temp;

    if(r == 0){
        temp = *a; *a = *b; *b = *c; *c = *d; *d = temp;
    }
    else if(r == 1){
        temp = *a; *a = *c; *c = *b; *b = *d; *d = temp;
    }
    else if(r == 2){
        temp = *a; *a = *d; *d = *b; *b = *c; *c = temp;
    }
    else{
        temp = *b; *b = *a; *a = *d; *d = *c; *c = temp;
    }
}