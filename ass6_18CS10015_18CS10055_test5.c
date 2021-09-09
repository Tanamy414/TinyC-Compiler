void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
    {
        printInt(arr[i]);
        printStr(" ");  
    }
    
}

int main()
{
	int arr[100]; 
	int i,n;
	printStr("_________Insertion Sort_________\n");
    printStr("Input the size of array(n):\n");
	int err=1;
    n = readInt(&err);
	printStr("Input the (n) elements of the array\n"); 
    for(i=0;i<n;i++)
    {
        arr[i]=readInt(&err);
    }
	insertionSort(arr, n);
    printStr("\nThe sorted array is is: ");
    printArray(arr,n);
    printStr("\n_______________________________________________\n");
	return 0;
}

