#include<stdio.h>

char name[15][8];
int num[15];
char  tm;
void input(char name[][8] ,int num[] ){
    int i,j;
    for(i = 1 ; i <= 10 ;i++)
    {
        printf("%dth worker's name is  ",i);
        scanf("%s",name[i]);
        printf("%dth worker's num is  ",i);
        scanf("%d",&num[i]);
    }
}





void sort(char name[][8] ,int num[])
{
    int i ,j ;
    int index , temp;
        for(i = 1 ; i< 10 ;i++){
        temp = num[i];
        index = i;
        for(j = i ; j < 11;j++){
            if(num[j] < temp){
                index = j;
                temp = num[j];
            }
        }
        num[index] = num[i];
        num[i] = temp;
        for(j = 0 ; j < 8 ; j++)
        {
            tm = name[i][j];
            name[i][j] = name[index][j];
            name[index][j] = tm;
        }
    }


    return;
}


int main(){
    input(name,num);



    sort(name,num);

    int i = 1;
    printf("\n\n\n");
    for(i =1 ; i<= 10 ;i++)
    {
      printf("%d th staff's num is %d , and he/she name is  %s\n",i,num[i],name[i]);
    }
}
