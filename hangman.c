#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
	while(1) {
		printf("Lütfen 10 kelime giriniz.\n\n");
		char a[10][256];
		int b = 0;
		while(b<10) {
			printf("%i. kelime: ", b+1);
			scanf("%s", a[b]);
			if((unsigned)strlen(a[b])<5) {
				printf("Lütfen en az 5 harfli bir kelime giriniz. Sizin girdiğiniz kelime %i harfli.\n", (unsigned)strlen(a[b]));
				continue;
			}
			else if((unsigned)strlen(a[b])>9) {
				printf("Lütfen en fazla 9 harfli bir kelime giriniz. Sizin girdiğiniz kelime %i harfli.\n", (unsigned)strlen(a[b]));
				continue;
			}
			b++;
		}
		int c[10];
		srand(time(NULL));
		int d;
		for(d=0; d<10; d++)
			c[d] = d;
		for(d=0; d<10; d++) {
			int d0 = c[d];
			int d1 = rand()%9;
			c[d] = c[d1];
			c[d1] = d0;
		}
		// Liste karıştırma kontrolü:
		/*for(d=0; d<10; d++)
			printf("%s\n", a[c[d]]);*/
		for(d=0; d<10; d++) {
			printf("\n%i. tur.\n\n", d+1);
			char d1;
			int d2, d3 = (unsigned)strlen(a[c[d]]);
			char d4[d3];
			char d5[d3];
			for(d2=0; d2<d3; d2++)
				d4[d2] = '_';
			printf("Harf girmek için \"h\", kelime tahmini yapmak içinse \"k\" yazınız: ");
			scanf(" %c", &d1);
			printf("\n");
			if(d1=='h') {
				int d0;
				for(d0=10; d0>0; d0--) {
					printf("Kalan hakkınız: %i\n", d0);
					if(d0==10) {
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
					else if(d0==9) {
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
					else if(d0==8) {
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
					else if(d0==7) {
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
					else if(d0==6) {
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
					else if(d0==5) {
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
					else if(d0==4) {
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
					else if(d0==3) {
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
					else if(d0==2) {
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
					else if(d0==1) {
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
					printf("\n");
					int e, e0 = 0;
					char e1;
					for(d2=0; d2<d3; d2++)
						printf("%c ", d4[d2]);
					printf("\n\nHarf giriniz: ");
					scanf(" %c", &e1);
					for(e=0; e<d3; e++) {
						if(a[c[d]][e]==e1) {
							d4[e] = e1;
							e0 = 1;
						}
					}
					if(e0==1)
						d0++;
					for(d2=d3; d2<9; d2++)
						d4[d2] = 0;
					if(strcmp(a[c[d]], d4)==0) {
						for(e=0; e<d3; e++) {
							if(a[c[d]][e]==e1) {
								d4[e] = e1;
								e0 = 1;
							}
						}
						printf("\n");
						for(d2=0; d2<d3; d2++)
							printf("%c ", a[c[d]][d2]);
						printf("\n\nOyunu kazandınız, tebrikler!\n\n\n");
						break;
					}
				}
				if(strcmp(a[c[d]], d4)!=0) {
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
					printf("\nÜzgünüz, kaybettiniz! Doğru kelime: \"%s\" olacaktı.\n", a[c[d]]);
				}
			}
			else if(d1=='k') {
				for(d2=0; d2<d3; d2++)
					printf("%c ", d4[d2]);
				printf("\n\nKelime giriniz: ");
				scanf("%s", d5);
				printf("\n");
				if(strcmp(a[c[d]], d5)==0) {
					for(d2=0; d2<d3; d2++)
						printf("%c ", a[c[d]][d2]);
					printf("\n\nOyunu kazandınız, tebrikler!\n\n\n");
				}
				else {
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
					printf("\nÜzgünüz, kaybettiniz! Doğru kelime: \"%s\" olacaktı.\n", a[c[d]]);
				}
			}
			else {
				printf("Hatalı giriş yaptınız. Lütfen tekrar deneyiniz.\n");
				continue;
			}
		}
		while(1) {
			char e_h;
			printf("\nTekrar oynamak için \"e\", oyundan çıkmak için \"h\" yazınız: ");
			scanf(" %c", &e_h);
			if(e_h=='e')
				break;
			else if(e_h=='h')
				exit(0);
			else {
				printf("Hatalı giriş yaptınız. Lütfen tekrar deneyiniz.\n");
				continue;
			}
		}
	}
	return 0;
}
