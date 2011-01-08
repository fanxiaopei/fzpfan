src = $(wildcard *.c)
obj = $(patsubst %.c, %.o,$(src))
CFLAG = -g -wall -c -I./lib
LDFLAG = -g -L./lib/ -lstack
target = main	

$(target):$(obj)	
	gcc -o $@ $(LDFLAG)$^
%.o:%.c
	gcc -o $@ $(CFLAG)$<
clean:
	rm -f $(obj)
	rm -f $(target)
test:
	@echo $(obj)
