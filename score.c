#include <stdio.h>
int main(){
    int i ,score[100],heighest,lowest,sum=0,n;
    float avg;
    printf("enter the number of matches:");
    scanf("%d",&n);
    
    printf("enter the score of %d matches:");
    
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
        sum+=score[i];
    }
    avg=(float)sum/(float)n;
    heighest=lowest=score[0];
    for(i=0;i<n;i++)
    {
       if(score[i]>heighest){
          heighest=score[i]; 
       }
       if(score[i]<lowest)
       {
           lowest=score[i];
       }
    }
    printf("heighest score is%d:\n",heighest);
       printf("lowest score is %d:\n",lowest);
       printf("average is: %f\n",avg);
    return 0;
}
