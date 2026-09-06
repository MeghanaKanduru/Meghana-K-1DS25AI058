#include <stdio.h>

int main() {
    
    int a[7]={1,2,4,3,9,0};
    int last = 4;           //last element index [considering 0 as empty space]
    
    //1. Traversal
    
    printf("Traversal\n");
        for(int i=0;i<=last;i++)
        {
            printf("%d, ",a[i]);
        }
    
    //-----------------------------------------------------------------------------
    
    //2. Linear Search
    
    printf("\n\nLinear Search\n");
    
    int key =9;
        for(int i=0;i<=last;i++)
        {
            if(key==a[i])
                {
                    printf("No Found at index = %d",i);
                    break;                  //just to stop searching when you find the key
                }
        }
    
    //-----------------------------------------------------------------------------
    
    //3. Finding Maximum
    
    printf("\n\nFinding Maximum\n");
    int max=a[0];
    
        for(int i=1;i<=last;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        
    printf("Max Element is = %d",max);
            
    //-----------------------------------------------------------------------------       
            
    //4. Finding Minimum
    printf("\n\nFinding Minimum\n");
    int min=a[0];
    
        for(int i=1;i<=last;i++)
        {
            if(a[i]<min)
                min=a[i];
        }
        
    printf("Min Element is = %d",min);
    
    //-----------------------------------------------------------------------------  
    printf("\n\nInsertion \n");
    
    //5. Insertion 
    
    //     i. at given pos
                int val_ins=99;
                int pos_ins=3;
            
              printf("\nArray before insertion\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
        printf("\nInsertion of key = %d at index pos = %d\n",val_ins,pos_ins);
                for(int i=last;i>=pos_ins;i--)
                {
                    a[i+1]=a[i];        //shifting to the right[or next] element side
                }
            a[pos_ins]=val_ins;
            last++;                     //since array size is increased
            
            printf("\nArray after insertion at given pos\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
            
    //     ii. at beginning
            
            //just put pos_ins=0
                
    //     iii. at end
    
            a[last+1]=102;                //any value
            last++;
            printf("\n\nArray after insertion at last\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
    
     //----------------------------------------------------------------------------- 
     
    //6. Deletion 
    
    printf("\n\nDeletion\n");
    //     i. at given pos
    
            int val_del=99;
            int pos_del=3;
            
        
         printf("\nArray before deletion\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
                
        printf("\n\nDeletion of element at index pos = %d\n",pos_del); 
        
                for(int i=pos_del;i<=last;i++)
                {
                    a[i]=a[i+1];        //shifting to the left[or previous] element side
                }
            
            last--;                     //since array size is decreased
            
            printf("\nArray after deletion\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
    
    
    
    
    //     ii. at beginning
            
            // just put pos_del = 0
            
    //     iii. at end
    
           last--;    
           printf("\n\nArray after deletion at last\n");      //Traversal
                 for(int i=0;i<=last;i++)
                {
                    printf("%d, ",a[i]);        
                }
    
    //7. Sum of all elements [optional]
    
}

