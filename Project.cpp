#include<stdio.h>//Use for standard I/O Operation
#include<windows.h>//example is gotoxy
#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>

char ans=0;//To yes or no 
int ok;
int b;
int valid=0;//for check valid or not
//Function Prototype
void FrontScreen();//prototype of frontscreen function
void Header();//prototype of Header function
void Menu();//prototype of Menu function
void LoginScreen();//prototype of Loginscreen function
void Add_rec();//prototype of add patient record function
void list();//prototype of list patient record function
void Search();//prototype of search patient record function
void Edit();//prototype of edit patient record function
void Dlt();//prototype of delete patient record function
void exit();//prototype of exit from program
void maximizeWindow(){ //for maximize the screen
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);
}
void gotoxy(short x, short y) {//to select place any
COORD pos = {x, y};//sets co-ordinates in (x,y).
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
struct Patient_Information//global variable
{
	int S_No=1;
	char First_Name[15];
	char Last_Name[15]; 
	int age;
	char Gender;
	char Address[30];
	char Contact_No[15];
	char Email[30];
	int Patient_Problem;
	int Doctor_Name;
};

struct Patient_Information  patient,temp;

int main()
{
	
	FrontScreen();
	Header();
	LoginScreen();
	

}

void FrontScreen() //function for front welcome screen
{
		maximizeWindow();
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n");
printf("\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t");
printf("\n\n\n\n\n Enter any key to continue......\n");
	getch();//Use to holds screen for some seconds
	system("cls");//Use to clear screen	
}

void Header()//function for Header screen
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                           		                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|                                                                                       |@@\n");
printf("\t\t\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n");
printf("\t\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t");
}

void Menu()//function decleration
{
	system("cls");//use to clear screen
	int x;
	Header();// call Header function
	printf("\n\n\n\n\n\t\t\t\t\t\t\t1. Add Patients Record\n");
	printf("\n\t\t\t\t\t\t\t2. List Patients Record\n");
	printf("\n\t\t\t\t\t\t\t3. Search Patients Record\n");
	printf("\n\t\t\t\t\t\t\t4. Edit Patients Record\n");
	printf("\n\t\t\t\t\t\t\t5. Delete Patients Record\n");
	printf("\n\t\t\t\t\t\t\t6. Exit\n");
	printf("\n\n\n \n\t\t\t\t\t\t\tChoose any one 1 to 6:");
	scanf("%i", &x);


	switch(x)//switch to differeht case
	{
	
	case 1:
		Add_rec();//Add_rec function is called
    	break;
    case 2:
		list();//list function is called
    	break;
    case 3:
    	Search();
    	break;
    case 4:
    	Edit();
    	break;
    case 5:
    	Dlt();
    	break;
    case 6:
    	exit();
    	break;

	default:
		printf("\t\t\tPlease Enter Right Value :)");
		getch();//holds screen
	}//end of switch

}


void LoginScreen()//function for login screen
{
//list of variables	
int count=0; //for count to check how much time login
char Username[15];
char Password[15];
char Output_Username[25]="admin";
char Output_Password[15]="12345";
int i =0;
char ch;
do
{
	printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",&Username);
	printf("\n\n\t\t\t\t\tPASSWORD:");
	while(1)
   {
	ch=getch();
	if(ch==13)
	{
		Password[i]='\0';
		break;
	}
	else if(ch== 8)
	{
		if(i>0)
		{
			i--;
			printf("\b \b");
		}
	}
	else if(ch==9||ch==32)
	{
		continue;
	}
	else
	{
		Password[i]=ch;
		i++;
		printf("*");
	}
   }
	
	
	if (strcmp(Username,Output_Username)==0 && strcmp(Password,Output_Password)==0)//strcmp to compare two variable to check the username and passwod
	{
		printf("\n\n\n\t\t\t\t\t...Login Successfull...");
		getch();
		Menu();//call Menu function
		break;
	}
	else
	{
		printf("\n\n\n\n\t\t\tPassword in incorrect:( Try Again :)");
		count++;
		getch();
		LoginScreen();
	}

}
while(count<=3);
	if(count>3)
	{
	printf("\n\n\n\t\t\tYou have cross the limit. You cannot login. :( :(");
	getch();
    exit();
	}

system("cls");
}

