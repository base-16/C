#include <stdio.h>

void a0();
void a1();
void a2();
void a3();
void a4();
void a5();
void a6();
void a7();
void a8();
void a9();
void a10();

int main() {
	a0();
	a1();
	a2();
	a3();
	a4();
	a5();
	a6();
	a7();
	a8();
	a9();
	a10();
	return 0;
}

void a0() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j<=7) {
				printf("_");
			}
		}
		printf("\n");
	}
}

void a1() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if(i==6 && j!=4) {
				printf("_");
			}
			else if(i>1 && j==4) {
				printf("|");
			}
			else {
				printf(" ");
			}                    
		}
		printf("\n");
	}
}

void a2() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if(i>1 && j==4) {
				printf("|");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a3() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if(i>1 && j==4) {
				printf("|");
			}
			else if(i==2 && j==5) {
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a4() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9)) {
				printf("|");
			}
			else if(i==2 && j==5) {
				printf("/");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a5() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9)) {
				printf("|");
			}
			else if(i==2 && j==5) {
				printf("/");
			}
			else if(i==3 && j==9) {
				printf("O");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a6() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9) || (i==4 && j==9)) {
				printf("|");
			}
			else if(i==2 && j==5) {
				printf("/");
			}
			else if(i==3 && j==9) {
				printf("O");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a7() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=9; j++) {
			if(i==6 && j>=8) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9) || (i==4 && j==9)) {
				printf("|");
			}
			else if((i==2 && j==5) || (i==4 && j==8)) {
				printf("/");
			}
			else if(i==3 && j==9) {
				printf("O");
			}
			else {
				printf(" ");
			}
		}
	printf("\n");
	}
}

void a8() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=10; j++) {
			if((i==1 && j==10) || (i==6 && j>=8)) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9) || (i==4 && j==9)) {
				printf("|");
			}
			else if((i==2 && j==5) || (i==4 && j==8)) {
				printf("/");
			}
			else if(i==3 && j==9) {
				printf("O");
			}
			else if(i==4 && j==10) {
				printf("\\");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a9() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=10; j++) {
			if((i==1 && j==10) || (i==6 && j>=8)) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9) || (i==4 && j==9)) {
				printf("|");
			}
			else if((i==2 && j==5) || (i==4 && j==8) || (i==5 && j==8)) {
				printf("/");
			}
			else if(i==3 && j==9) {
				printf("O");
			}
			else if(i==4 && j==10) {
				printf("\\");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void a10() {
	int i;
	for(i=1; i<=6; i++) {
		int j;
		for(j=1; j<=10; j++) {
			if((i==1 && j==10) || (i==6 && j>=8)) {
				printf(" ");
			}
			else if((i==6 && j!=4) || (i==1 && j>=4)) {
				printf("_");
			}
			else if((i>1 && j==4) || (i==2 && j==9) || (i==4 && j==9)) {
				printf("|");
			}
			else if((i==2 && j==5) || (i==4 && j==8) || (i==5 && j==8)) {
				printf("/");
			}
			else if(i==3 && j==9) {
				printf("O");
			}
			else if((i==4 && j==10) || (i==5 && j==10)) {
				printf("\\");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
