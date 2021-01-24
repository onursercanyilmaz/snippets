#include <iostream>

#include<time.h>
#include<ctime>
#include<cstdlib>

using namespace std;
int stepB = 0;
int stepI = 0;
int stepS = 0;
int stepM = 0;



int itersayisiI = 0;
int itersayisiB = 0;
int itersayisiS = 0;
int itersayisiM = 0;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp=*yp;
	*yp = temp;
}

/*

void bubbleSort(int array[], int size) {

  // run loops two times: one for walking throught the array
  // and the other for comparison
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {

      // To sort in descending order, change > to < in this line.
      if (array[i] > array[i + 1]) {

        // swap if greater is at the rear position
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}


void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


void merge(int arr[], int p, int q, int r) {
  
  // Create L ‹ A[p..q] and M ‹ A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}



int partition(int array[], int low, int high) {
  // Select the pivot element
  int pivot = array[high];
  int i = (low - 1);

  // Put the elements smaller than pivot on the left 
  // and greater than pivot on the right of pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  printArray(array, 7);
  cout << "........\n";
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    // Select pivot position and put all the elements smaller 
    // than pivot on left and greater than pivot on right
    int pi = partition(array, low, high);

    // Sort the elements on the left of pivot
    quickSort(array, low, pi - 1);

    // Sort the elements on the right of pivot
    quickSort(array, pi + 1, high);
  }
}


int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}


int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}


//reference : programiz.com






*/
int BubbleSort(int arr[], int n)
{
	int i,j;
	for(i = 0; i<n-1; i++)
	{
		itersayisiB++;
		for(j = 0; j < n-i-1; j++)
		{
			stepB++;
			if(arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
		}
	}
	
}

int InsertionSort(int arr[], int n)
{
	int i,j,key;
	for(i = 1; i<n; i++)
	{
		key = arr[i];
		j = i-1;
		itersayisiI++;
		while(j >= 0 && arr[j] > key)
		{
			stepI++;
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}
}

void SelectionSort(int arr[], int n)
{
	int i,j,min_idx;
	for(i = 0 ; i<n-1 ; i++)
	{
		itersayisiS++;
		min_idx = i;
		for(j = i+1; j < n ; j++)
		{stepS++;
		if(arr[j] < arr[min_idx]) min_idx = j;
		}
		swap(&arr[min_idx], &arr[i]);
	}
	
}


int main()
{
	double start,end;
	int i, arr[10000];
	srand(time(NULL));
	for(i=0;i<= 10000; i++)
	{
		arr[i] = rand() % 1000 + 1;
	}
	
	int size = sizeof(arr) / sizeof(arr[0]);
		cout<<"Bubble  size : "<<size<<endl;
	start = clock();
	BubbleSort(arr,size);
	end = clock();
	
	cout<<"Bubble toplam adim sayisi: "<<stepB<<endl;	cout<<"Bubble toplam iterasyon sayisi: "<<itersayisiB<<endl;
	
	double gecen_sure = (end-start)/CLOCKS_PER_SEC;
	cout<<"Bubble sure: "<<fixed<<gecen_sure<<" sec"<<endl<<endl;

	//Insertion Sort
	for(i=0;i<= 10000; i++)
	{
		arr[i] = rand() % 1000 + 1;
	}
	
	size = sizeof(arr) / sizeof(arr[0]);
	
	start = clock();
	InsertionSort(arr,size);
	end = clock();
	
	cout<<"Insertion toplam adim sayisi: "<<stepI<<endl;	cout<<"Insertion toplam iterasyon sayisi: "<<itersayisiI<<endl;
	
	gecen_sure = (end-start)/CLOCKS_PER_SEC;
	cout<<"Insertion sure: "<<fixed<<gecen_sure<<" sec"<<endl<<endl;
	
		//Selection Sort
	for(i=0;i<= 10000; i++)
	{
		arr[i] = rand() % 1000 + 1;
	}
	
	size = sizeof(arr) / sizeof(arr[0]);
	
	start = clock();
	SelectionSort(arr,size);
	end = clock();
	
	cout<<"Selection toplam adim sayisi: "<<stepS<<endl;	cout<<"Selection toplam iterasyon sayisi: "<<itersayisiS<<endl;
	
	gecen_sure = (end-start)/CLOCKS_PER_SEC;
	cout<<"Selection sure: "<<fixed<<gecen_sure<<" sec"<<endl<<endl;
	
	
}
