#include<stdio.h>
#include<math.h>

int main(){
	long long int a,b,c,d;
	double D,x1,x2;
	// input the coefficient
		printf("enter respective variables\n");
		printf("ax^2 + bx + c = 0\n");
		scanf("%lld %lld %lld",&a,&b,&c);

	// calculating discriminant
		d= (b*b)-(4*a*c);
		
		if(d<0 || (a==0 && b==0) || (b==0 && a*c>0)){
			printf("NO REAL SOLUTION IS PRESENT\n");
		}
		else if(a==0 && b==0 && c==0){
			printf("INFINTELY MANY SOLUTION EXIST");
		}
		else if(d==0 && a!=0){
			x1=(-b/(2*a));
			printf("ONLY ONE SOLUTION EXIST WHICH IS X=%2lf\n",x1);
		}
		else if(a==0){
			x1=(-c/b);
			printf("ONLY ONE SOLUTION EXIST WHICH IS X=%2lf\n",x1);
		}
		else if(d>0){
			D=sqrt(d);
			x1=((-b-D)/(2*a));
			x2=((-b+D)/(2*a));
			printf("THE TWO SOLUTIONS ARE X1=%2lf | X2=%2lf\n",x1,x2);
		}

	return 0;
}
