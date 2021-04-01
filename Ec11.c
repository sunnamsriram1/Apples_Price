#include <stdio.h>
#include <stdlib.h>

int main ()

{

/*
int pageViews = 0;

pageViews = pageViews + 1;
printf("\npageViews: %d\n", pageViews);

pageViews = pageViews + 1;
printf("\npageViews: %d\n", pageViews);

pageViews = pageViews + 1;
printf("\npageViews: %d\n", pageViews);

pageViews = pageViews + 1;
printf("\npageViews: %d\n", pageViews);

pageViews = pageViews + 1;
printf("\npageViews: %d\n", pageViews); */

/*

float dailyIncome;
int price = 10;
int apples = 590;
int workingDays = 7;

dailyIncome = ((float)price * (float)apples) / 7;

printf("\nHis dailyIncome is Rs/-:%.2f\n", dailyIncome); */


float dailyIncome;
int apples ;
int workingDays ;
int price ;

printf("\nEnter Your Apples\n");
scanf("%d", &apples);

printf("\nEnter Your Price\n");
scanf("%d", &price);

printf("\nEnter Your WorkingDays\n");
scanf(" %d", &workingDays);

dailyIncome = ((float)apples * (float)price) / workingDays;

printf("\nHis is DailyIncome:%.2f\n", dailyIncome);




































}
