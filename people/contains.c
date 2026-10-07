#include <stdio.h>

int contains(int item, int arr[], int size) {
   // Write your solution here!
<<<<<<< HEAD
  // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
	int item=1;
=======
	for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return 1; // Item found
        }
    }
	return 0;
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
>>>>>>> ee94f21f06de36ce3eaeeae972a57ccc3225e15e
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};

<<<<<<< HEAD

   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", arr);
}


=======
   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", 0);

   printf("Result: %d\n", 0);
   printf("Result: %d\n", 0);
}

>>>>>>> ee94f21f06de36ce3eaeeae972a57ccc3225e15e
