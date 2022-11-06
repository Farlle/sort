#include "MyForm.h"
#include <memory.h>
#include <vector>
#include <algorithm>

Sort sort;
int numberPositionUserArr = 0;
int numberPositionUserArrA = 0;
int numberPositionUserArrB = 0;

System::Void arrays::MyForm::addButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	arr[numberPositionUserArr] = Convert::ToDouble(creatTextBox->Text);
	double k = Convert::ToDouble(arr[numberPositionUserArr]);
	numberPositionUserArr++;
	listBox1->Items->Add(k);
}

System::Void arrays::MyForm::button2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	
}

System::Void arrays::MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	size = Convert::ToInt32(sizeArray->Text);
	numberPositionUserArr = size;
	//memcpy(arr, sort.creatRandomArray(size), ((sizeof(int)*size) * 2));
	memcpy(arr, sort.creatRandomArray(size), size*9);
	listBox1->Items->Add("Исходный массив:");

	for (int i = 0; i < size; i++)
	{
		double k = Convert::ToDouble(arr[i]);

		listBox1->Items->Add(k);
	}
	listBox1->Items->Add("-----------");

}

System::Void arrays::MyForm::sorting_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//numberPositionUserArr++;
	listBox1->Items->Add("Отсортированный массив:");

	size = numberPositionUserArr;

	if (radioButton1->Checked == true)
	{
		memcpy(arr, sort.selectionSort(arr, size), size*9);
		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
	if (radioButton2->Checked == true)
	{
		memcpy(arr, sort.bubbleSort(arr, size), size*9);
		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
	if (radioButton3->Checked == true)
	{
		memcpy(arr, sort.quickSort(arr,0 ,size-1), ((sizeof(int)*size) * 2));
		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
	if (radioButton4->Checked == true)
	{
		memcpy(arr, sort.mergeSort(arr, 0, size , sizeof(int)*size * 2), ((sizeof(int)*size) * 2));
		//memcpy(arr, sort.shellSort(arr, size), ((sizeof(int)*size) * 2));

		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
	if (radioButton5->Checked == true)
	{
		memcpy(arr, sort.shellSort(arr, size), ((sizeof(int)*size) * 2));
		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
	if (radioButton6->Checked == true)
	{
		memcpy(arr, sort.insertionSort(arr, size), ((sizeof(int)*size) * 2));
		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
	if (radioButton7->Checked == true)
	{
		memcpy(arr, sort.heapSort(arr, size), ((sizeof(int)*size) * 2));
		for (int i = 0; i < size; i++)
		{
			double k = Convert::ToDouble(arr[i]);

			listBox1->Items->Add(k);
		}
	}
}

System::Void arrays::MyForm::button4_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	listBox1->Items->Add("Отсортированый массив С:");

	size = sizeA + sizeB;

	std::copy(arrA, arrA + sizeA, arr);
	std::copy(arrB, arrB + sizeB, arr + sizeA);
	memcpy(arr, sort.mergeSort(arr, 0, size, sizeof(int)*size * 2), ((sizeof(int)*size) * 2));
	//memcpy(arr, sort.shellSort(arr, size), ((sizeof(int)*size) * 2));
	for (int k = 0; k < size; k++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arr[i] == arr[j])
				{
					arr[i] = arr[j];
					for (int q = i; q < size - 1; q++)
					{
						arr[q] = arr[q + 1];
					}
					size--;
				}
			}
		}
	}


	for (int i = 0; i < size; i++)
	{
		double k = Convert::ToDouble(arr[i]);

		listBox1->Items->Add(k);
	}
	listBox1->Items->Add("-----------");

}

System::Void arrays::MyForm::button3_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox4->SelectedIndex == 0)
	{
		listBox1->Items->Add("Исходный массив А:");

		sizeA = Convert::ToInt32(sizeTextBoxForIndividual->Text);
		numberPositionUserArr = sizeA;
		memcpy(arrA, sort.creatRandomArray(sizeA), ((sizeof(int)* sizeA) * 2));

		for (int i = 0; i < sizeA; i++)
		{
			double k = Convert::ToDouble(arrA[i]);

			listBox1->Items->Add(k);
		}
		listBox1->Items->Add("-----------");
	}
	if (comboBox4->SelectedIndex == 1)
	{
		listBox1->Items->Add("Исходный массив В:");

		sizeB = Convert::ToInt32(sizeTextBoxForIndividual->Text);
		numberPositionUserArr = sizeB;
		memcpy(arrB, sort.creatRandomArray(sizeB), ((sizeof(int)* sizeB) * 2));

		for (int i = 0; i < sizeB; i++)
		{
			double k = Convert::ToDouble(arrB[i]);

			listBox1->Items->Add(k);
		}
		listBox1->Items->Add("-----------");
	}
}

