#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//因为没有上下键，默认进入后才知道去哪里，电梯优先 

//假设不会超载的情况 
int main() {
	int a,b,time,c,d,e,number;
	time=0;
	printf ("请输入两名乘客分别所在的楼层\n"); 
	scanf ("%d" "%d",&a,&b);
	printf ("请输入两名乘客分别想去的楼层\n");
	scanf ("%d" "%d",&c,&d);
    printf ("请输入电梯所在的楼层\n");
	scanf ("%d",&e); 
	//先去最近的 a对应c b对应d
	number=1; 
	
	if (abs(a-e)<abs(b-e)) {
		time=abs(a-e);
		
		printf ("%d %d %d\n",a,time,number);
		if(a<c&&c<b){
			time=time+c-a;
			number=0;
				printf ("%d %d %d\n",c,time,number);
				
			    printf ("%d %d %d\n",b,time+b-c,number+1);
			    printf ("%d %d %d\n",d,time+b-c+abs(b-d),number);
			}
		} else if(a<b&&b<c){
			time=time+b-a;
			number=2;
				printf ("%d %d %d\n",b,time,number);
				if (b<d&&d<c) {
					printf ("%d %d %d\n",b,time+d-b,number-1);
			    printf ("%d %d %d\n",d,time+d-b+abs(c-d),number-2);
				}
				
				if (c<=d||d<=b) {
				
				printf ("%d %d %d\n",c,time+c-b,number-1);
				printf ("%d %d %d\n",d,time+c-b+abs(c-d),number-2);
		} else if(c<a&&a<b){
			time=time+b-a;
			number=2;
				printf ("%d %d %d\n",b,time,number);
				printf ("%d %d %d\n",c,time+b-c,number-1);
				printf ("%d %d %d\n",d,time+b-c+abs(c-d),number-2);
		} else if(b<a&&a<c){
		time=time+c-a;
			number=0;
				printf ("%d %d %d\n",c,time,number);
				printf ("%d %d %d\n",b,time+c-a,number+1);
				printf ("%d %d %d\n",d,time+c-a+abs(b-d),number);
		} else if(c<b&&b<a){
		time=time+a-b;
			number=2;
				printf ("%d %d %d\n",b,time,number);
				if(c<d&&d<b){
				printf ("%d %d %d\n",c,time+b-d,number-1);
				printf ("%d %d %d\n",d,time+b-d+abs(c-d),number-2);
				}
				
				
				
				if(d<=c||b<=d){
				
				printf ("%d %d %d\n",c,time+b-c,number-1);
				printf ("%d %d %d\n",d,time+b-c+abs(c-d),number-2);
			}
		} else if(b<c&&c<a){
		time=time+a-c;
			number=0;
				printf ("%d %d %d\n",c,time,number);
				printf ("%d %d %d\n",b,time+c-b,number+1);
				printf ("%d %d %d\n",d,time+c-b+abs(b-d),number);
		}
		
			
		
	
				
		

	}  else if (abs(a-e)>abs(b-e)) {
	
		time=abs(b-e);
		
		printf ("%d %d %d\n",b,time,number);
		if(a<d&&d<b){
			time=time+b-d;
			number=0;
				printf ("%d %d %d\n",d,time,number);
			    printf ("%d %d %d\n",a,time+d-a,number+1);
			    printf ("%d %d %d\n",c,time+d-a+abs(c-a),number);
		} else if(a<b&&b<d){
			time=time+d-b;
			number=0;
				printf ("%d %d %d\n",d,time,number);
				printf ("%d %d %d\n",a,time+d-a,number+1);
				printf ("%d %d %d\n",c,time+d-a+abs(a-c),number);
		} else if(d<a&&a<b){
			time=time+b-a;
			number=2;
				printf ("%d %d %d\n",a,time,number);
				printf ("%d %d %d\n",d,time+a-d,number-1);
				printf ("%d %d %d\n",c,time+a-d+abs(c-d),number-2);
		} else if(b<a&&a<d){
		time=time+a-b;
			number=2;
				printf ("%d %d %d\n",a,time,number);
			    
				if (d<c&&c<a){
					printf ("%d %d %d\n",c,time+a-c,number-1);
				printf ("%d %d %d\n",d,time+a-c+abs(c-d),number-2);
				}	
				
				
				
				
				
				if (c<=d||a<=c){
				
				printf ("%d %d %d\n",d,time+d-a,number-1);
				printf ("%d %d %d\n",c,time+d-a+abs(c-d),number-2);
			}
		} else if(d<b&&b<a){
		time=time+a-b;
			number=2;
				printf ("%d %d %d\n",a,time,number);
			   	
				if (a<c&&c<d){
					printf ("%d %d %d\n",c,time+c-a,number-1);
				printf ("%d %d %d\n",d,time+c-a+abs(d-c),number-2);
				}
				
				
				
				
				if (c<=a||c>=d){
				
				printf ("%d %d %d\n",d,time+a-d,number-1);
				printf ("%d %d %d\n",c,time+a-d+abs(c-a),number-2);
			}
		} else if(b<d&&d<a){
		time=time+d-b;
			number=0;
				printf ("%d %d %d\n",d,time,number);
				
				printf ("%d %d %d\n",a,time+a-d,number+1);
				printf ("%d %d %d\n",c,time+a-d+abs(a-c),number);
		}
	}  
	//优先先上后下 
	else if (abs(a-e)==abs(b-e)) {
		time=abs(a-e);
        if (a<e&&e<b) {
		printf ("%d %d %d\n",b,time,number);
		   if(a<d){
		   	time=time+abs(b-d);
		   	printf ("%d %d %d\n",d,time,number-1);
//默认number=1
            time=time+abs(d-a);		   	
		   	printf ("%d %d %d\n",a,time,number);
		   	printf ("%d %d %d\n",c,time+abs(a-c),number-1);
		   }
		   if(d<a){
		   	time=time+abs(b-a);
		   	printf ("%d %d %d\n",a,time,number+1);
		   	 if (c<=d||a<=c){
		   	 	time=time+abs(a-d);
		   	 	printf ("%d %d %d\n",d,time,number);
		   	 	printf ("%d %d %d\n",c,time+abs(d-c),number-1);
				}
			 if (d<c&&c<a){
			 	time=time+abs(a-c);
			 	printf ("%d %d %d\n",c,time,number);
			 	printf ("%d %d %d\n",a,time+abs(d-c),number-1);
			 }	
		   }
		
        }
        
        
        
        
        
        
		if (b<e&&e<a) {
		printf ("%d %d %d\n",a,time,number);
		   if(c>b){
		   	time=time+abs(c-a);
		   	printf ("%d %d %d\n",c,time,number-1);
//默认number=1
            time=time+abs(b-c);		   	
		   	printf ("%d %d %d\n",b,time,number);
		   	printf ("%d %d %d\n",d,time+abs(b-d),number-1);
		   }
		   if(c<b){
		   	time=time+abs(b-a);
		   	printf ("%d %d %d\n",b,time,number+1);
		   	 if (d<=c||b<=d){
		   	 	time=time+abs(c-b);
		   	 	printf ("%d %d %d\n",c,time,number);
		   	 	printf ("%d %d %d\n",d,time+abs(d-c),number-1);
				}
			 if (c<d&&d<b){
			 	time=time+abs(d-b);
			 	printf ("%d %d %d\n",d,time,number);
			 	printf ("%d %d %d\n",c,time+abs(d-c),number-1);
			 }	
		   }
				
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		return 0;
}
