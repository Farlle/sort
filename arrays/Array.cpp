#include<iostream>
#include<vector>
class Sort
{
public:

	double *creatRandomArray(int size)
	{
		double *array = new double[size];
		for (int i = 0; i <= size; i++) 
		{
			array[i] = rand() % 10;
			int k = array[i];
		}
		return array;
	}

	double findSmallestPosition(double list[], int startPosition, int listLength)
	{
		int smallestPosition = startPosition;

		for (int i = startPosition; i < listLength; i++)
		{
			if (list[i] < list[smallestPosition])
				smallestPosition = i;
		}
		return smallestPosition;
	}

	double *selectionSort(double list[], int listLength)
	{
		for (int i = 0; i < listLength; i++)
		{
			int smallestPosition = findSmallestPosition(list, i, listLength);
			std::swap(list[i], list[smallestPosition]);
		}
		return list;
	}

	double *bubbleSort(double list[], int listLength)
	{
		while (listLength--)
		{
			bool swapped = false;

			for (int i = 0; i < listLength; i++)
			{
				if (list[i] > list[i + 1])
				{
					std::swap(list[i], list[i + 1]);
					swapped = true;
				}
			}

			if (swapped == false)
				break;
		}
		return list;
	}

	int partition(double list[], int start, int pivot)
	{
		int i = start;
		while (i < pivot)
		{
			if (list[i] > list[pivot] && i == pivot - 1)
			{
				std::swap(list[i], list[pivot]);
				pivot--;
			}

			else if (list[i] > list[pivot])
			{
				std::swap(list[pivot - 1], list[pivot]);
				std::swap(list[i], list[pivot]);
				pivot--;
			}

			else i++;
		}
		return pivot;
	}

	double *quickSort(double list[], int start, int end)
	{
		if (start < end)
		{
			int pivot = partition(list, start, end);

			quickSort(list, start, pivot - 1);
			quickSort(list, pivot + 1, end);
		}
		return list;
	}

	double *mergeSort(double list[], int start, int end,int size)
	{
		int mid;
		if (start < end) {

			mid = (start + end) / 2;
			mergeSort(list, start, mid,size);
			mergeSort(list, mid + 1, end,size);
			merge(list, start, end, mid,size);
		}
		return list;
	}

	double *merge(double list[], int start, int end, int mid,int size)
	{
		double* mergedList = new double[size];
		int i, j, k;
		i = start;
		k = start;
		j = mid + 1;

		while (i <= mid && j <= end)
		{
			if (list[i] < list[j])
			{
				mergedList[k] = list[i];
				k++;
				i++;
			}
			else 
			{
				mergedList[k] = list[j];
				k++;
				j++;
			}
		}

		while (i <= mid) {
			mergedList[k] = list[i];
			k++;
			i++;
		}

		while (j <= end) {
			mergedList[k] = list[j];
			k++;
			j++;
		}

		for (i = start; i < k; i++) {
			list[i] = mergedList[i];
		}
		return mergedList;
	}

	double *shellSort(double list[], int size) //сортировка Шелла
	{
		int  step, count;
		step = size;
		step = step / 2;
		while (step > 0)
		{
			for (int i = 0; i < size - step; i++)
			{
				int j = i;
				while (j >= 0 && list[j] > list[j + step])
				{
					
					std::swap(list[j], list[j + step]);
					j--;
				}
			}
			step = step / 2;
		}
		return list;
	}

	//double shellSortVector(std::vector<double>& list, int size) //сортировка Шелла
	//{
	//	int  step, count;
	//	step = size;
	//	step = step / 2;
	//	while (step > 0)
	//	{
	//		for (int i = 0; i < size - step; i++)
	//		{
	//			int j = i;
	//			while (j >= 0 && list[j] > list[j + step])
	//			{

	//				std::swap(list[j], list[j + step]);
	//				j--;
	//			}
	//		}
	//		step = step / 2;
	//	}
	//	return list;
	//}


	double *insertionSort(double list[], int listLength)
	{
		for (int i = 1; i < listLength; i++)
		{
			int j = i - 1;
			while (j >= 0 && list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
				j--;
			}
		}
		return list;
	}

	void heapify(double list[], int listLength, int root)
	{
		int largest = root;
		int l = 2 * root + 1;
		int r = 2 * root + 2;

		if (l < listLength && list[l] > list[largest])
			largest = l;

		if (r < listLength && list[r] > list[largest])
			largest = r;

		if (largest != root)
		{
			std::swap(list[root], list[largest]);
			heapify(list, listLength, largest);
		}
	}

	double *heapSort(double list[], int listLength)
	{
		for (int i = listLength / 2 - 1; i >= 0; i--)
			heapify(list, listLength, i);

		for (int i = listLength - 1; i >= 0; i--)
		{
			std::swap(list[0], list[i]);
			heapify(list, i, 0);
		}
		return list;
	}

private:

};
