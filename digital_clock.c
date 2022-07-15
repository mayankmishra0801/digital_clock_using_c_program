#include<stdio.h>
#include<windows.h>
int main()
{
system("color 3f");
    int h,m,s;
    int d=1000;//add a delay of 1000 milisecoond and will use in main function
    printf("Enter details to set your clock\n");
      printf("Enter Hour:\n");
      scanf("%d",&h);
      printf("Enter Minutes:\n");
      scanf("%d",&m);
      printf("Enter Second:\n");
      scanf("%d",&s);
      printf("set time :\n");




    //scanf("%d%d%d",&h,&m,&s);
    if(h>24 || m>60 || s>60)
    {
        printf("ERROR!!!!!\n");
        exit(0);
    }
    while(1)//this is the infinite loop and anything inside it continues run
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>24)
        {
           h=1;
        }
        printf("\n CLOCK:");
        printf("\n %02d:%02d:%02d",h,m,s);//this writes our time in this format  00:00:00
        Sleep(d);//this function sleep slows down while the loop and make it more real clock
        system("cls");//this clear the screen
    }
}
