#include <iostream>


void swap(int* swapA, int* swapB);
void sort (int arrayTosort[],int numberItem);


int main() {
  
 const int numberItems = 3;
 int itemsArrayPtr[numberItems] = {2 ,8, 5};
  std:: cout << "before sort " << std :: endl;
  for(int i =0; i < numberItems; i++)
    {
      std:: cout << itemsArrayPtr[i] << std::endl;
    }
  sort (itemsArrayPtr,numberItems);
  
  for(int i =0; i < numberItems; i++)
    {
      std:: cout << "after sort: " <<  itemsArrayPtr[i] << std::endl;
    }

  
}

void sort (int arrayTosort[],int numberItem)
{


 for(int i  = 0; i < numberItem ; i++ )
    {
      // minimum index at first value for first iteration
      int minIndex = i ;
      // check next values (excluding first one), iterate until end, 
     //min value index will be assigned to minIndex var at the end of the loop.
      for(int j =i+1; j < numberItem; j++ )
      {
        if(arrayTosort[j] < arrayTosort[minIndex])
        {
          minIndex = j;
        }
      }
      // we got our minimum index from the above loop, we swap it with position i of the array which is 0 here(in the first iteration)
      //  this continues as next iteration will start from index 2.
      swap(&arrayTosort[minIndex],&arrayTosort[i] );
    }
}  


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

