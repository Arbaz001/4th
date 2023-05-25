#include <iostream>
using namespace std;
int main(){
    int A[100][100];
    float total;
    int n,index,temp;
    cout<<"enter no. of processes= ";
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<"P"<<i+1<<" :";
        cin>>A[i][1];
        A[i][0]=i+1;
    }
    // Sorting process according to their Burst Time.
    for(int i=0;i<n;i++) {
        index=i;
        for(int j=i+1;j<n;j++){
        if (A[j][1]<A[index][1])
        index=j;
        temp=A[i][1];
        A[i][1]=A[index][1];
        A[index][1]=temp;
        temp=A[i][0];
        A[i][0]=A[index][0];
        A[index][0]=temp;
    }
    }
    // wt 
    for (int i=1;i<n;i++) {
        A[i][2]=0;
        for (int j=0;j<i;j++)
            A[i][2]=A[i][2]+A[j][1];
        total=total+A[i][2];
    }
    float wt=total/n;
    // tat
     total = 0;
    for(int i=0;i<n;i++) {
        A[i][3]=A[i][1]+A[i][2];
        total=total+A[i][3];
    }
    float tat =(total/n);
    cout << "Average Waiting Time= " <<wt<< endl;
    cout << "Average Turnaround Time= " <<tat<< endl;
}
