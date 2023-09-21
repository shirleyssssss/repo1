#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	scanf ("%d" "%d" "%d",&a,&b,&c);
	int number=0;
	int time=0;
	printf ("%d " "%d " "%d\n",c,time,number);
	
	if (a<=c) {
		time=c-a;
		number=1;
	} else {
		time=a-c;
		number=1;
	}
	 printf ("%d " "%d " "%d\n",a,time,number);
	 
	 number=0;
	 if (a<=b) {
	 	time=time+b-a;
	 	
	 } else {
	 	time=time+a-b;
	 }
	 printf ("%d " "%d " "%d\n",b,time,number);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
