list::list()
{

	head=NULL;
	tail=NULL;
	start=NULL;

}



void list::createnode(int value)
{
	
    struct node *q,*temp;
    temp = new(struct node); 
    temp->data = value;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
        tail=temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
        temp->prev = q;
         tail=temp;
    }
    
}



void list::display()
{
	
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}



void list::insert_start(int value)
{
	
    struct node *temp;
    temp = new(struct node);
    temp->prev = NULL;
    temp->data = value;
    temp->next = start;
    start->prev = temp;
    start = temp;
    
}



void list::insert_position(int pos, int value)
{

    struct node *q,*temp;
    int i;
    q = start;
    for (i = 0;i < pos - 1;i++)
    {
        q = q->next;
    }
    temp = new(struct node);
    temp->data = value;
    if (q->next == NULL)
    {
        q->next = temp;
        temp->next = NULL;
        temp->prev = q;      
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }

}



void list::delete_first()
{
    
    struct node *q,*temp;
    temp = start;
    start = start->next;  
    start->prev = NULL;
    delete temp;
 
}



void list::delete_last()
{ 	
    
	struct node *q,*temp;
    temp = tail;
    tail=tail->prev;
    tail->next= NULL;
    delete temp;
   

}



void list::delete_position(int value)
{
    struct node *q,*temp;
    if (start->data == value)
    {
        temp = start;
        start = start->next;  
        start->prev = NULL;
        delete temp;
    }
    q = start;
    while (q->next->next != NULL)
    {   
        if (q->next->data == value)  
        {
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            delete temp;
        }
        q = q->next;
    }
    if (q->next->data == value)    
    { 	
        temp = q->next;
        delete temp;
        q->next = NULL;
    }
    
}
