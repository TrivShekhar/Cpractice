#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char process[20][4],temps[20],p[5]={'p','\0'};
    int startt,numberofprocess, arrival[20],burst[20],i,j,temp,waiting[20],turnaround[20],start[20],finish[20];
    printf("Enter the number of process\n");
    scanf("%d",&numberofprocess);
    for(i=0;i<numberofprocess;i++)
    {
        printf("Enter the arrival time and busrt time of process %d\n",i+1);
        scanf("%d%d",&arrival[i],&burst[i]);
        sprintf(temps,"p%d",i+1);
       
        j=0;
        //assigning process name
        while(temps[j]!='\0')
        {
            process[i][j]=temps[j];
            j++;
        }
        process[i][j]='\0';
}
    //loop to sort the process according to arrival time
    for(i=0;i<numberofprocess;i++)
    {
        for(j=0;j<numberofprocess-i;j++){
            if(arrival[i]>arrival[i+j])
            {
                //sorting processes according to arrival time
                temp=arrival[i];
                arrival[i]=arrival[i+j];
                arrival[i+j]=temp;
                //matching the burst time with the arrival time of the same process
                temp=burst[i];
                burst[i]=burst[i+j];
                burst[i+j]=temp;
                //matching the process name with the arrival time of the same process
                strcpy(temps,process[i]);
                strcpy(process[i],process[i+j]);
                strcpy(process[i+j],temps);
                
            }
        }
    }
    //loop to calculate the waiting time,turnaround time and start time of the process
    for(i=0;i<numberofprocess;i++)
    {  //calculating the start time of the process
        if(i==0)
        {
        start[i]=arrival[i];
        }
        else if(finish[i-1]<arrival[i])
        {
            start[i]=arrival[i];
        }
        else
        {
            start[i]=finish[i-1];
        }
        //calculating the completion time of the process
        finish[i]=start[i]+burst[i];
        //calculating the turn around time of the process
        turnaround[i]=finish[i]-arrival[i];
        //calculating the waiting time of the process
        waiting[i]=turnaround[i]-burst[i];
    }
    //printing the table for fcfs
    printf("count\tarrival\tburst\tstart\tfinish\twaiting\t turnaround\n");
    for(i=0;i<numberofprocess;i++){
        printf("%s \t%d\t%d\t%d\t%d\t%d\t %d\n",process[i],arrival[i],burst[i],start[i],finish[i],waiting[i],turnaround[i]);

    }

}