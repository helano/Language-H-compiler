#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<cstring>

using namespace std;

int estado =0;

 

int ler_codigo(char string[]){
	estado = 1;
	
        int i=0;
        int length = strlen(string);
        printf("    token size: %d  ", length);
       
              
			if ( string[i]== 't'){
				estado++;
				 if (string[i+1]== 'e'){
				 	estado++;
				 	  if(string[i+2]== 'x'){
				 	  	 estado++;
				 	  	   if (string[i+3]== 't' && (i+3)==(length-1)){
				 	  	   		estado++;
				 	  	   		     return 1;
							  }else 
							  	return -1;
					   }else 
					   		return -1;
				 }else 
				 	return -1;
					
			}else{
			
			
				 if (string[i]== 'f'){
					 	estado++;
					 	  if(string[i+1]== 'o'){
					 	  	 estado++;
					 	  	   if (string[i+2]== 'r' && (i+2)==(length-1)){
					 	  	   		estado++;
					 	  	 			 	 return 2;
										
										}else
					 	  	   		   return -1;
								  }else{
								  	return -1;
								  }
						   }else{
						   	
								   		if (string[i]=='V'){
							 	
							 	while(i<strlen(string)){
								 
														 	
							 	   if (string[i]=='_' || (string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z') || (string[i]>='0' && string[i]<='9')){
							 			i++;
										  	
									}else{
										return -1;
									}
									
									
								}
								return 3;
								
							 }
						   		
						   }
				
					 } 
					 
			
        
        
        

        
    
	
	
 }





void print_value (int i){
		switch (i){
		
		case 1: 
			printf ("Type Text \n");
			break;
		case 2:
		    printf ("Loop structure FOR\n")	;
		    break;
		case 3:
		    printf("variable\n");
		    break;
		case 4: 
			printf("operador relacional\n");
			break;	
		default: 
			printf("can not indentify\n");
			break;
		
	}
	
	
	
	
}


int main(){
	char codigo [200] = {'0'};
	char* word;
	int p=0;
	




	printf("-------------------Lexical Analises : Language H------------------------\n");
	printf("Expression:");
	gets(codigo);
    	
    	word = strtok(codigo, " ");
    	while (word != NULL){
    		printf("%s", word);
    		
    		print_value(ler_codigo(word));
    		word = strtok(NULL, " ");
    		
		}
		
	
	
        
     
         
         


	



	
}
