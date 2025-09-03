#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int sub1;
    int sub2; 
    int sub3;
    int sub4;
    char name[50];
    int total;
    int average;
    int y=0;
    int high;
    int low;
    int p;
    int f;
   while (y!=4)
   {
    printf("Enter a name: ");
    scanf("%s", &name);
    y=0;
    printf("Enter a subject 1: ");
    scanf("%d", &sub1);
    if(sub1<0 || sub1>100){
    printf("try again\n");
    continue;}
    else{
    y+=1;
    }
    printf("Enter a subject 2: ");
    scanf("%d", &sub2);
    if(sub2<0 || sub2>100){
    printf("try again");
    continue;}
    else{
    y+=1;
    }
    printf("Enter a subject 3: ");
    scanf("%d", &sub3);
    if(sub3<0 || sub3>100){
    printf("try again");
    continue;}
    else{
    y+=1;
    }
    printf("Enter a subject 4: ");
    scanf("%d", &sub4);
    if(sub4<0 || sub4>100){
    printf("try again");
    continue;}
    else{
    y+=1;}

}
    total=sub1+sub2+sub3+sub4;
    average= total/5;
    if(sub1>sub2&&sub1>sub3&&sub1>sub4)
    high=sub1;
    else if(sub2>sub3&&sub2>sub4&&sub2>sub1)
    high=sub2;
    else if(sub3>sub2&&sub3>sub1&&sub3>sub4)
    high=sub3;
    else (sub4>sub2&&sub4>sub3&&sub4>sub1);
    high = sub4;
    total=sub1+sub2+sub3+sub4;
    average= total/5;
    if(sub1<sub2&&sub1<sub3&&sub1<sub4)
    low=sub1;
    else if(sub2<sub3&&sub2<sub4&&sub2<sub1)
    low=sub2;
    else if(sub3<sub2&&sub3<sub1&&sub3<sub4)
    low=sub3;
    else (sub4<sub2&&sub4<sub3&&sub4<sub1);
    low = sub4;
    
    while (0)
    {
        if(sub1>50)
        p+=1;
        else
        f+=1;
        if(sub2>50)
        p+=1;
        else
        f+=1;
        if(sub3>50)
        p+=1;
        else
        f+=1;
        if(sub4>50)
        p+=1;
        else
        f+=1;
        break;
    }
    











    printf("Name : %s ", name);
    printf("\nsubject 1 : %d",sub1);
    printf("\nsubject 2 : %d",sub2);
    printf("\nsubject 3 : %d",sub3);
    printf("\nsubject 4 : %d",sub4);
    printf("\nthe total is : %d",total);
    printf("\nthe average is : %d",average);
    printf("\nhighest grade : %d",high);
    printf("\nlowest grade : %d",low);
    printf("\nsubjects passed : %d",p);
    printf("\nsubjects failed : %d",f);

    
    
    
    
    if(average<=100&&average>90)
    printf("\ngrade:A");
    else if(average<=90&&average>80)
    printf("\ngrade:B");
    else if(average<=80&&average>60)
    printf("\ngrade:C");
    else if(average<=60&&average>50)
    printf("\ngrade:D");
    else
    printf("\ngrade:F");
    
    if(average>50)
    printf("\nYou have passed");
    else
    printf("\nyou failed");

    return 0;
}