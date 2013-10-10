#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main(){
	while(1){
		system("echo '\e[8;80;60t'");
		system("echo '\033]0;PC INFORMER - www.sakibsami.com\007'");
		system("whoami");
		printf("Today :\n");
		system("date");
		
		printf("\nKernel Info :\n");
		system("uname -a");
		
		printf("\nDisk Info :\n");
		printf("Ram & Swap : \n");
		system("free -m -o");
		printf("\nHard Disk : \n");
		system("df -h");
		
		printf("\nSystem Info :\n");
		system("ps -eo pcpu,pid,user,args | sort -k 1 -r | head -6");
		sleep(1);
		system("clear");
	}
	return 0;
}
