//#include<conio.h>
#include<stdio.h>
int main()
{
	int q,w,e,s[10]={1,2,3,4,11,6,7,8,9,10};
	
	  for(q=0;q<=9;q=q+1)
{
	for(w=0;w<=9;w=w+1)
	{
	
	 if(s[w]>s[w+1])
	 {
	 	e=s[w];
	 	s[w]=s[w+1];
	 	s[w+1]=e;
	 	
	 }
}

}
for(q=0;q<=9;q=q+1)
{
printf("%d\n",s[q]);
}
return 0;
}

