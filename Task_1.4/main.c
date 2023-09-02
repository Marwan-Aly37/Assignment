#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x,z,y,v1,v2,Kg,EST;
    int r,num,s,counter,count = 0;
    float arr[100][100];
    int MPU_sensor()
    {
    printf("Enter reading: \n");
    scanf("%f",&z);
    x=(z+((((9.81)*(z*z))/((2)*(30*30)))*(1+((tan((46*3.14)/(180)))*(tan((46*3.14)/(180)))))))/((float)tan((46.0*3.14)/(180.0)));
    }
    int BMO_sensor()
    {
    printf("Enter reading: \n");
    scanf("%f",&v2);

   v1=(v2+((((9.81)*(v2*v2))/((2)*(30*30)))*(1+((tan((46*3.14)/(180)))*(tan((46*3.14)/(180)))))))/((float)tan((46.0*3.14)/(180.0)));
    }
    printf("Enter number of readings: \n");
    scanf("%d",&r);
    for(counter = 0;counter<r;++counter)
    {
    MPU_sensor();
    BMO_sensor();
    Kg = (float)(79)/(79+92);
    EST = (float)(z)+(Kg*(v2-z));
    count = count +1;
    printf("Estimate is:\n");
    printf("%d-%f\n",count,EST);
    }
    printf("Goodbye!");
    return 0;
}
