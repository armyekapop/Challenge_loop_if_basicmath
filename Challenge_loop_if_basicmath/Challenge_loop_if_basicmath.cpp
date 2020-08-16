#include<stdio.h>
#include<math.h>
int main()
{
	double input1, input2, average, sigmapow=0, totalnum=0, SD,i;
	scanf_s("%lf%lf", &input1, &input2);
	average = (input1 + input2) / 2;
	if (input1 < input2)
	{
		for (i = input1; i <= input2; i++)
		{
			printf("%.0lf ", i);
			sigmapow += pow((i - average), 2);
			totalnum++;
		}
	}
	if (input1 > input2)
	{
		for (float i = input1; i >= input2; i--)
		{
			printf("%.0lf ", i);
			sigmapow += pow((i - average), 2);
			totalnum++;
		}
	}
	SD = sqrt(sigmapow / (totalnum - 1));
	printf("\nAverage = %.1lf", average);
	printf("\nSD = %.2lf", SD);
	return 0;
}