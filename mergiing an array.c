#include <stdio.h>
#include <stdlib.h>
int math();
int econ();
int phy();
int result();
int main(){
    int m=math();
    int e=econ();
    int p=phy();
    result(m,e,p);
    return 0;
}
int math(){
    int ass1,cw1,mid1,end1,add1;
    ass1=50,cw1=70,mid1=60,end1=50;
    add1=ass1+cw1+mid1+end1;
    float ave1=add1/4;
    printf("AVERAGE FOR MATH=%.2f\n",ave1);
    return ave1;
}
int econ(){
    int ass2,cw2,mid2,end2,add2;
    ass2=40,cw2=37,mid2=80,end2=90;
    add2=ass2+cw2+mid2+end2;
    float ave2=add2/4;
    printf("AVERAGE FOR ECON=%.2f\n",ave2);
    return ave2;
}
int phy(){
    int ass3,cw3,mid3,end3,add3;
    ass3=60,cw3=70,mid3=80,end3=80;
    add3=ass3+cw3+mid3+end3;
    float ave3=add3/4;
    printf("AVERAGE FOR PHY=%.2f\n",ave3);
    return ave3;
}
int result(int m,int e,int p ){
    int addition=m+e+p;
    float av=addition/3;
    printf("THE TOTAL AVERRAGE =%.2f\n",av);


}
