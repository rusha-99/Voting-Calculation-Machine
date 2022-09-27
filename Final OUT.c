#include <stdio.h>
#include <stdlib.h> 
#include<conio.h>
#include<time.h>



#define CANDIDATE1 "Gotabhaya Rajapaksha"
#define CANDIDATE2 "Sajith Premadasa"
#define CANDIDATE3 "Anura Kumara Dissanayake"
#define CANDIDATE4 "Maithripala Sirisena"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10];
   
    do
{
	
    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  LOGIN FIRST  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n\n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n\n                       ENTER PASSWORD:-");
	while(i<5)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if (strcmp(uname,"user")==0 && strcmp(pword,"pass")==0){
	printf("  \n\n\n       WELCOME !! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\nPress any key to continue...");
	getch();//holds the screen
	break;
	}else if(strcmp(uname,"CP200")==0 && strcmp(pword,"200")==0){
		printf("  \n\n\n       	WELCOME !! Mahima YOUR LOGIN IS SUCCESSFUL");
	 	printf("\n\n	Name :Mahima Hettiarachchi");
		printf("\n	Province :Northwestern province");
		printf("\n	District :Kurunegala");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP201")==0 && strcmp(pword,"201")==0){
		printf("  \n\n\n       	WELCOME !! Gayandi YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Gayandi Panditharathna");
		printf("\n	Province :Sabaragamuwa province");
		printf("\n	District :Kegalle");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP202")==0 && strcmp(pword,"202")==0){
		printf("  \n\n\n       	WELCOME !! Gayuru YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Gayaru wijayawardhana");
		printf("\n	Province :Central province");
		printf("\n	District :Mathale");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP203")==0 && strcmp(pword,"203")==0){
		printf("  \n\n\n       	WELCOME !! Githma YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Githma Thathsarani");
		printf("\n	Province :Central province");
		printf("\n	District :Kandy");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP204")==0 && strcmp(pword,"204")==0){
		printf("  \n\n\n       	WELCOME !! Chapa YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Chapa Hewawasam");
		printf("\n	Province :Central province");
		printf("\n	District :Kandy");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP205")==0 && strcmp(pword,"205")==0){
		printf("  \n\n\n       	WELCOME !! Hirunika YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Hirunika Siriwardhana");
		printf("\n	Province :Sabaragamuwa province");
		printf("\n	District :Kegalle");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP206")==0 && strcmp(pword,"206")==0){
		printf("  \n\n\n       	WELCOME !! Kavindhya YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Kavindhya Dhananjanee");
		printf("\n	Province :Sabaragamuwa province");
		printf("\n	District :Kegalle");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP207")==0 && strcmp(pword,"207")==0){
		printf("  \n\n\n       	WELCOME !! Pamudi YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Pamudi Kavindya");
		printf("\n	Province :Northwestern province");
		printf("\n	District :Kurunegala");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP209")==0 && strcmp(pword,"209")==0){
		printf("  \n\n\n       	WELCOME !! Raveesha YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Raveesha Thathsarani");
		printf("\n	Province :Sabaragamuwa province");
		printf("\n	District :Rathnapura");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP210")==0 && strcmp(pword,"210")==0){
		printf("  \n\n\n       	WELCOME !! Sewwandi YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Sewwandi Gunasinghe");
		printf("\n	Province :Western province");
		printf("\n	District :Colombo");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP211")==0 && strcmp(pword,"211")==0){
		printf("  \n\n\n       	WELCOME !! Shashika YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Shashika Jayathilake");
		printf("\n	Province :Central province");
		printf("\n	District :NuwaraEliya");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP212")==0 && strcmp(pword,"212")==0){
		printf("  \n\n\n       	WELCOME !! Tharusha YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Tharusha Pathirana");
		printf("\n	Province :Sabaragamuwa province");
		printf("\n	District :Kegalle");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP213")==0 && strcmp(pword,"213")==0){
		printf("  \n\n\n       	WELCOME !! Vihanga YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Vihanga Herath");
		printf("\n	Province :Sabaragamuwa province");
		printf("\n	District :Kegalle");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP214")==0 && strcmp(pword,"214")==0){
		printf("  \n\n\n       	WELCOME !! Kavindu  YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Kavindu Weerakoon");
		printf("\n	Province :Central province");
		printf("\n	District :Kandy");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP215")==0 && strcmp(pword,"215")==0){
		printf("  \n\n\n       	WELCOME !! Yohan YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Yohan Lakshitha");
		printf("\n	Province :Northwestern province");
		printf("\n	District :Kurunegala");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP216")==0 && strcmp(pword,"216")==0){
		printf("  \n\n\n       	WELCOME !! Thimuthu YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Thimuthu Aberathne");
		printf("\n	Province :Central province");
		printf("\n	District :Kandy");
	getch();//holds the screen
	break;	
	}else if(strcmp(uname,"CP217")==0 && strcmp(pword,"217")==0){
		printf("  \n\n\n       	WELCOME !! Anuradha YOUR LOGIN IS SUCCESSFUL");
		printf("\n\n	Name :Anuradha Kakirideniya");
		printf("\n	Province :Western province");
		printf("\n	District :Colombo");
	getch();//holds the screen
	break;		
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();//holds the screen
		
	}
}
	while(a<=50);
	if (a>50)
	{
		printf("\nSorry you have entered the wrong username and password for  times!!!");
	
		getch();
		
		
		}
		system("cls");	
}

