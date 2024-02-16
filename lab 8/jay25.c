#include <stdio.h>
void main(){
	int i=101,c;
	while(i<200){
		if(i%7==0){
			if(i%5!=0){
				printf("%d\n",i );
			}
		}
	i++;
	}
}