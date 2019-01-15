#include<iostream>

using namespace std;

int main(){

	int buffers[]={28,4,64,17,5,97,98,50,10,3,35,99};
	int blkno,mod,flag=0;

	int blk0[3][2]={{28,0},{4,0},{64,1}};
	int blk1[3][2]={{17,1},{5,0},{97,0}};
	int blk2[3][2]={{98,1},{50,1},{10,0}};
	int blk3[3][2]={{3,0},{35,1},{99,1}};


	cout<<"Enter the block no : ";
	cin>>blkno;

	for(int i=0;i<12;i++){
		if(blkno==buffers[i]){
			flag=1;
		}
	}

	if(flag=1){
		mod = blkno%4;
		//cout<<mod;

		if(mod==0){
			for(int j=0;j<3;j++){
				if(blk0[j][0]==blkno){
					if(blk0[j][1]==0){
						blk0[j][1]==1;
						cout<<"Block is free";
					}else{
						cout<<"Block is unavailable";
					}
				}
			}
		}

		if(mod==1){
			for(int j=0;j<3;j++){
				if(blk1[j][0]==blkno){
					if(blk1[j][1]==0){
						blk1[j][1]==1;
						cout<<"Block is free";
					}else{
						cout<<"Block is unavailable";
					}
				}
			}
		}

		if(mod==2){
			for(int j=0;j<3;j++){
				if(blk2[j][0]==blkno){
					if(blk2[j][1]==0){
						blk2[j][1]==1;
						cout<<"Block is free";
					}else{
						cout<<"Block is unavailable";
					}
				}
			}
		}

		if(mod==3){
			for(int j=0;j<3;j++){
				if(blk3[j][0]==blkno){
					if(blk3[j][1]==0){
						blk3[j][1]==1;
						cout<<"Block is free";
					}else{
						cout<<"Block is unavailable";
					}
				}
			}
		}
	}


	


	return 0;

}