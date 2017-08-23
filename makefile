objects = main.o linkList.o hashMap.o

main : $(objects)
	cc -o main $(objects)
main.o : main.c linkList.h hashMap.h
linkList.o : linkList.h
hashMap.o : hashMap.h
