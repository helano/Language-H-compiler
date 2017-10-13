#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cstring>

using namespace std;

int estado =0;

 

int ler_codigo(char string[]){
	estado = 1;
	
        int i=0;
        int length = strlen(string);
        printf("    token size: %d  ", length);
        
        
        
      if (string[i]=='o'){
			if(string[i+1]=='r'){
				return 16;
			}      	
	  }else{
	 
        
        if (string[i]=='a'){
			
			if (string[i+1]=='n'){
				if(string[i+2]=='d'){
					return 15;
				}
			}	
				

		}else{
		
        
        
        if (length <=2){
        	if (length ==1){
			
	        	if (string[i]=='='){
	        		return 4;
	        	}
	        	if(string[i]=='>'){
					return 5;	
				}
				if(string[i]=='<'){
					return 6;	
				}
				if(string[i]=='+'){
					return 11;
				}
				if (string[i]=='-'){
					return 12;
				}
				if(string[i]=='*'){
					return 13;
				}
				if(string[i]=='/'){
					return 14;
				}
				
				return -1;
			}else {
				 	if (string[i]=='='){
	        		    if (string[i+1]=='='){
	        		    	return 7;
						}
						return -1;
	        		}else{
	        			if (string[i]=='!'){
							if(string[i+1]=='='){
								return 8;
							}else{
								return -1;
							}
						}else{
							if (string[i+1]=='='){
								 if (string[i]=='>'){
								 	return 9;
								 }if (string[i]=='<'){
								 	return 10;
								 }else {
								 	return -1;
								 }
								
							}else {
								return -1;
							}
							
							
						}
	        		
					}
					
				
			}
	
			
		}
		
		
		
		
		
		
		
		else {
		
       
              
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
    }
}
        

        
    
	
	
 }





void print_value (int i){
		switch (i){
		
		case 1: 
			printf ("Type : TEXT \n");
			break;
		case 2:
		    printf ("Loop structure: FOR\n")	;
		    break;
		case 3:
		    printf("variable\n");
		    break;
		case 4: 
			printf("Relational Operator : ASSIGNMENT\n");
			break;
		case 5:
			printf("Relational Operator : MAJOR\n");
			break;
		case 6:
			printf("Relational Operator : MINOR\n");
			break;
		case 7:
			printf("oRelational Operator : IQUAL\n");
			break;
		case 8:
			printf("Relational Operator : DIFFERENT\n");
			break;
		case 9:
			printf("Relational Operator : MAJOR OR IQUAL\n");
			break;
		case 10:
			printf("Relational Operator : MINOR OR IQUAL\n");
			break;	
		case 11:
			printf("Math Operator : PLUS\n");
			break;	
		case 12:
			printf("Math Operator : SUBTRACTION \n");
			break;	
		case 13:
			printf("Math Operator : MULTIPLICATION\n");
			break;	
		case 14:
			printf("Math Operator : DIVISION\n");
			break;
		case 15:
			printf("Logic Operator : AND\n");
			break;
		case 16:
			printf("Logic Operator : OR\n");
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
	


while (true){


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
	
	
        
     
         
         


	



	
}
