   #include<stdio.h>
   void main()
{printf("请输入两门课的成绩:\n");
	int a,b,x;
	scanf ("%d%d",&a,&b);
	if (a>=0&&a<=100&&b>=0&&b<=100)
	       	if (a>60&&a<=100&&b>60&&b<=100) x=1;
			else x=2;	

	else x=3;
	switch(x){
		case 1:puts("it is pass");break;
		case 2:puts("it is not pass"); break;
		case 3:puts("it is error");break;}}