void info(){
	printf("			####Choose your vote Wisely####\n\n");
	printf("\t		Information about Candidates\n\n");
	printf("\tCANDIDATE1:- 	Mr.Gotabhaya Rajapaksha\n\n");
	printf("	*Born to a prominent political family from the Southern Province.\n	*Rajapaksa was educated at Ananda College, Colombo.\n	*Joined the Sri Lankan Army in April 1971.\n	*He read for a postgraduate diploma in information technology from the University of Colombo.\n");	
	printf("\n");
	printf("\tCANDIDATE2:- 	Mr.Sajith Premadasa\n\n");
	printf("	*Premadasa is the son of Ranasinghe Premadasa, the President of Sri Lanka (1989 – 1993).\n	*He was educated at Royal College, Colombo and Mill Hill School before entering London School of Economics.\n	*He represented the Hambantota District and joined the United National Party 1993.\n");
	printf("\n");
	printf("\tCANDIDATE3:-	Mr.Anura Kumara Dissanayake\n\n");
	printf("	*Anura Kumara Dissanayaka is a Sri Lankan politician.\n	*Current Leader of the Janatha Vimukthi Peramuna and a member of the Parliament of Sri Lanka.\n	*He served for a time as Cabinet Minister of Agriculture, Livestock, Lands and Irrigation.\n");
	printf("\n");
	printf("\tCANDIDATE4:-	Mr.Maithripala Sirisena\n\n");
	printf("	*Mr.Maithripala Sirisena educated at Thopawewa Maha Vidyalaya and Rajakeeya Madya Maha Vidyalaya Polonnaruwa.\n	*In 1976 he became a grama sevaka niladhari (village officer) but resigned in 1978.\n	*In 1997 President Kumaratunga promoted him to the Cabinet, appointing him Minister of Mahaweli Development.\n");
	
	getch();	
    system("cls");


}

int first( )
{
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb          VOTING MANAGEMENT SYSTEM             \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb       -Code Generator Final Project-          \xdb\n");  
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb        Presidential Election 2024             \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf(" \n\t Press Any Key To Continue:");
	
	getch();	
    system("cls");
    
    
}

void castVote(){ 
int choice;    
printf("\n\n 		#### Please choose your Candidate ####\n\n");
printf("\n 		1. %s", CANDIDATE1);
printf("\n 		2. %s", CANDIDATE2);
printf("\n 		3. %s", CANDIDATE3);
printf("\n 		4. %s", CANDIDATE4);
printf("\n 		5. %s", "None of These");
   

printf("\n\n 			Input your choice (1 - 5) : ");
scanf("%d",&choice);


switch(choice){
    case 1: votesCount1++; break;  // incrementing the votes count of each candidate
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n 			thanks for vote !!");

	getch();	
    system("cls");

}

void votesCount(){//displaying each candidates's vote count
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){//Analizing the vote count and displaying the leading candidate
    printf("\n\n  \t\t\t#### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("\t\t\t[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("\t\t\t[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("\t\t\t[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("\t\t\t[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}

int main(){
	first();
	login();
	info();

	
	
	int i,choice;


do{
printf("\n\n 		###### Welcome to Election/Voting 2024 #####");
printf("\n\n 		1. Cast the Vote");
printf("\n 		2. Find Vote Count");
printf("\n 		3. Find leading Candidate");
printf("\n 		0. Exit");

printf("\n\n 			Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();  login();
break;
case 2: votesCount();getch();system("cls");
break;
case 3: getLeadingCandidate();getch();system("cls");
break;
case 0: printf("\nYour votings are successfully recorded.\nPlease go to code containing folder to get the final record.\n\tThanks for voting.. ");break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);


getchar();//hold the screen

	time_t t;   // not a primitive datatype
    time(&t);

    printf("\n\n\nVoting Ended at: %s", ctime(&t));
    printf("\nSoftware by TEAM_SGGT  ");


	FILE* fileWrite;
	fileWrite=fopen("Votes.doc","w");
fprintf(fileWrite,"\n\n \t##### Voting Statics ####\n\n");	
fprintf(fileWrite,"\n %s - %d ", CANDIDATE1, votesCount1);
fprintf(fileWrite,"\n %s - %d ", CANDIDATE2, votesCount2);
fprintf(fileWrite,"\n %s - %d ", CANDIDATE3, votesCount3);
fprintf(fileWrite,"\n %s - %d ", CANDIDATE4, votesCount4);
fprintf(fileWrite;"\n %s - %d ", "Spoiled Votes", spoiledtvotes); 


  fprintf(fileWrite,"\n\n8th Executive President of the Democratic Socialist Republic of Sri Lanka \n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    fprintf(fileWrite,"\t**%s**",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    fprintf(fileWrite,"\t**%s**",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    fprintf(fileWrite,"\t**%s**",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    fprintf(fileWrite,"\t**%s**",CANDIDATE4);
    else
    fprintf(fileWrite,"----- Warning !!! No-win situation----");   
	fprintf(fileWrite,"\n\n\nVoting Ended at: %s", ctime(&t));
	fprintf(fileWrite,"\n\nSoftware by TEAM_SGGT  ");
    
    
	fclose(fileWrite);


	return 0;
}
