TARGET_SERV_S = server_s
TARGET_CLNT_S = input_s
TARGET_SERV_D = server_d
TARGET_CLNT_D = input_d
CLEAN_ALL = $(TARGET_SERV_S) $(TARGET_CLNT_S) $(TARGET_SERV_D) $(TARGET_CLNT_D)

OBJECT_O_S = calculate.o error_handling.o
OBJECT_O_D = calculate.o error_handling.o
SRC = calculate.c error_handling.c

NAME = hgy
LIB_NAME_S = lib$(NAME).a
LIB_NAME_D = lib$(NAME).so

CFLAGS_PIC = -fPIC
#for using gdb
CFLAGS = -g
#for using library
libs = -l$(NAME) -lpthread
#lib positon ?
lib_dir = -L. -I./

# =================== static =========================
all_static : $(TARGET_SERV_S) $(TARGET_CLNT_S)

$(TARGET_SERV_S) : $(LIB_NAME_S)
	$(CC) $(CFLAGS) -o $@ main.c $(lib_dir) $(libs)
$(TARGET_CLNT_S) : $(LIB_NAME_S)
	$(CC) $(CFLAGS) -o $@ input.c $(lib_dir) $(libs)

$(LIB_NAME_S) : $(OBJECT_O_S)
	$(AR) rscv $@ $^
.c.o_S :		
	$(CC) -c $<		
#=====================================================
#=================== dynamic =========================
dynamic : $(TARGET_SERV_D) $(TARGET_CLNT_D)

$(TARGET_SERV_D) : $(LIB_NAME_D)
	$(CC) $(CFLAGS) -o $@ main.c $(lib_dir) $(libs)
$(TARGET_CLNT_D) : $(LIB_NAME_D)
	$(CC) $(CFLAGS) -o $@ input.c $(lib_dir) $(libs)

$(LIB_NAME_D) : $(OBJECT_O_D)
	$(CC) -shared -o $@ $^
.c.o :
	$(CC) $(CFLAGS_PIC) -c $<
#=====================================================

clean : 
	rm -f *.o *.a *.so $(CLEAN_ALL) 
