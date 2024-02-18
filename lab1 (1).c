#include<stdio.h>
#include<stdlib.h>
struct day{
	char*name;
	int date;
	char*activity;
};
void create(struct day *week){
	for(int i=0;i<7;i++){
		week[i].name=(char*)malloc(10*sizeof(char));
		printf("Enter the name of day%d:",i+1);
		scanf("%s",week[i].name);
		printf("Enter the date of day %d:",i+1);
		scanf("%d",&week[i].date);
		week[i].activity=(char*)malloc(50* sizeof(char));
		printf("Enter the activity for day%d:",i+1);
		scanf("%s",week[i].activity);
		}
}
void read(struct day *week)
{
	for(int i=0;i<7;i++){
	printf("Day %d%s%d\n",i+1,week[i].name,week[i].date);
	printf("Activity :%s\n",week[i].activity);
	}
}
int main()
{
	struct day week[7];
	create(week);
	read(week);
	return 0;
}
