#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Inorder to balance the probility of "word" char and numner(1,2,3,4), I chose nine for the random number size.
*/
#define random_number_size 9

int main(void){

	int i = 0;
	int a = 0;
	int k = 100; // numner of samples
	char word[10] = "word";
	char ch;
	int flag = 0; // flag for last digit is number(1,2,3,4)
	int word_flag = 0; // flas for last digit is "word" char
	srand(time(NULL)); // Use time as the random seed

	while( k > 0 ){

		for(i=0;i<4;i++){
			
			if (word_flag == 0)
				a=rand()%random_number_size;
			else
				a=rand()%random_number_size+1; //This will skip the number "0" case, so that a NULL will be skipped.
				
			if( a > 4 ){ // 5,6,7,8,9
				
				flag = 0;
				word_flag = 1;
				printf("%c",word[i]); // base on the string "word" digits
			
			} else { 
				
				word_flag = 0;
				
				if( a == 0 ){	
					
					printf(""); // a NULL case
				
				} else { // 1,2,3,4
				
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
