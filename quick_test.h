#ifndef __QUICK_TEST_H__
#define __QUICK_TEST_H__

#include "quickSort.h"
#include <vector>
TEST(QuickSort, SortingBasicList)
{
	std::vector<int> test = {9,8,7,6,5,4,3,2,1,0};
	int sorted[] = {0,1,2,3,4,5,6,7,8,9};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(QuickSort(test).at(i),sorted[i]);
	}
	
}

TEST(QuickSort, SortingBasicListWithNegatives)
{
	std::vector<int> test = {9,-8,7,6,-5,4,-3,2,-1,0};
	int sorted[] = {-8,-5,-3,-1,0,2,4,6,7,9};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(QuickSort(test).at(i),sorted[i]);
	}
	
}

TEST(QuickSort, SortingBasicListWithMultiDigitNums)
{
	std::vector<int> test = {90,8,700,6,5,40,3,26,12,0};
	int sorted[] = {0,3,5,6,8,12,26,40,90,700};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(QuickSort(test).at(i),sorted[i]);
	}
	
}

TEST(QuickSort, AlreadySortedList)
{
	std::vector<int> test = {1,2,3,4,5};
	int sorted[] = {1,2,3,4,5};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(QuickSort(test).at(i),sorted[i]);
	}
	
}

TEST(QuickSort, OneNumberLongList)
{
	std::vector<int> test = {0};
	int sorted[] = {0};
	
	for(int i = 0; i < test.size();i++)
	{
		EXPECT_EQ(QuickSort(test).at(i),sorted[i]);
	}
	
}

TEST(QuickSort, EmptyList)
{
	std::vector<int> test = {};
	
	EXPECT_EQ(QuickSort(test),test);

	
}
#endif//__quick_test_h_
