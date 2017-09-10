// #include <conio.h>
// #include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i=0, cnt=0, flag=0;
float x1, x2, x3=0;
float fx1=0, fx2=0, fx3=0, t=0;

float func(float f)
{
    return(f*f-4*f+3);
}

int check()
{
    printf("\n\tINITIAL X1---->");
    scanf("%f",&x1);
    
    printf("\n\tINITIAL X2---->");
    scanf("%f",&x2);
    
    fx1=fx2=fx3=0.0;
    
    if((func(x1)*func(x2))>0) 
    {
        printf("\n\t INITIAL VALUES ARE NOT PERFECT.");
        return(1);
    }
    return(0);
}

// somewhere in the program
#define WINDOWS 1

void console_clear_screen() {
    #ifdef WINDOWS
    system("cls");
    #endif
    #ifdef LINUX
    system("clear");
    #endif
}    


int main()
{
    console_clear_screen();
    
    printf("\n\n\t\t PROGRAM FOR PARICULAR BISECTION GENERAL");
    printf("\n\n\t EQUATION::::");
    
    while(1) 
    {
        if(check() == 0)
        {
            flag = 1;
            break;
        }
        check();
    }
    
    printf("\n *******************************");
    printf("\n ITERATION X1 FX1 X2 FX2 X3 FX3");
    printf("\n *******************************");
    
    if(flag==1) 
    {
        while((fabs(x2-x1))>=0.0001)
        {
            cnt++;
            fx1=fx2=fx3=0;
            
            fx1=func(x1);
            fx2=func(x2);
            
            x3=((x1*fx2)-(x2*fx1))/(fx2-fx1);
            fx3=func(x3);
            
            printf("\n %d %.3f %.3f %.3f %.3f %.3f %.3f",cnt,x1,fx1,x2,fx2,x3,fx3);        
            t=fx1*fx3;
            
            if(t>0)
            {
                x1=x3;
            }
            
            if(t<0) 
            {
                x2=x3;
            }
        }
        printf("\n\t ROOT OF EQUATION IS %f:::", x3);        
    }
    // getch();
}