void Add_rec(void)
{
	
	system("cls");
	Header();//call Header function
	//list of variables
	char ans;
	FILE*mz;//file pointer
	mz=fopen("Record.dat","a");//open file in write mode

	printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
	/* S.no */
	printf("\n\t\t\tS.no: ");
	printf("%d\n",patient.S_No++);
	
	/* First Name */
	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",patient.First_Name);
	patient.First_Name[0]=toupper(patient.First_Name[0]);
	if(strlen(patient.First_Name)>20||strlen(patient.First_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(patient.First_Name);b++)
		{
			if (isalpha(patient.First_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
	
	/* ********************************************** Last name ************************************************ */
	B:
	printf("\n\t\t\tLast Name: ");
    scanf("%s",patient.Last_Name);
    patient.Last_Name[0]=toupper(patient.Last_Name[0]);
    if(strlen(patient.Last_Name)>20||strlen(patient.Last_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
		goto B;
	}
	else
	{
		for (b=0;b<strlen(patient.Last_Name);b++)
		{
			if (isalpha(patient.Last_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\tInvalid character :(  Enter again :)");
			goto B;
		}
	}
/* ******************************************* Gender ************************************************************** */	    
	do
	{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&patient.Gender);
		if(toupper(patient.Gender)=='M'|| toupper(patient.Gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
    scanf(" %i",&patient.age);
/* **************************************** Address ******************************************************************* */    
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",patient.Address);
    patient.Address[0]=toupper(patient.Address[0]);
    if(strlen(patient.Address)>20||strlen(patient.Address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		goto C;
	}
	
}while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",patient.Contact_No);
    if(strlen(patient.Contact_No)!=11)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 11 numbers. Enter again please don't enter 0 in contect' :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(patient.Contact_No);b++)
		{
			if (!isalpha(patient.Contact_No[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);
/* ************************************************** Email ******************************************** */
do
	{
	z:
    printf("\n\t\t\tEmail: ");
    scanf("%s",patient.Email);
    if (strlen(patient.Email)>30||strlen(patient.Email)<8)
    {
    	
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
	}
	else
	{
    		if(strstr(patient.Email,"@")==NULL)
    		{
    			printf("\tEnter @ in email address :");
    			goto z;
			}
		
	}

}while(strlen(patient.Email)>30||strlen(patient.Email)<8);
/* ********************************************************* Problem *********************************************** */
	printf("\t\t\tSelect one them");
	printf("\n\t\t\tPress 1 = Corona");
	printf("\n\t\t\tPress 2 = Taifat");
	printf("\n\t\t\tPress 3 = Diabetes");
	printf("\n\t\t\tPress 4 = Cancer");
	printf("\n\t\t\tPress 5 = BloodPressure");
    E:
    printf("\n\t\t\tProblem: ");
    scanf("%d",&patient.Patient_Problem);
    switch (patient.Patient_Problem)
    {
    	case 1:
    		printf("\t\t\tCorona");
    		break;
    	case 2:
    		printf("\t\t\tTaifat");
    		break;
    	case 3:
    		printf("\t\t\tDiabetes");
    		break;
    	case 4:
    		printf("\t\t\tCancer");
    		break;
    	case 5:
    		printf("\t\t\tBloodPressure");
    		break;
    	default:
    		printf("Please Enter Under 1 To 5");
    	
	}
    if(sizeof(patient.Patient_Problem)<1)
	{
		printf("\n\t Invalid :( \t Enter Selected things :)");
		goto E;
	}
/* ********************************************** Prescribed Doctor **************************************** */	
printf("\n\t\t\tSelect one them");
	printf("\n\t\t\tPress 1 = Corona-----------------> Doctor Zain");
	printf("\n\t\t\tPress 2 = Taifat-----------------> Doctor Mubbashir");
	printf("\n\t\t\tPress 3 = Diabetes-----------------> Doctor Anus");
	printf("\n\t\t\tPress 4 = Cancer-----------------> Doctor Fatima");
	printf("\n\t\t\tPress 5 = BloodPressure-----------------> Doctor Yousuf");	
	F:
    printf("\n\t\t\tPrescribed Doctor:");
    scanf("%d",&patient.Doctor_Name);
    switch (patient.Doctor_Name)
    {
    	case 1:
    		printf("\t\t\tCorona");
    		break;
    	case 2:
    		printf("\t\t\tTaifat");
    		break;
    	case 3:
    		printf("\t\t\tDiabetes");
    		break;
    	case 4:
    		printf("\t\t\tCancer");
    		break;
    	case 5:
    		printf("\t\t\tBloodPressure");
    		break;
    	default:
    		printf("Please Enter Under 1 To 5");
	}
    
    if(sizeof(patient.Doctor_Name)<1)
	{
		printf("\n\t Invalid :( \t Enter Selected things :)");
		goto F;
	}
    
    fprintf(mz," %d %s %s %c %d %s %s %s %d %d\n",patient.S_No-1, patient.First_Name, 
	patient.Last_Name, patient.Gender, patient.age, patient.Address, patient.Contact_No, patient.Email, patient.Patient_Problem, patient.Doctor_Name);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(mz);//ek file is closed
   	G:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Add_rec();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		Menu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto G;
    }
    
}
/*VIEW RECORD*/
void list()
{
	int row;
	system("cls");
	Header();
	FILE *mz;
	mz=fopen("Record.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Patients Record !!!!!!!!!!!!!\n");
		gotoxy(1,40);//gotoxy to print the result in any line which you slected in x,y axis
		printf("S.No");
		gotoxy(6,40);
		printf("Full Name");
		gotoxy(25,40);
		printf("Gender");
		gotoxy(37,40);
		printf("Age");
		gotoxy(42,40);
		printf("Address");
		gotoxy(54,40);
		printf("Contact No.");
		gotoxy(69,40);
		printf("Email");
		gotoxy(93,40);
		printf("Problem");
		gotoxy(102,40);
		printf("Doctor\n");
		printf("=================================================================================================================");
		row=42;
		while(fscanf(mz,"%d %s %s %c %d %s %s %s %d %d\n",&patient.S_No,patient.First_Name,patient.Last_Name,&patient.Gender,&patient.age,patient.Address,patient.Contact_No,patient.Email, &patient.Patient_Problem, &patient.Doctor_Name)!=EOF)
		{
			gotoxy(1,row);
			printf("%d",patient.S_No);
			gotoxy(5,row);
			printf("%s %s",patient.First_Name,patient.Last_Name);
			gotoxy(25,row);
			printf("%c",patient.Gender);
			gotoxy(37,row);
			printf("%d",patient.age);
			gotoxy(42,row);
			printf("%s",patient.Address);
			gotoxy(54,row);
			printf("%s",patient.Contact_No);
			gotoxy(69,row);
			printf("%s",patient.Email);
			gotoxy(93,row);
			printf("%d",patient.Patient_Problem);
			gotoxy(102,row);
			printf("%d",patient.Doctor_Name);
			row++;
		}
		fclose(mz);
		getch();
		Menu();
}
void Search(void)
{
	int n;
	system("cls");
	Header();// call Header function
	FILE *mz;
	mz=fopen("Record.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Patients Record !!!!!!!!!!!!!\n");
	gotoxy(12,35);
	printf("\n Enter S.NO To view the Patient detail:");
	scanf("%d",&n);
	fflush(stdin);//flush buffer memory
	while(fscanf(mz,"%d %s %s %c %d %s %s %s %d %d\n",&patient.S_No, patient.First_Name, patient.Last_Name, &patient.Gender, &patient.age, patient.Address, patient.Contact_No, patient.Email, &patient.Patient_Problem, &patient.Doctor_Name)!=EOF)
	{
		if(patient.S_No == n)
		{
			gotoxy(1,40);//gotoxy to print the result in any line which you slected in x,y axis
			printf("S.No");
			gotoxy(6,40);
			printf("Full Name");
			gotoxy(25,40);
			printf("Gender");
			gotoxy(37,40);
			printf("Age");
			gotoxy(42,40);
			printf("Address");
			gotoxy(54,40);
			printf("Contact No.");
			gotoxy(69,40);
			printf("Email");
			gotoxy(93,40);
			printf("Problem");
			gotoxy(102,40);
			printf("Doctor\n");
			printf("=================================================================================================================");
			gotoxy(1,42);
			printf("%d",patient.S_No);
			gotoxy(5,42);
			printf("%s %s",patient.First_Name, patient.Last_Name);
			gotoxy(25,42);
			printf("%c",patient.Gender);
			gotoxy(37,42);
			printf("%d",patient.age);
			gotoxy(42,42);
			printf("%s",patient.Address);
			gotoxy(54,42);
			printf("%s",patient.Contact_No);
			gotoxy(69,42);
			printf("%s",patient.Email);
			gotoxy(93,42);
			printf("%d",patient.Patient_Problem);
			gotoxy(102,42);
			printf("%d",patient.Doctor_Name);
			printf("\n");
			break;
		}
	   }
	   if(n != patient.S_No)
	   {
		gotoxy(10,42);
		printf("Record not found!");
		getch();
	   }
	fclose(mz);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		Menu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Edit(void)
{
	FILE *mz, *replica;
  	int i,b, valid=0;
  	char ch;
  	int n;

  	system("cls");
  	Header();// call Header window
 	replica=fopen("temp.dat","w");
	mz=fopen("Record.dat","r");
	if(mz==NULL)
	{
		printf("\n\t you Can not open this file!! ");
		getch();
		Menu();
	}
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Patients Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,37);
	   	printf("Enter the S.No Number of the Patient : ");
	   	scanf(" %d",&n);
	   	fflush(stdin);
		gotoxy(12,15);
		
		if(replica==NULL)
		{
			printf("\n you Can not open this file");
			getch();
			Menu();
		}
		while(fscanf(mz,"%d %s %s %c %d %s %s %s %d %d\n",&patient.S_No, patient.First_Name, patient.Last_Name, &patient.Gender, &patient.age, patient.Address, patient.Contact_No, patient.Email, &patient.Patient_Problem, &patient.Doctor_Name)!=EOF)
		{
			if(patient.S_No == n)
			{
				valid=1;
				gotoxy(25,39);
				printf("*** Existing Record ***");
				gotoxy(10,41);
				printf("%d \t%s \t%s \t%c \t%d \t%s \t%s \t%s \t%d \t%d\n",patient.S_No,patient.First_Name,patient.Last_Name,patient.Gender, patient.age,patient.Address,patient.Contact_No,patient.Email,patient.Patient_Problem,patient.Doctor_Name);
				gotoxy(12,44);
				printf("\n\t\t\tS.No: ");
				printf("%d",patient.S_No);	
				A:
				printf("\n\t\t\tFirst Name: ");
				scanf("%s",patient.First_Name);
				patient.First_Name[0]=toupper(patient.First_Name[0]);
				if(strlen(patient.First_Name)>20||strlen(patient.First_Name)<2)
				{
					printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
					goto A;
				}
			else
				{
				
					for (b=0;b<strlen(patient.First_Name);b++)
					{
						if (isalpha(patient.First_Name[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(!valid)
					{
						printf("\n\t\t First name contain Invalid character :(  Enter again :)");
						goto A;
					}
				}
				
				B:
				printf("\n\t\t\tLast Name: ");
			    scanf("%s",patient.Last_Name);
			    patient.Last_Name[0]=toupper(patient.Last_Name[0]);
			    if(strlen(patient.Last_Name)>20||strlen(patient.Last_Name)<2)
				{
					printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
					goto B;
				}
				else
				{
					for (b=0;b<strlen(patient.Last_Name);b++)
					{
						if (isalpha(patient.Last_Name[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(!valid)
					{
						printf("\n\t\t Last name contain Invalid character :(  Enter again :)");
						goto B;
					}
				}
				
				do
				{
				    printf("\n\t\t\tGender[F/M]: ");
					scanf(" %c",&patient.Gender);
					if(toupper(patient.Gender)=='M'|| toupper(patient.Gender)=='F')
					{
						ok =1;
					}
					else 
					{
					ok =0;
					}
			        if(!ok)
				    {
				    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
			    	}
				 }	while(!ok);
				patient.Gender=toupper(patient.Gender);
				
				printf("\n\t\t\tEnter age: ");
				scanf(" %i",&patient.age);
				
				    do
				    {
				    C:
				    printf("\n\t\t\tAddress: ");
				    scanf("%s",patient.Address);
				    patient.Address[0]=toupper(patient.Address[0]);
				    if(strlen(patient.Address)>20||strlen(patient.Address)<4)
					{
						printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
						goto C;
					}
	
					}while(!valid);
				patient.Address[0]=toupper(patient.Address[0]);
				
			do
			{
				D:
			    printf("\n\t\t\tContact no: ");
			    scanf("%s",patient.Contact_No);
			    if(strlen(patient.Contact_No)>12||strlen(patient.Contact_No)!=11)
				{
					printf("\n\t Sorry :( Invalid. Contact no. must contain 11 numbers :)");
					goto D;
				}
				else
				{
					for (b=0;b<strlen(patient.Contact_No);b++)
					{
						if (!isalpha(patient.Contact_No[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(!valid)
					{
						printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
						goto D;
					}
				}
			}while(!valid);
				
				do
				{
				z:
			    printf("\n\t\t\tEmail: ");
			    scanf("%s",patient.Email);
			    if (strlen(patient.Email)>30||strlen(patient.Email)<8)
			    {
			    	
			       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
				}
				else
				{
			    		if(strstr(patient.Email,"@")==NULL)
			    		{
			    			printf("\tEnter @ in email address :");
			    			goto z;
						}
					
				}
	
			}while(strlen(patient.Email)>30||strlen(patient.Email)<8);		
			    
				printf("\t\t\tSelect one them");
				printf("\n\t\t\tPress 1 = Corona");
				printf("\n\t\t\tPress 2 = Taifat");
				printf("\n\t\t\tPress 3 = Diabetes");
				printf("\n\t\t\tPress 4 = Cancer");
				printf("\n\t\t\tPress 5 = BloodPressure");
			    E:
			    printf("\n\t\t\tProblem: ");
			    scanf("%d",&patient.Patient_Problem);
			    switch (patient.Patient_Problem)
			    {
			    	case 1:
			    		printf("\t\t\tCorona");
			    		break;
			    	case 2:
			    		printf("\t\t\tTaifat");
			    		break;
			    	case 3:
			    		printf("\t\t\tDiabetes");
			    		break;
			    	case 4:
			    		printf("\t\t\tCancer");
			    		break;
			    	case 5:
			    		printf("\t\t\tBloodPressure");
			    		break;
			    	default:
			    		printf("Enter Selected");
			    	
				}
			    if(sizeof(patient.Patient_Problem)<1)
				{
					printf("\n\t Invalid :( \t Enter Selected things :)");
					goto E;
				}
			    
							printf("\n\t\t\tSelect one them");
				printf("\n\t\t\tPress 1 = Corona-----------------> Doctor Zain");
				printf("\n\t\t\tPress 2 = Taifat-----------------> Doctor Mubbashir");
				printf("\n\t\t\tPress 3 = Diabetes-----------------> Doctor Anus");
				printf("\n\t\t\tPress 4 = Cancer-----------------> Doctor Fatima");
				printf("\n\t\t\tPress 5 = BloodPressure-----------------> Doctor Yousuf");	
				F:
			    printf("\n\t\t\tPrescribed Doctor:");
			    scanf("%d",&patient.Doctor_Name);
			    switch (patient.Doctor_Name)
			    {
			    	case 1:
			    		printf("\t\t\tCorona");
			    		break;
			    	case 2:
			    		printf("\t\t\tTaifat");
			    		break;
			    	case 3:
			    		printf("\t\t\tDiabetes");
			    		break;
			    	case 4:
			    		printf("\t\t\tCancer");
			    		break;
			    	case 5:
			    		printf("\t\t\tBloodPressure");
			    		break;
			    	default:
			    		printf("Enter Selected");
				}
			    
			    if(sizeof(patient.Doctor_Name)<1)
				{
					printf("\n\t Invalid :( \t Enter Selected things :)");
					goto F;
				}
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(replica,"%d %s %s %c %d %s %s %s %d %d\n",patient.S_No,patient.First_Name,patient.Last_Name,patient.Gender, patient.age,patient.Address,patient.Contact_No,patient.Email,patient.Patient_Problem,patient.Doctor_Name);
				printf("\n\n\t\t\tPatient record updated successfully...");
				}					
			}
			else
			{
			fprintf(replica,"%d %s %s %c %d %s %s %s %d %d\n",patient.S_No,patient.First_Name,patient.Last_Name,patient.Gender,patient.age,patient.Address,patient.Contact_No,patient.Email,patient.Patient_Problem,patient.Doctor_Name);	
			}
		 }
		if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(replica);
	    fclose(mz);
	    remove("Record.dat");
   	    rename("temp.dat","Record.dat");
		getch();
		Menu();		
}

void Dlt()
{
	
	char num[11];
	int found=0;
	system("cls");
	Header();// call Header function
	FILE *mz, *replica;
	replica=fopen("temp2.dat","w+");//Open a text file for update (reading and writing), first truncating the file to zero length if it exists or creating the file if it does not exist.
	mz=fopen("Record.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Patients Record !!!!!!!!!!!!!\n");
	gotoxy(12,35);
	printf("\n Enter Patient Contact.No to delete: ");
	fflush(stdin);//clear (or flush) the output buffer and move the buffered data to console
	scanf("%s",num);
	
	
	while (fscanf(mz,"%d %s %s %c %d %s %s %s %d %d",&patient.S_No,  patient.First_Name, patient.Last_Name, &patient.Gender, &patient.age, patient.Address, patient.Contact_No, patient.Email, &patient.Patient_Problem, &patient.Doctor_Name)!=EOF)
	{
		if (strcmp(patient.Contact_No,num)!=0)
		fprintf(replica,"%d %s %s %c %d %s %s %s %d %d\n",patient.S_No, patient.First_Name, patient.Last_Name, patient.Gender, patient.age,patient.Address,patient.Contact_No,patient.Email,patient.Patient_Problem,patient.Doctor_Name);
		else 
		{
			printf("%d %s %s %c %d %s %s %s %d %d\n",patient.S_No, patient.First_Name, patient.Last_Name, patient.Gender, patient.age, patient.Address, patient.Contact_No,patient.Email,patient.Patient_Problem,patient.Doctor_Name);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		Menu();
	}
	else
	{
		fclose(mz);
		fclose(replica);
		remove("Record.dat");
		rename("temp2.dat","Record.dat");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		Menu();
	}
} 

void exit()//function to exit
{
	system("cls");//Clearing the Screen
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
	getch();//holds screen
	
}

