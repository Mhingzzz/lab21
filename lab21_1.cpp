#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double R1_r = R1.x+R1.w , R2_r = R2.x+R2.w;
	double R1_l = R1.y-R1.h , R2_l = R2.y-R2.h;

	double dx = min(R1_r, R2_r) - max(R1.x, R2.x);
	double dy = min(R1.y,R2.y) - max(R1_l,R2_l);

	double Area;
	if (dx > 0 && dy > 0)
	{
		Area = dx * dy;
		return Area;
	}
	else{
		return 0;
	}

}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
Rect R2 = {0,0,1.2,2.5};
cout << overlap(R1,R2);
}