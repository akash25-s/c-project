#include"header.h"
void delete_all(ST**ptr)
{

        char op;
        if(*ptr==NULL)
        {
                printf("NO DATA AVAILABLE  \n");
                return ;
        }

        printf("The data is deleted permently, also want delete(y/n)\n");
        scanf(" %c",&op);

        if(op=='y'||op=='Y')
        {
ST*last=*ptr;
                while(*ptr!=NULL)
                {
                        *ptr=last->next;
                        free(last);
                        last=*ptr;
                }
                printf("All nodes is deleted sucessfully \n");
        }
}


