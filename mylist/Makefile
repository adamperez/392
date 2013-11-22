#Makefile for liblist.a
NAME=libmylist.a
SRC=new_node.c add_node.c add_elem.c append.c add_node_at.c remove_node.c remove_node_at.c remove_last.c count_nodes.c empty_list.c node_at.c elem_at.c traverse_char.c traverse_string.c traverse_int.c
OBJ=$(SRC:.c=.o)
RM=rm -f
LIBPATH=../lib
TESTSRC=listtest.c
TESTPATH=../test
TESTOBJ=$(TESTSRC:.c=.o)
TESTNAME=mytest
LIBS=-lmylist -lmy

#
all:$(OBJ)
	ar -rc $(LIBPATH)/$(NAME) $(OBJ)
	ranlib $(LIBPATH)/$(NAME)

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) $(LIBPATH)/$(NAME)

re: fclean all clean

test:$(TESTOBJ)
#	cc -L$(LIBPATH) $(TESTOBJ) -o $(TESTNAME)
#	cc -L$(LIBPATH)/$(LIBS) -o $(TESTNAME)
#	cc -L$(LIBPATH)/$(NAME) $(TESTOBJ) $(LIBPATH)/$(LIBS) -o $(TESTNAME)
	cc -L$(LIBPATH) $(TESTPATH)/$(TESTSRC) $(LIBS) -o $(TESTPATH)/$(TESTNAME)

ret: re test
