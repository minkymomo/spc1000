	00010 DIM H(128),L(2)
	00020 MODE 5 : CLS
	00030 PRINT @(0,0);"Step 1"
	00040 X1=19+RND(30):L(1)=10+RND(X1-10)
	00050 X2=79+RND(30):L(2)=X2+RND(110-X2)
	00060 N=158-RND(58)
	00070 PRINT @(0,2);"Step 2"
	00080 FOR I=0 TO X1
	00090   H(I)=N
	00100 NEXT I
	00110 N=158-RND(58)
	00120 FOR I=X2 TO 127
	00130   H(I)=N
	00140 NEXT I
	00150 X3= X1+RND(X2-X1-20)+10
	00160 H(X3)=50+RND(100)
	00170 N=H(X3)
	00180 D1=N-H(1)
	00190 D2=N-H(127)
	00200 REM ......................................
	00210 PRINT @(0,4);"Step 3 (Left area)";X1;"-";X3
	00220 A=(X3-X1+1):N=H(1)+D1/2
	00230 FOR I=X1+1 TO X3-1
	00250   H(I)=USR9(128-128*(I-X1-1)/A)*D1/510+N
	00260 NEXT
	00270 PRINT @(0,6);"Step 4 (Right area)";X3;"-";X2
	00280 Y=X2:N=H(127)+D2/2
	00282 Y=X2-X3+1
	00290 FOR I=X3+1 TO X2-1
	00310   H(I)=USR9(128*(I-X3-1)/Y)*D2/510+N
	00320 NEXT
	00330 PRINT @(0,8);"Step 5 (Draw)"
	00340 X=0
	00350 COLOR=1
	00360 FOR I=0 TO 127
	00370   FOR J=0 TO 7 STEP 3
	00380     PLOT X+J,H(I)*4 TO X+J,636
	00390   NEXT J
	00400   X=X+8
	00410 NEXT I
	00420 PRINT @(0,20);"Done."
