#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,ch1,ch2,st,cho;
    char name1[20],name2[20];
    char mat[3][3];
    printf("\n\n\n\n");
	printf("                         TIK TOK TO GAME\n");
	printf("                       multiplayer version\n\n");
    printf("                   Developed by : Sakib Sami\n\n\n");
    printf("                           1. Play game\n                           2. Exit\n");
	scanf("%d",&st);
	if(st==1)
	{
		agp:
		for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                mat[j][i]='*';
            }
        }
		system("cls");
		printf("              Court\n\n");
		for(i=0;i<3;i++)
		{
			printf("            ");
			for(j=0;j<3;j++)
			{
				printf("%c   ",mat[j][i]);
			}
			printf("\n\n");
		}
		printf("Enter 1st player nick name :");
		getchar();
		gets(name1);
		printf("Enter 2nd player nick name :");
		gets(name2);

		for(i=0;i<5;i++)
		{
			system("cls");
			printf("              Court\n\n");
			for(i=0;i<3;i++)
			{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
				printf("\n\n");
			}
			ag:
			printf("%s, Enter Your choice :",name1);
			scanf("%d",&ch1);
			if(ch1==1)
			{
				if(mat[0][0]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[0][0]='O';
			}
			else if(ch1==2)
			{
				if(mat[1][0]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[1][0]='O';
			}
			else if(ch1==3)
			{
				if(mat[2][0]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[2][0]='O';
			}
			else if(ch1==4)
			{
				if(mat[0][1]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[0][1]='O';
			}
			else if(ch1==5)
			{
				if(mat[1][1]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[1][1]='O';
			}
			else if(ch1==6)
			{
				if(mat[2][1]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[2][1]='O';
			}
			else if(ch1==7)
			{
				if(mat[0][2]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[0][2]='O';
			}
			else if(ch1==8)
			{
				if(mat[1][2]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[1][2]='O';
			}
			else if(ch1==9)
			{
				if(mat[2][2]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag;
				}
				else
				mat[2][2]='O';
			}

			if(mat[0][0]=='O' && mat[0][1]=='O' && mat[0][2]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[1][0]=='O' && mat[1][1]=='O' && mat[2][1]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][2]=='O' && mat[1][1]=='O' && mat[2][0]=='O')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name1);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][0]!='*' && mat[0][1]!='*' && mat[0][2]!='*' && mat[1][0]!='*' && mat[2][0]!='*' && mat[1][1]!='*' && mat[2][1]!='*' && mat[2][2]!='*' && mat[1][2]!='*')
			{
			    system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
			    printf("Match Draw.\nBoth are Genius\n1. Play again\n2. Exit\n");
                scanf("%d",&cho);
                if(cho==1)
                goto agp;
                else
                break;
			}
			system("cls");
			printf("              Court\n\n");
			for(i=0;i<3;i++)
			{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
				printf("\n\n");
			}
			printf("\n\n");
			ag1:
			printf("%s, Enter Your choice :",name2);
			scanf("%d",&ch2);
			if(ch2==1)
			{
				if(mat[0][0]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[0][0]='X';
			}
			else if(ch2==2)
			{
				if(mat[1][0]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[1][0]='X';
			}
			else if(ch2==3)
			{
				if(mat[2][0]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[2][0]='X';
			}
			else if(ch2==4)
			{
				if(mat[0][1]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[0][1]='X';
			}
			else if(ch2==5)
			{
				if(mat[1][1]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[1][1]='X';
			}
			else if(ch2==6)
			{
				if(mat[2][1]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[2][1]='X';
			}
			else if(ch2==7)
			{
				if(mat[0][2]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[0][2]='X';
			}
			else if(ch2==8)
			{
				if(mat[1][2]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[1][2]='X';
			}
			else if(ch2==9)
			{
				if(mat[2][2]!='*')
				{
				    printf("Invalid Choice.Try Again\n");
				    goto ag1;
				}
				else
				mat[2][2]='X';
			}
			else if(mat[0][0]!='*' && mat[0][1]!='*' && mat[0][2]!='*' && mat[1][0]!='*' && mat[2][0]!='*' && mat[1][1]!='*' && mat[2][1]!='*' && mat[2][2]!='*' && mat[1][2]!='*')
			{
			    system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
			    printf("Match Draw.\nBoth are Genius\n1. Play again\n2. Exit\n");
                scanf("%d",&cho);
                if(cho==1)
                goto agp;
                else
                break;
			}

			if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[1][0]=='X' && mat[1][1]=='X' && mat[2][1]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X')
			{
				system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
				printf("Congrates...\n%s ,You won the game.\n",name2);
				printf("1. Play Again\n2. Exit\n");
				scanf("%d",&cho);
				if(cho==1)
				goto agp;
				else
				break;
			}
			else if(mat[0][0]!='*' && mat[0][1]!='*' && mat[0][2]!='*' && mat[1][0]!='*' && mat[2][0]!='*' && mat[1][1]!='*' && mat[2][1]!='*' && mat[2][2]!='*' && mat[1][2]!='*')
			{
			    system("cls");
				printf("              Court\n\n");
				for(i=0;i<3;i++)
				{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
					printf("\n\n");
				}
			    printf("Match Draw.\nBoth are Genius\n1. Play again\n2. Exit\n");
                scanf("%d",&cho);
                if(cho==1)
                goto agp;
                else
                break;
			}
			system("cls");
			printf("              Court\n\n");
			for(i=0;i<1;i++)
			{
				printf("            ");
				for(j=0;j<3;j++)
				{
					printf("%c   ",mat[j][i]);
				}
				printf("\n\n");
			}
		}
	}
	else if(st==2)
	system("exit");
    return 0;
}
