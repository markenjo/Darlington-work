

void Physics(){

int num_a,num_b,num_c,num_d;

printf("Please enter the marks for Beginning of term:",num_a);
scanf("%d",&num_a);

printf("Please enter the marks for Midterm:",num_b);
scanf("%d",&num_b);

printf("Please enter the marks for coursework:",num_c);
scanf("%d",&num_c);

printf("Please enter the marks for End of term:",num_d);
scanf("%d",&num_d);

int s=num_a+num_b+num_c+num_d;

 float average=s/4.0;
 printf("The average of physics:%.2f\n",average);

}

void Chemistry(){
int num_a,num_b,num_c,num_d;

printf("Please enter the marks for Beginning of term:",num_a);
scanf("%d",&num_a);

printf("Please enter the marks for Midterm:",num_b);
scanf("%d",&num_b);

printf("Please enter the marks for coursework:",num_c);
scanf("%d",&num_c);

printf("Please enter the marks for End of term:",num_d);
scanf("%d",&num_d);

int s=num_a+num_b+num_c+num_d;

 float average=s/4.0;
 printf("The average of chemistry:%.2f\n",average);

}

void Maths(){
int num_a,num_b,num_c,num_d;

printf("Please enter the marks for Beginning of term:",num_a);
scanf("%d",&num_a);

printf("Please enter the marks for Midterm:",num_b);
scanf("%d",&num_b);

printf("Please enter the marks for coursework:",num_c);
scanf("%d",&num_c);

printf("Please enter the marks for End of term:",num_d);
scanf("%d",&num_d);

int s=num_a+num_b+num_c+num_d;

 float average=s/4.0;
 printf("The average of maths:%.2f\n",average);

}

int main(){
Physics();
Chemistry();
Maths();

return 0;
}
