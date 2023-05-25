#include <stdio.h>
int main()
{
    int pid[6]={1,2,3,4,5,6};
    int bt[6]={2,3,4,5,1,6};
    int n=6;
    int i, wt[n];
    wt[0]=0;
    for(i=1; i<n; i++)
    {
        wt[i]= bt[i-1]+ wt[i-1];
    }
    float twt=0.0;
    float tat= 0.0;
    for(i=0; i<n; i++)
    {
        twt += wt[i];
        tat += (wt[i]+bt[i]);
    }
    float att,awt;
    awt = twt/n;
    att = tat/n;
    printf("Avg. waiting time= %f\n",awt);
    printf("Avg. turnaround time= %f",att);
}
