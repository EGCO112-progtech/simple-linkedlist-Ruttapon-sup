//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int z=5;
    struct node a,b,c,*head ;
    a.value = z;
    a.next=&b;
    head=&a;
    b.next=&c;
    b.value=head->value+3;
    head->next->next->value = 11; //b.next->value = 11; c.next = 11
    head->next->next->next = NULL;

    printf("%d\n", head->next->next->value ); //what value for 11
    printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
    struct node d;
    head = &d;
    d.value = 2; // head->value = 2;
    d.next = &a; // head->next = &a;
    printf("%d ",head->value);
    printf("%d ",head->next->value);
    printf("%d ",head->next->next->value);
    printf("%d\n",head->next->next->next->value);

/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
      //Exercise III Use loop to print everything
        int i,n=4;

        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp = tmp->next;
          // What is missing??? already completed
        }
        printf("\n");
    
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       tmp = head;
         while(tmp != NULL){
            printf("%3d", tmp->value);
            tmp = tmp->next;
           // What is missing???
        }
        printf("\n");
    
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */

    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
    
    return 0;
}
