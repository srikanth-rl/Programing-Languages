#include<stdio.h>
#include<string.h>
int main(){
    char str[90][90],temp;
    int i=0,j,length=0;
    while(temp!='\n')scanf("%s%c",str[length++],&temp);
    for(i=0;i<length;i++){
        int fruit=1;
        for(j=i+1;j<length;j++){
            if(strcmp(str[i],str[j])==0){
                fruit++;
                strcpy(str[j],"#");}
        }
        if(strcmp(str[i],"#")!=0)printf("%s - %d\n",str[i],fruit);}
}