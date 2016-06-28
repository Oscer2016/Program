#include<stdio.h>

#if(0)

//互满数 

int hms(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	return s;
}
int main(){
	int i,j;
	for(i=0;i<=10000;i++){
		j=hms(i);
		if(i<j&&hms(j)==i){
			printf("%d %d\n",i,j);
		}
	}
}

#endif


#if(0)

//完全数 

int main(){
	int i,j,k;
	for(i=1;i<=1000;i++){
		k=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				k+=j;
			}
		}
		if(k==i){
			printf("%d\n",k);
		} 
	}
} 

#endif

#if(0)
 
//连续正整数之和

#include<stdio.h>

int main()
{
    int n, a, b, sum,i;    
    scanf("%d", &n);
    a = 1;
    b = a + 1;
    sum = 0;
    int flag = 0;
    while(b != a+1 || sum < n){
                
        if(sum < n){
            b ++;              
        }
        else{
            a ++;
            b = a + 1;        
        }
        sum = (a + b) * (b - a + 1) / 2;
        if(sum == n){
            flag = 1;
            printf("%d=",n);
            for(i=a;i<=b;i++){
                printf("%d",i);
                if(i==b){
                    printf("\n");
                }
                else{
                    printf("+");
                }
            }   
        }
        
    }
        if(flag == 0)
            printf("NONE");
    return 0;

}
#endif
