
#include <stdio.h>
#include <stdlib.h>


struct row
{
		int data;
		struct row *next;
}

struct row *add_data_to_row(struct row *node)
{
    printf("enter the element");
	scanf("%d",&node->data);
	node->next=nullptr;
	return node;


}

show_row()


 struct list_of_rows {
		struct row *row_head;
		struct list_of_rows *next_row;

 }

 void add_row_to_db(int rows,int columns)
 {
     struct row *create_row=(struct row*)malloc(sizeof(struct row));
     struct list_of_rows start_info=(struct list_of_rows*)malloc(sizeof(struct list_of_rows));
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<columns;j++)
         {
            if(j==0)
        {
            start_info->row_head=create_row;
        }
            create_row=add_data_to_row(create_row);
            create_row=create_row->next;
        }

     }
 }
 show_db

 main()
 {
	 ...
 }




