#include <stdio.h>

int main(int argc, char *argv[]) {
	while (1 == 1) {
		printf("您要进行哪种运算？加法请扣一，减法请扣二，乘法请扣三，除法请扣四。");
		int a ;
		scanf("%d", &a);
		if (a == 1 || a == 2 || a == 3) {
			printf("第一个数字是？");
			double q;
			scanf("%lf", &q);
			
			printf("第二个数字是？");
			double w;
			scanf("%lf", &w);
			
			double e;
			if (a == 1) { e=q+w; }
			if (a == 2) { e=q-w; }
			if (a == 3) { e=q*w; }
			
			printf("答案是%lf\n", e);
		}
		if (a == 4) {
			printf("被除数是？");	
			double p;
			scanf("%lf", &p);
			
			printf("除数是？");
			double s;
			scanf("%lf", &s);
			
			if (s != 0) {
				int m = p / s;
				double ad = m * s;
				double gy = p - ad;
				
				printf("商是%d ,余数是%lf ", m, gy);
			} else {
				printf("此除数无效。\n");
			}
			
		}
	}
	
	return 0;
}
