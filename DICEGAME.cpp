#include<stdio.h>
#include<stdlib.h>
int main()
{ 
 int x,y;
 start :
	printf("\n enter 0 to exit and any other key to continue\n ");
	 scanf("%d",&y);
	 if(y==0){
	 
	 exit(0);}
	  printf("\nEnter in dice game");
	  x=rand()%7 ;
	  switch(x)
	  {
	  	case 1 : printf("Value 1");
	  	break;
	  	case 2 : printf("Value 2");
	  	break;
		  case 3 : printf("Value 4");
	  	break;
		  case 4 : printf("Value 8");
	  	break;
		  case 5 : printf("Value 6");
	  	break;
		  case 6 : printf("Value 6");
	  	break;
		//  case 1 : printf("Value 1");
	  //	breeak;
	  default : printf("retry");
	         break;
	  }
	 goto start ;
}
