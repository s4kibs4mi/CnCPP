#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char interface[10];
	char new_mac[20];
	char interface_command[50];
	char final_mac[50];
	char changed_mac[50];
	
	memset(interface_command,'\0',sizeof(interface_command));
	memset(final_mac,'\0',sizeof(final_mac));
	memset(changed_mac,'\0',sizeof(changed_mac));
	printf("++++  Mac Changer for Linux OS  ++++++\n");
	printf("Enter Interface name ( eth0,eth1,wlan0 etc ) : ");
	gets(interface);
	strcat(strcat(strcat(changed_mac,"ifconfig "),interface)," | grep HWaddr");
	printf("Current Mac of \n");
	system(changed_mac);
	printf("\n");
	strcat(strcat(strcat(interface_command,"sudo ifconfig "),interface)," down");
	system(interface_command);
	memset(interface_command,'\0',sizeof(interface_command));
	memset(changed_mac,'\0',sizeof(changed_mac));
	printf("Please Enter New Mac Address ( eg - aa:bb:cc:dd:ee ) : ");
	gets(new_mac);
	strcat(strcat(strcat(strcat(final_mac,"sudo ifconfig "),interface)," hw ether "),new_mac);
	system(final_mac);
	strcat(strcat(strcat(interface_command,"sudo ifconfig "),interface)," up");
	system(interface_command);
	printf("Your Mac of interface %s sucessfully changed.\n",interface);
	strcat(strcat(strcat(changed_mac,"ifconfig "),interface)," | grep HWaddr");
	printf("Current Mac \n");
	system(changed_mac);
	printf("\n\nCodeing : Sakib Sami\n");
	getchar();
	getchar();
	return 0;
}
