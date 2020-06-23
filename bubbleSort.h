/*
	Author: Raymond Booth
	Description: This is my implentation of bubble sort
*/
int *BubbleSort(int list[])
{
	int num1, num2, counter;
	while(1)
	{
		for(int i = 0; i < sizeof(list); i++)
		{
			if(list[i+1] < list[i])
			{
				num1 = list[i+1];
				num2 = list[i];
				
				list[i] = num1;
				list[i+1] = num2; //flips the the two numbers
			}
			else
				counter++;
		}
		if(counter == sizeof(list))// breaks out of while loop if array is sorted
		{
			return list;
		}
		counter = 0;
	}
}
