#include<stdio.h>
#include<Windows.h>

int delayFunction(unsigned int t){
	
	double newTime;
	static double oldTime=0;
	
	//t = 1000 -> 1초
	//delay 함수 만들 때 사용할 lib

	newTime = GetTickCount(); 
	//newTime = GetTickCount64();

	if((newTime - oldTime) > t){
		oldTime = newTime;
		return 1;	// 동작 설정
	}
	else{
		return 0;
	}
}
