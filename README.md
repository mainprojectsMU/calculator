# CALCULATOR
this program should simply take two numbers and a selection of an operation then apply it on the two numbers.

``` mermaid
flowchart TD
	N((END))
	A((START))-->
	B[take input A]-->
	C[take input B]-->
	D[display options]-->
	E[take option]
	E--multiplication-->F[C=A*B]-->
	J[show multiplication result]-->N
	E--division-->G[C=A/B]-->
	K[show division result]-->N
	E--addition-->H[C=A+B]-->
	L[show addition result]-->N
	E--subtraction-->I[C=A-B]-->
	M[show subtraction result]-->N
	E--"other"-->O[display error message]-->N
```