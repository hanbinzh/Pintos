

#define F (1 << 14)

#define INT_FP(A) (A*F)
#define FP_INT(A) (A/F)
#define FP_INT_ROUND(A) ( A >= 0 ? (A + F/2)/F : (A - F/2)/F )
#define FP_ADD(A,B) (A+B)
#define FP_SUB(A,B) (A-B)
#define FP_ADD_INTN(A,N) (A+N*F)
#define FP_SUB_INTN(A,N) (A-N*F)
#define FP_MULT(A,B) ((int64_t)A*B/F)
#define FP_MULT_INTN(A,N) (A*N)
#define FP_DIV(A,B) ((int64_t)A*F/B)
#define FP_DIV_INTN(A,N) (A/N)

