
// // This Code not print element because not we have display functio. only store element or data
// // ------------------------------------------------------------------------------------------------------------


// // #include <stdio.h>
// // #define MAX_SIZE 10  // we can change variable name and size
// // int stack[MAX_SIZE];
// // int top = -1;
// // void push(int item)
// // {
// //     if (top == MAX_SIZE - 1)
// //     {
// //         printf("Overflow & Exit");
// //     }
// //     else
// //     {
// //         stack[++top] = item;
// //         printf("%d item inserted . \n", item);
// //     }
// // }
// // int main()
// // {
// //     int item, n;
// //     printf("Enter howmany element you want to add:");
// //     scanf("%d", &n);
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("Enter element:");
// //         scanf("%d", &item);
// //         push(item);
// //     }

// //     return 0;
// // }


// // -----------------------------------------------------------------------------------------------------------
// // Depents on user so that how many add items
// // _______________________________________________________________________________________________________________

// // #include<stdio.h>
// // #define max_size 5 // we can change variable name and size
// // int my_stack[max_size];
// // int top = -1;
// // void push (int item){
// //     if (top == max_size-1)
// //     {
// //         printf("Overflow");
// //     }
// //     else{
// //         my_stack[++top] = item ;
// //         printf("%d item inserted",item);
// //     }
// // }
// // int main (){
// //     int item ,n;
// //     do
// //     {
// //         printf("Enter element:");
// //         scanf("%d",&item);
// //         push(item);
// //         printf("Do you add more items (yes 1 ,No 0)");
// //         scanf("%d",&n);
// //     } while (n == 1);
// //     return 0;
    
// // }

// // ----------------------------------------------------------------------------------------------------------
// // This code add and dispaly elements

// #include<stdio.h>
// #define size 100
// int arr[size];
// int top = -1;
// void push(int item){
//     if (top == size-1)
//     {
//         printf("overflow");
//     }
//     else{
//         arr[++top] = item ;
//         printf("%d item inserted",item);
//     }
    
// }
// void display(){
//     if (top == -1)
//     {
//         printf("Stack is Empty\n");
//     }
//     else{
//         printf("Stack elements are:\n");
//         for (int i = 0; i <= top; i++)
//         {
//             printf("%d\n", arr[i]);
//         }
//     }
// }

// int main(){
//     int item,n;
//     printf("Enter number how many element push in stack but under 100");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter elements %d",i++);
//         scanf("%d",&item);
//         push(item);
//         display();
//     }
    

// }