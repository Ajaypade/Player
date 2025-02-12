//3. Write a program to create an array for 10 players. For each player store name, no. of
//matches played, runs, wickets takes.
//a. Create function to Accept the information of each player.
//b. Create function to display the information of all the players
//c. Display the information of player who made maximum runs and the one who took maximum number of wickets.

#include<stdio.h>
#include<string.h>

typedef struct player
{
	char player_name[25];
	int no_of_matches;
	int runs;
	int wickets;
}player;
void playerstore(player*, int);
void display(player*,int);
void logic(player*,int);

void main()
{
	player p1[10];
	playerstore(p1,10);
	display(p1,10);
	logic(p1,10);
}
void playerstore(player* p1,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nenter the player name : ");
		scanf("%s",&p1[i].player_name);
		
		printf("enter no of matches he played : ");
		scanf("%d",&p1[i].no_of_matches);
		
		printf("enter the runs of the player : ");
		scanf("%d",&p1[i].runs);
		
		printf("enter the wickets of the player  : ");
		scanf("%d",&p1[i].wickets);
	}
}
void display(player* p1, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\n\nplayer name is : %s",p1[i].player_name);
		printf("\nno of matches he played : %d",p1[i].no_of_matches);
		printf("\nno of runs of the player : %d",p1[i].runs);
		printf("\nnot of wickets are : %d",p1[i].wickets);
	}
}
void logic(player* p1,int size)
{
	int length1=0,length2=0;
	// max runs
	int i=0;
	while(i<size)
	{
		if(p1[i].runs>p1[length1].runs)
		{
			length1=i;
		}
		i++;
	}
	printf("\nprint max runs of player details");
	printf("\nplayer name is : %s",p1[length1].player_name);
	printf("\nno of matches are : %d",p1[length1].no_of_matches);
	printf("\nruns are : %d",p1[length1].runs);
	printf("\nwickets are : %d",p1[length1].wickets);
	
	// max wickets;
	for(i=0;i<size; )
	{
		if(p1[i].wickets>p1[length2].wickets)
		{
			length2=i;
		}
		i++;
	}
	printf("\nprint max wickets of player details",p1);
	printf("\nplayer name is : %s",p1[length2].player_name);
	printf("\nno of matches are : %d",p1[length2].no_of_matches);
	printf("\nruns are : %d",p1[length2].runs);
	printf("\nwickets are : %d",p1[length2].wickets);
}


