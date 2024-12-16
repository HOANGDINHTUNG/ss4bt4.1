#include<stdio.h>
int main(){
	int month;
	printf("moi nhap vao thang: ");
	scanf("%d",&month);
	// cach 1:
	/*if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		printf("thang %d co 31",month);
	}
	else if(month==4||month==6||month==9||month==11){
		printf("thang %d co 30 ngay",month);
	}
	else if(month==2){
		printf("thang 2 co 28 ngay (nam khong nhuan), co 29 ngay (nam nhuan)");
	}
	else{
		printf("thang ko hop le");
	}*/
	//cach 2:
	switch(month){
		case 1:
			printf("thang %d co 31 ngay",month);
			break;
		case 2:
			printf("thang 2 co 28 ngay (nam khong nhuan), co 29 ngay (nam nhuan)");
			break;
		case 3:
			printf("thang %d co 31 ngay",month);
			break;
		case 4:
			printf("thang %d co 30 ngay",month);
			break;
		case 5:
			printf("thang %d co 31 ngay",month);
			break;
		case 6:
			printf("thang %d co 30 ngay",month);
			break;
		case 7:
			printf("thang %d co 31 ngay",month);
			break;
		case 8:
			printf("thang %d co 31 ngay",month);
			break;
		case 9:
			printf("thang %d co 30 ngay",month);
			break;
		case 10:
			printf("thang %d co 31 ngay",month);
			break;
		case 11:
			printf("thang %d co 30 ngay",month);
			break;
		case 12:
			printf("thang %d co 31 ngay",month);
			break;
		default:
			printf("thang ko hop le");
	}
	return 0;
}
