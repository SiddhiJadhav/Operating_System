#include<iostream>

using namespace std;

int main(){

	int p[5],bt[5],wt[5];

	cout<<"Enter priority and Brust time for 5 processes : ";
	for(int i=0;i<5;i++){
		cin>>p[i]>>bt[i];
	}

	for (int i = 0; i < 5-1; i++){       
      
       for (int j = 0; j < 5-i-1; j++){  
           if (p[j] < p[j+1]){
           		
           		int temp=p[j];
           		p[j]=p[j+1];
           		p[j+1]=temp;

           		int temp1=bt[j];
           		bt[j]=bt[j+1];
           		bt[j+1]=temp1;

           } 
        }
	}
         

	wt[0]=0;

	for(int i=1;i<5;i++){
		wt[i]=0;
		for(int j=0;j<i;j++){
			wt[i]+=bt[j];
		}
	}


    cout<<"\n"<<"Process"<<"\t\t"<<"Priority"<<"\t"<<"Brust time"<<"  Waiting Time";

	for(int i=0;i<5;i++){
		cout<<"\n"<<"P"<<i+1<<"\t\t"<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\n";
	}

return 0;

}