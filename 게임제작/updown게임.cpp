#include <cstdio>
#include <stdlib.h> //�����Լ� �ʿ�! 
#include <time.h> //�ð� ����! 
#include "colortext.h" //���� ������ �������! 
int main()
{
	int mysu;
	int comsu;
	int jumsu=100;
	color_init();
	srand((int)time(NULL));
	comsu = rand()%1000+1; //1~1000���� ������ ����!!
	printColoredText("UP DOWN GAME!!!\n",CYAN);
	printf("\n");
	printColoredText("						1����1000������ ���� �Է¹޾� ���ڸ� ���߼���!\n",PURPLE); 
	do{
		scanf("%d",&mysu);	
		if(mysu > comsu) //������ ��ǻ�� ������ Ŭ 
		{
			printColoredText("DOWN!!!\n",GREEN);
			jumsu--;
		}
		else if(mysu < comsu) // ������ ��ǻ�� ������ ������  
		{
			printColoredText("UP!!!\n",YELLOW);
			jumsu--;
		}
		else //�� ���� ��ǻ�� ���� ������ 
		{
			printColoredText("����!!!\n",RED);
			printf("����� ������ %d�Դϴ�!\n",jumsu); 
			break;
		}
	}while(1);
	return 0;
}
