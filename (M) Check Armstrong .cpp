bool checkArmstrong(int n){
	int num=n;
	int count=0;
	while(n>0){
		count++;
		n/=10;
	}
	n=num;
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum+=pow(rem,count);
		n/=10;
	}

	if(num==sum)
		return true;

	else
		return false;

}
