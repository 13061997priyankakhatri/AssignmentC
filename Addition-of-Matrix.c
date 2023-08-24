#include <stdio.h>
int main()
{
	int ar[2][3], arr[2][3], ans[2][3], p, u;
	printf("Enter your first array : ");
	for (p = 0; p < 2; p++){
		for (u = 0; u < 3; u++){
			scanf("%d", &ar[p][u]);
		}
	}
	for (p = 0; p < 2; p++){
		for (u = 0; u < 3; u++){
			printf("%d\t", ar[p][u]);
		}
		printf(" \n");
	}
	printf("Enter your second array : ");
	for (p = 0; p < 2; p++){
		for (u = 0; u < 3; u++){
			scanf("%d", &arr[p][u]);
		}
	}
	for (p = 0; p < 2; p++){
		for (u = 0; u < 3; u++){
			printf("%d\t", arr[p][u]);
		}
		printf(" \n");
	}
	for (p = 0; p < 2; p++){
		for (u = 0; u < 3; u++){
			ans[p][u] = ar[p][u] + arr[p][u];
		}
	}
	printf("The sum of two array : \n");
	for (p = 0; p < 2; p++){
		for (u = 0; u < 3; u++){
			printf("%d\t", ans[p][u]);
		}
		printf("\n");
	}
	return 0;
}
