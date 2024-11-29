main:
	bison -d 1907093.y
	flex 1907093.l
	gcc 1907093.tab.c lex.yy.c -o app
