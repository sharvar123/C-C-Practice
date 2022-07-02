/*Lets Play KBC
	
	You have to ask 15 Qustion based on Codeing consisting of 5 option out of 5 , 1 option is common i.e. Quit
	
	In this game there are certain stages if the candidate cross that particular stage then the minimum amount will be fixed for him/her there are two stages 1st stage is at qus no 5 and 2nd stage is qus  no 10
	if candidate cross question no 5 the minimum amout will be fixed i.e. 10,000

	if candidate does'nt want to continue the game then need to press on quite the output should be maximum winning amount
	
	15		?1 Crore
	14		?50,00,000	
	13		?25,00,000	
	12		?12,50,000	
	11		?6,40,000
	10		?3,20,000	
	9		?1,60,000//// 
	8		?80,000
	7		?40,000
	6		?20,000	
	5		?10,000////
	4		?5,000
	3		?3,000
	2		?2,000
	1		?1,000*/
#include<stdio.h>

int main(){
	int ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13,ch14,ch15;
	//Question 1
	printf("\t\t\tLet's Play KBC\n");
	
	printf("Que 1. 1+1=?\nChoices:\n\t1.2\n\t2.1\n\t3.4\n\t4.3\n\t5.Quit\n"); //correct 1
	scanf("%d",&ch1);
	
	
	if(ch1==5){
		printf("Game Quit Successfully\n\t\tWinning Amount:0");
	}
	else if(ch1==1){
		//Question 2
		printf("\t\tCorrect!!!!!!");
		printf("\n**********************************************************************\n");
		printf("\t\t\t\t\t\tCurrent Amount:1,000\n");
		printf("Que 2.\nChoices:\n\t1.\n\t2.Correct\n\t3.\n\t4.\n\t5.Quit\n");//correct ans 2
		scanf("%d",&ch2);
		if(ch2==5){
			printf("Game Quit Successfully\n\t\tWinning Amount:1,000");	
		}
		else if(ch2==2){
			//Question 3
			printf("\t\tCorrect!!!!!!");
			printf("\n**********************************************************************\n");
			printf("\t\t\t\t\t\tCurrent Amount:2,000\n");
			printf("Que 3. \nChoices:\n\t1.\n\t2.\n\t3.Correct\n\t4.\n\t5.Quit\n");//correct ans 3
			scanf("%d",&ch3);
			if(ch3==5){
				printf("Game Quit Successfully\n\t\tWinning Amount:2,000");	
			}
			else if(ch3==3){
				//Question 4
				printf("\t\tCorrect!!!!!!");
				printf("\n**********************************************************************\n");
				printf("\t\t\t\t\t\tCurrent Amount:3,000\n");
				printf("Que 4.\nChoices:\n\t1.\n\t2.\n\t3.\n\t4.Correct\n\t5.Quit\n"); //correct 4
				scanf("%d",&ch4);
		
		
				if(ch4==5){
					printf("Game Quit Successfully\n\t\tWinning Amount:3,000");
				}
				else if(ch4==4){
					//Question 5
					printf("\t\tCorrect!!!!!!");
					printf("\n**********************************************************************\n");
					printf("\t\t\t\t\t\tCurrent Amount:5,000\n");
					printf("Que 5.\nChoices:\n\t1.Correct\n\t2.\n\t3.\n\t4.\n\t5.Quit\n");//correct ans 1
					scanf("%d",&ch5);
					if(ch5==5){
						printf("Game Quit Successfully\n\t\tWinning Amount:5,000");	
					}
					else if(ch5==1){
						//Question 6
						printf("\t\tCorrect!!!!!!");
						printf("\n**********************************************************************\n");
						printf("\t\t\t\t\t\tCurrent Amount:10,000\n");
						printf("Que 6.\nChoices:\n\t1.\n\t2.Correct\n\t3.\n\t4.\n\t5.Quit\n");//correct ans 2
						scanf("%d",&ch6);
						if(ch6==5){
							printf("Game Quit Successfully\n\t\tWinning Amount:10,000");	
						}
						else if(ch6==2){
							printf("\t\tCorrect!!!!!!");
						    printf("\n**********************************************************************\n");
							printf("\t\t\t\t\t\tCurrent Amount:20,000\n");
							printf("Que 7.\nChoices:\n\t1.\n\t2.\n\t3.Correct\n\t4.\n\t5.Quit\n");//correct ans 2
						    scanf("%d",&ch7);
						    
						    if(ch7==5){
						    	printf("Game Quit Successfully\n\t\tWinning Amount:20,000");
							}
							else if(ch7==3){
								printf("\t\tCorrect!!!!!!");
						    	printf("\n**********************************************************************\n");
								printf("\t\t\t\t\t\tCurrent Amount:40,000\n");
								printf("Que 8.\nChoices:\n\t1.\n\t2.\n\t3.\n\t4.Correct\n\t5.Quit\n");//correct ans 2
						    	scanf("%d",&ch8);
						    	if(ch8==5){
							    	printf("Game Quit Successfully\n\t\tWinning Amount:40,000");
								}
								else if(ch8==4){
									printf("\t\tCorrect!!!!!!");
							    	printf("\n**********************************************************************\n");
									printf("\t\t\t\t\t\tCurrent Amount:80,000\n");
									printf("Que 9.\nChoices:\n\t1.\n\t2.\n\t3.Correct\n\t4.\n\t5.Quit\n");//correct ans 2
							    	scanf("%d",&ch9);
							    	if(ch9==5){
								    	printf("Game Quit Successfully\n\t\tWinning Amount:80,000");
									}
									else if(ch9==3){
										printf("\t\tCorrect!!!!!!");
								    	printf("\n**********************************************************************\n");
										printf("\t\t\t\t\t\tCurrent Amount:1,60,000\n");
										printf("Que 10.\nChoices:\n\t1.\n\t2.\n\t3.Correct\n\t4.\n\t5.Quit\n");//correct ans 2
								    	scanf("%d",&ch10);
								    	if(ch10==5){
								    		printf("Game Quit Successfully\n\t\tWinning Amount:1,60,000");
										}
										else if(ch10==3){
											//Question 11
											printf("\t\tCorrect!!!!!!");
									    	printf("\n**********************************************************************\n");
											printf("\t\t\t\t\t\tCurrent Amount:3,20,000\n");
											printf("Que 11.\nChoices:\n\t1.Correct\n\t2.\n\t3.\n\t4.\n\t5.Quit\n");//correct ans 2
									    	scanf("%d",&ch11);
									    	if(ch11==5){
									    		printf("Game Quit Successfully\n\t\tWinning Amount:3,20,000");
											}
											else if(ch11==1){
												//question 12
												printf("\t\tCorrect!!!!!!");
										    	printf("\n**********************************************************************\n");
												printf("\t\t\t\t\t\tCurrent Amount:6,40,000\n");
												printf("Que 12.\nChoices:\n\t1.\n\t2.\n\t3.\n\t4.Correct\n\t5.Quit\n");//correct ans 2
										    	scanf("%d",&ch12);
										    	if(ch12==5){
										    		printf("Game Quit Successfully\n\t\tWinning Amount:6,40,000");
												}
												else if(ch12==4){
													//Question13
													printf("\t\tCorrect!!!!!!");
											    	printf("\n**********************************************************************\n");
													printf("\t\t\t\t\t\tCurrent Amount:12,50,000\n");
													printf("Que 13.\nChoices:\n\t1.\n\t2.Correct\n\t3.\n\t4.\n\t5.Quit\n");//correct ans 2
											    	scanf("%d",&ch13);
											    	if(ch13==5){
											    		printf("Game Quit Successfully\n\t\tWinning Amount:12,50,000");
													}
													else if(ch13==2){
														//Question 14
														printf("\t\tCorrect!!!!!!");
												    	printf("\n**********************************************************************\n");
														printf("\t\t\t\t\t\tCurrent Amount:25,00,000\n");
														printf("Que 14.\nChoices:\n\t1.\n\t2.\n\t3.Correct\n\t4.\n\t5.Quit\n");//correct ans 2
												    	scanf("%d",&ch14);
												    	if(ch14==5){
												    		printf("Game Quit Successfully\n\t\tWinning Amount:25,00,000");
														}
														else if(ch14==3){
															printf("\t\tCorrect!!!!!!");
													    	printf("\n**********************************************************************\n");
															printf("\t\t\t\t\t\tCurrent Amount:50,00,000\n");
															printf("Que 15.\nChoices:\n\t1.Correct\n\t2.\n\t3.\n\t4.\n\t5.Quit\n");//correct ans 2
													    	scanf("%d",&ch15);
															if(ch15==5){
																printf("Game Quit Successfully\n\t\tWinning Amount:50,00,000");
															}
															else if(ch15==1){
																printf("\t\tCorrect!!!!!!");
																printf("\t\t\t\tWinning Amount:1,00,00,000\n");
																printf("\n\n\t\t\tCOnGrAtILaTiOnS!!!");
												
															}
															else{
																printf("\n15 Wrong answer \n\t\tWinning Amount:1,60,000");
															}	
														}
														else{
															printf("\n14 Wrong answer \n\t\tWinning Amount:1,60,000");	
														}
													}
													else{
														printf("\n13 Wrong answer \n\t\tWinning Amount:1,60,000");
													}
												}
												else{
													printf("\n12 Wrong answer \n\t\tWinning Amount:1,60,000");
												}
											
											}
											else{
												printf("\n11 Wrong answer \n\t\tWinning Amount:1,60,000");
											}
										}
										else{
											printf("\n10 Wrong answer \n\t\tWinning Amount:1,60,000");
										}	
									}
									else{
										printf("\n9 Wrong answer \n\t\tWinning Amount:10,000");
									}	
								}
								else{
									printf("\n8 Wrong answer \n\t\tWinning Amount:10,000");
								}
							    	
							}
							else{
								printf("\n7 Wrong answer \n\t\tWinning Amount:10,000");
							}
						}
						else{
							printf("\n6 Wrong Answer \n\t\tWinning Amount:10,000");
						}
				    }
				    else{
						printf("\n5 Wrong Answer \n\t\tWinning Amount:0");
				    }
				}
			    else{
				    printf("\n4 Wrong Answer \n\t\tWinning Amount:0");
				}
			}
			else{
				printf("\n3 Wrong Answer \n\t\tWinning Amount:0");
			}
		}
		else{
			printf("\n2 Wrong Answer \n\t\tWinning Amount:0");
		}
	}
	else{
		printf("\nQuestion 1 Wrong Answer \n\t\tWinning Amount:0");
	}
	
	return 0;
	
}
















