int findmatch(char *p, char *t)
{
int i,j; /* counters */
int m, n; /* string lengths */
m = strlen(p);
n = strlen(t);
for (i=0; i<=(n-m); i=i+1) {
j=0;
while ((j<m) && (t[i+j]==p[j]))
j = j+1;
if (j == m) return(i);
}
return(-1);
}
