#include <stdio.h>
#include <stdint.h>

typedef int64_t accumulateInt;

typedef struct
{
	accumulateInt sum;
	accumulateInt num;
} accumulateData;

void newAccumulateData(accumulateData* data)
{
	data->num = 0;
	data->sum = 0;
}

void accumulate(accumulateData* data , int64_t value)
{
	data->sum += value;
	(data->num)++;
}

int32_t accumulateResult(accumulateData* data)
{
	return data->sum / data->num;
}

int main()
{
	accumulateData data;
	newAccumulateData(&data);

	accumulate(&data, 10);
	accumulate(&data, 20);

	int64_t avg = accumulateResult(&data);
	printf("The average is %lli", avg);
}