System::Void arrays::MyForm::button5_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	listBox1->Items->Add("Исходный массив:");

	if (comboBox2->SelectedIndex == 0)
	{
		//size = 9;
		numberPositionUserArr = 9;
		
		double arr1[9] = { 9,8,7,6,5,4,3,2,1 };
		memcpy(arr, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
		for (int i = 0; i < 9; i++)
		{
			double k = Convert::ToDouble(arr[i]);
			listBox1->Items->Add(k);
		}
		listBox1->Items->Add("-----------");
	}
	if (comboBox2->SelectedIndex == 1 )
	{
		//size = 9;
		numberPositionUserArr = 13;
		double arr1[13] = { 5,6,1,1,2,7,5,9,8,1,3,0,6 };
		memcpy(arr, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
		for (int i = 0; i < numberPositionUserArr; i++)
		{
			double k = Convert::ToDouble(arr[i]);
			listBox1->Items->Add(k);
		}
		listBox1->Items->Add("-----------");
	}
	if (comboBox2->SelectedIndex == 2)
	{
		//size = 9;
		numberPositionUserArr = 6;
		double arr1[6] = { 2.2, 5.5, 1.1, 0, 24.5, 77.5 };
		memcpy(arr, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
		for (int i = 0; i < numberPositionUserArr; i++)
		{
			double k = Convert::ToDouble(arr[i]);
			listBox1->Items->Add(k);
		}
		listBox1->Items->Add("-----------");
	}

	if (comboBox2->SelectedIndex == 3)
	{
		//size = 9;
		numberPositionUserArr = 8;
		double arr1[8] = { 100, 2418, 734, 983, 273, 73, 1, 0 };
		memcpy(arr, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
		for (int i = 0; i < numberPositionUserArr; i++)
		{
			double k = Convert::ToDouble(arr[i]);
			listBox1->Items->Add(k);
		}
		listBox1->Items->Add("-----------");
	}

}

System::Void arrays::MyForm::button6_Click(System::Object ^ sender, System::EventArgs ^ e)
{/*
	if (comboBox3->SelectedIndex == 0)
	{
		numberPositionUserArr = 9;
		double arr1[9] = { 9,8,7,6,5,4,3,2,1 };
		if (comboBox1->SelectedIndex == 0)
		{
			memcpy(arrA, arr1, 9 * 9);
			for (int i = 0; i < 9; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if(comboBox1->SelectedIndex == 1)
		{
			memcpy(arrB, arr1, 9 * 9);
			for (int i = 0; i < 9; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		
	}
	if (comboBox1->SelectedIndex == 1)
	{
		size = 9;
		numberPositionUserArr = 13;
		double arr1[13] = { 5,6,1,1,2,7,5,9,8,1,3,0,6 };
		if (comboBox1->SelectedIndex == 0)
		{
			memcpy(arrA, arr1, numberPositionUserArr * 9);
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if(comboBox1->SelectedIndex==1)
		{
			memcpy(arrB, arr1, numberPositionUserArr * 9);
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		
	}
	if (comboBox2->SelectedIndex == 2)
	{
		size = 9;
		numberPositionUserArr = 6;
		double arr1[6] = { 2.2, 5.5, 1.1, 0, 24.5, 77.5 };
		if (comboBox1->SelectedIndex == 0)
		{
			memcpy(arrA, arr1, numberPositionUserArr * 9);
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox1->SelectedIndex == 1)
		{
			memcpy(arrB, arr1, numberPositionUserArr * 9);
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");

		}		
	}
	if (comboBox2->SelectedIndex == 3)
	{
		size = 9;
		numberPositionUserArr = 8;
		double arr1[8] = { 100, 2418, 734, 983, 273, 73, 1, 0 };
		if (comboBox1->SelectedIndex == 0)
		{
			memcpy(arrA, arr1, numberPositionUserArr * 9);
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if(comboBox1->SelectedIndex == 1)
		{
			memcpy(arrB, arr1, numberPositionUserArr * 9);
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
		}		
		listBox1->Items->Add("-----------");
	}*/

	if (comboBox2->SelectedIndex == 0)
	{
		listBox1->Items->Add("Исходный массив А:");


		if (comboBox3->SelectedIndex == 0)
		{
			//size = 9;
			numberPositionUserArr = 9;
			double arr1[9] = { 9,8,7,6,5,4,3,2,1 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < 9; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 1)
		{
			//size = 9;
			numberPositionUserArr = 13;
			double arr1[13] = { 5,6,1,1,2,7,5,9,8,1,3,0,6 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 2)
		{
			//size = 9;
			numberPositionUserArr = 6;
			double arr1[6] = { 2.2, 5.5, 1.1, 0, 24.5, 77.5 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}

		if (comboBox3->SelectedIndex == 3)
		{
			//size = 9;
			numberPositionUserArr = 8;
			double arr1[8] = { 100, 2418, 734, 983, 273, 73, 1, 0 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
	}
	if (comboBox2->SelectedIndex == 1)
	{
		listBox1->Items->Add("Исходный массив В:");

		if (comboBox3->SelectedIndex == 0)
		{
			//size = 9;
			numberPositionUserArr = 9;
			double arr1[9] = { 9,8,7,6,5,4,3,2,1 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < 9; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 1)
		{
			//size = 9;
			numberPositionUserArr = 13;
			double arr1[13] = { 5,6,1,1,2,7,5,9,8,1,3,0,6 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 2)
		{
			//size = 9;
			numberPositionUserArr = 6;
			double arr1[6] = { 2.2, 5.5, 1.1, 0, 24.5, 77.5 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}

		if (comboBox3->SelectedIndex == 3)
		{
			//size = 9;
			numberPositionUserArr = 8;
			double arr1[8] = { 100, 2418, 734, 983, 273, 73, 1, 0 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
	}
}

System::Void arrays::MyForm::button7_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox4->SelectedIndex == 0)
	{
		listBox1->Items->Add("Исходный массив А:");

		if (comboBox3->SelectedIndex == 0)
		{
			//size = 9;
			numberPositionUserArr = 9;
			sizeA = numberPositionUserArr;

			double arr1[9] = { 9,8,7,6,5,4,3,2,1 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < 9; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 1)
		{
			//size = 9;
			numberPositionUserArr = 13;
			sizeA = numberPositionUserArr;

			double arr1[13] = { 5,6,1,1,2,7,5,9,8,1,3,0,6 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 2)
		{
			//size = 9;
			numberPositionUserArr = 6;
			sizeA = numberPositionUserArr;

			double arr1[6] = { 2.2, 5.5, 1.1, 0, 24.5, 77.5 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}

		if (comboBox3->SelectedIndex == 3)
		{
			//size = 9;
			numberPositionUserArr = 8;
			sizeA = numberPositionUserArr;

			double arr1[8] = { 100, 2418, 734, 983, 273, 73, 1, 0 };
			memcpy(arrA, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrA[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
	}
	if (comboBox4->SelectedIndex == 1)
	{
		listBox1->Items->Add("Исходный массив В:");

		if (comboBox3->SelectedIndex == 0)
		{
			//size = 9;
			numberPositionUserArr = 9;
			sizeB = numberPositionUserArr;

			double arr1[9] = { 9,8,7,6,5,4,3,2,1 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < 9; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 1)
		{
			//size = 9;
			numberPositionUserArr = 13;
			sizeB = numberPositionUserArr;

			double arr1[13] = { 5,6,1,1,2,7,5,9,8,1,3,0,6 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
		if (comboBox3->SelectedIndex == 2)
		{
			//size = 9;
			numberPositionUserArr = 6;
			sizeB = numberPositionUserArr;

			double arr1[6] = { 2.2, 5.5, 1.1, 0, 24.5, 77.5 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}

		if (comboBox3->SelectedIndex == 3)
		{
			//size = 9;
			numberPositionUserArr = 8;
			sizeB = numberPositionUserArr;

			double arr1[8] = { 100, 2418, 734, 983, 273, 73, 1, 0 };
			memcpy(arrB, arr1, ((sizeof(int)* numberPositionUserArr) * 2));
			for (int i = 0; i < numberPositionUserArr; i++)
			{
				double k = Convert::ToDouble(arrB[i]);
				listBox1->Items->Add(k);
			}
			listBox1->Items->Add("-----------");
		}
	}
}

System::Void arrays::MyForm::button2_Click_1(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox4->SelectedIndex == 0)
	{
		listBox1->Items->Add("Добавленный элемент в массив А:");

		arrA[numberPositionUserArrA] = Convert::ToDouble(addForIndividual->Text);
		double k = Convert::ToDouble(arrA[numberPositionUserArrA]);
		numberPositionUserArrA++;
		listBox1->Items->Add(k);
	}
	if (comboBox4->SelectedIndex == 1)
	{
		listBox1->Items->Add("Добавленный элемент в массив В:");

		arrB[numberPositionUserArrB] = Convert::ToDouble(addForIndividual->Text);
		double k = Convert::ToDouble(arrB[numberPositionUserArrB]);
		numberPositionUserArrB++;
		listBox1->Items->Add(k);
	}
	sizeA = numberPositionUserArrA;
	sizeB = numberPositionUserArrB;
}

System::Void arrays::MyForm::button8_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	listBox1->Items->Clear();

}

System::Void arrays::MyForm::button9_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	listBox1->Items->Add("Размер нового массива: " + size );
	listBox1->Items->Add("Размер исходного массива А: " + sizeA);
	listBox1->Items->Add("Размер исходного массива В: " + sizeB);


}


