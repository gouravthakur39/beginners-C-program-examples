#include <stdio.h>
#include <string.h>

void extractIpAddress(unsigned char *sourceString,short *ipAddress)
{
    unsigned short len=0;
    unsigned char  oct[4]={0},cnt=0,cnt1=0,i,buf[5];
 
    len=strlen(sourceString);
    for(i=0;i<len;i++)
    {
        if(sourceString[i]!='.'){
            buf[cnt++] =sourceString[i];
        }
        if(sourceString[i]=='.' || i==len-1){
            buf[cnt]='\0';
            cnt=0;
            oct[cnt1++]=atoi(buf);
        }
    }
    ipAddress[0]=oct[0];
    ipAddress[1]=oct[1];
    ipAddress[2]=oct[2];
    ipAddress[3]=oct[3];
}

int main()
{
    unsigned char ip[20]={0};
    short ipAddress[4];
     
    printf("Enter IP Address (xxx.xxx.xxx.xxx format): ");
    scanf("%s",ip);
     
    extractIpAddress(ip,&ipAddress[0]);
     
    printf("\nIp Address: %03d. %03d. %03d. %03d\n",ipAddress[0],ipAddress[1],ipAddress[2],ipAddress[3]);
    
    if(ipAddress[0]>=0 && ipAddress[0]<=127)
        printf("Class A Ip Address.\n");
    if(ipAddress[0]>127 && ipAddress[0]<191)
        printf("Class B Ip Address.\n");
    if(ipAddress[0]>191 && ipAddress[0]<224)
        printf("Class C Ip Address.\n");
    if(ipAddress[0]>224 && ipAddress[0]<=239)
        printf("Class D Ip Address.\n");
    if(ipAddress[0]>239)
        printf("Class E Ip Address.\n");
     
    return 0;
}
