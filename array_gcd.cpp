#include<iostream>
using namespace std;


class ip{
public:
int p[3];
void getdata(int p[]){
for (int i=0;i<3;i++){
cin>>p[i];
}}

};


int gcd(int a,int b){
if(a==0)
return b;

else
return gcd(b%a,a);

}


int gcd1(int arr[],int n){
int op=arr[0];
for (int i=1;i<n;i++){
op=gcd(arr[i],op);
if (op==1)
return 1;
}

return op;
}

int main(){
	ip i;
	int N,Q,s_int,op1;
	cin>>N;
	int a[N];
	int q[3];
	for (int i=0;i<N;i++){
	cin>>a[i];
	}
	cin>>Q;
	cin>>s_int;
	
	int j=0;
	do {
	i.getdata(q);
	if (q[0]==1){
	int b=0;
	b=q[1];
	a[b]=q[2];
	}
	else if(q[0]==2){
	int i,j=0;
	i=q[1];
	j=q[2];
	op1=gcd1(a,N);
	cout<<op1<<endl;
	}
	j++;
	}while(j!=Q);


}



