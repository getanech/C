#include<stdio.h>
//#include<conio.h>
//#include<string.h>

//struct Date
//{
//	int day;
//	int mounth;
//	int year;
//	
//};
//typedef struct Date date_t;
//
//int main()
//{
//	date_t d;
//	d.day = 23;
//	d.mounth=8;
//	d.year=2008;
//	printf("the date is %d %d %d\n",d.day,d.mounth,d.year);
//}

//struct grade 
//{
//	int grade = 70;
//};
//typedef struct grade GR;
//int main(){
//	GR G;
//	G.grade=70;
//	printf("%d",G.grade);
//}

struct Clock
{

int hour, minute;

}typedef clock_t;

int diffMinutes(clock_t c1, clock_t c2)
{
	int minutes1 = c1.hour*60 + c1.minute;
	int minutes2 = c2.hour*60 + c2.minute;
	return minutes1 - minutes2;
	
}

int main(){
	
	clock_t c1 = {12, 30};
	clock_t c2 = {11, 15};
	int diff = diffMinutes(c1,c2);
	printf("The diff is %d minutes\n", diff);

	
}

