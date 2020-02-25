##include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 
void swap(int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void swap(int &x,int &y){
int temp = x ;
     x = y ;
	 y = temp ;
}

void shuffle(int *w,int *x, int *y, int *z){
      int rando;
	for(int i =0;i<2;i++){
	
	rando = rand()%5+1;
	switch (rando)
	{
	case 1:	swap(*w,*x);
	case 2: swap(*x,*y);
	case 3: swap(*y,*z);
	case 4: swap(*w,*z);
	case 5: swap(*x,*y);
	
	}
	}


}
