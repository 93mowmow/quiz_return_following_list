#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define random_number_size 9

int main(void){

	int i = 0;
	int a = 0;
	int k = 100;
	char word[10] = "word";
	char ch;
	int flag = 0;
	int word_flag = 0;
	srand(time(NULL)); 

	while(k>0){

		for(i=0;i<4;i++){
			
			if (word_flag == 0)
				a=rand()%random_number_size;
			else
				a=rand()%random_number_size+1;
				
			if(a>4){
				
				flag = 0;
				word_flag = 1;
				printf("%c",word[i]);
			
			}else{
			
				if(a==0){
				
					word_flag = 0;
					printf("");
				
				}else{	
				
					word_flag = 0;
				
					if (flag == 1)
						continue;
					else{
						printf("%d",a);
						flag = 1;
					}
				}
			
		    }
											
		}//end of for
		
		word_flag = 0;
		flag = 0;
		printf("\n");
		k--;
	}

	ch = getchar();
} //end of main
