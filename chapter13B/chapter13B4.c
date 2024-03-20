//Read coordinates and find the quadrant
#include<stdio.h>
int main()
{
    int x,y;
    printf("Input the Coordinates(x,y):\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    if(x>0&&y>0)
    {
        printf("Quadrant-I(+,+)");
    }
    else if(x<0&&y>0)
    {
        printf("Quadrant-II(-,+)");
    }
    else if(x<0&&y<0)
    {
        printf("Quadrant-III(-,-)");
    }
    else if(x>0&&y<0)
    {
        printf("Quadrant-IV(+,-)");
    }
    else if(x==0&&y==0)
    {
        printf("Origin(0,0)");
    }
    return 0;
}
