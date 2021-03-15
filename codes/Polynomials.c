#include<stdio.h>
#include<stdlib.h>

struct PolyNode{
    int coef;
    int exp;
    struct PolyNode *link;
}
typedef struct PolyNode* Polynomial;

void Attach(int c, int e, Polynomial* pRear)
{
    Polynomial P;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->coef = c;
    P->exp = e;
    P->link = NULL;
    (*pRear)->link = P;
    *pRear = P; 
}

Polynomial ReadPoly()
{
    int N,c,e;
    scanf("%d", &N);
    Polynomial P, t, Rear;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    Rear = P;
    while(N--){
        scanf("%d %d", &c, &e);
        Attach(c, e, &Rear);
    }
    t = P; P = P->link; free(t);
    return P;
}

Polynomial Add(Polynomial P1, Polynomial P2)
{
    Polynomial t1,t2,P,Rear, t;
    t1 = p1; t2 = p2;
    P = (Polynomial)malloc(sizeof (struct PolyNode));
    Rear = P;
    while (t1&&t2)
    {
        if(t1->exp == t2->exp)
        {
            if( t1->coef+t2->coef )
                Attach( t1->coef+t2->coef, t1->exp, &Rear );
            t1 = t1->link; t2 = t2->link;
        }
        else if(t1->exp > t2->exp)
        {
            Attach( t1->coef, t1->exp, &Rear );
            t1 = t1->link;
        }
        else if(t1->exp < t2->exp)
        {
            Attach( t2->coef, t2->exp, &Rear );
            t2 = t2->link;
        }
    }
    if ( t1 )
    {
        Rear->link = t1; 
    }
    if( t2 )
    {
        Rear->link = t2;
    }
    t = P; P->link = P; free(t);
    return P;
}

Polynomial MultOne(Polynomial PNode, Polynomial P2)
{
	Polynomial P, t, temp, Rear;
	t = P2;
	P = (Polynomial)malloc(sizeof(struct PolyNode));
	Rear = P;
	while (t) {
		Attach(PNode->coef*t->coef, PNode->exp + t->exp, &Rear);
		t = t->link;
	}
	temp = P; P = P->link;
	free(temp);
	return P;
}

Polynomial Mult(Polynomial P1, Polynomial P2)
{
	Polynomial P1, t1, t2, temp, Rear;
	t1 = P1; t2 = P2;
	P = (Polynomial)malloc(sizeof(struct PolyNode));
	Rear = P;
	while (t1) {
		Polynomial PTemp;
		PTemp =  MultOne(t1, t2);
		P = Add(P, PTemp);
		t1 = t1->link;
	}
}