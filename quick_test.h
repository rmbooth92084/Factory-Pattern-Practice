#ifndef __QUICK_TEST_H__
#define __QUICK_TEST_H__

#include "quickSort.h"
#include <vector>
TEST(QuickSort, SortingBasicList)
{
	std::vector<int> test = {9,8,7,6,5,4,3,2,1,0};
	int sorted[] = {0,1,2,3,4,5,6,7,8,9};
	
	for(int i = 0; i < test.size() - 1;i++)
	{
		EXPECT_EQ(QubbleSort(test).at(i),sorted[i]);
	}
	
}

TEST(QubbleSort, AlreadySortedList)
{
	std::vector<int> test = {1,2,3,4,5};
	int sorted[] = {1,2,3,4,5};
	
	for(int i = 0; i < test.size() - 1;i++)
	{
		EXPECT_EQ(QubbleSort(test).at(i),sorted[i]);
	}
	
}

TEST(QubbleSort, OneNumberLongList)
{
	std::vector<int> test = {0};
	int sorted[] = {0};
	
	for(int i = 0; i < test.size() - 1;i++)
	{
		EXPECT_EQ(QubbleSort(test).at(i),sorted[i]);
	}
	
}

TEST(QubbleSort, EmptyList)
{
	std::vector<int> test = {};
	
	EXPECT_EQ(QubbleSort(test),test);

	
}
#endif//__quick_test_h_
