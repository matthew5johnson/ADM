/* searching a list */
list *search_list(list *l, item_type x)
{
if (l == NULL) return(NULL);
if (l->item == x)
return(l);
else
return( search_list(l->next, x) );
}

/* inserting into a list */
void insert_list(list **l, item_type x)
{
list *p; /* temporary pointer */
p = malloc( sizeof(list) );
p->item = x;
p->next = *l;
*l = p;
}

/* deletion from a list */
list *predecessor_list(list *l, item_type x)
{
if ((l == NULL) || (l->next == NULL)) {
printf("Error: predecessor sought on null list.\n");
return(NULL);
}
if ((l->next)->item == x)
return(l);
else
return( predecessor_list(l->next, x) );
}

delete_list(list **l, item_type x)
{
list *p; /* item pointer */
list *pred; /* predecessor pointer */
list *search_list(), *predecessor_list();
p = search_list(*l,x);
if (p != NULL) {
pred = predecessor_list(*l,x);
if (pred == NULL) /* splice out out list */
*l = p->next;
else
pred->next = p->next;
free(p); /* free memory used by node */
}
}

/* "C language requires explicit deallocation of memory, so we must free the
deleted node after we are finished with it to return the memory to the system." */
