#include<stdio.h>
#include<Windows.h>

int delayFunction(unsigned int t){
	
	double newTime;
	static double oldTime=0;
	
	//t = 1000 -> 1��
	//delay �Լ� ���� �� ����� lib

	newTime = GetTickCount(); 
	//newTime = GetTickCount64();

	if((newTime - oldTime) > t){
		oldTime = newTime;
		return 1;	// ���� ����
	}
	else{
		return 0;
	}
}
