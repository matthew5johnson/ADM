for (i=1; i<=x; i++)
for (j=1; j<=y; j++) {
C[i][j] = 0;
for (k=1; k<=z; k++)
C[i][j] += A[i][k] * B[k][j];
}
