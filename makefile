main : main.o linkList.o hashMap.o
	cc -o main main.o linkList.o hashMap.o
main.o : main.c linkList.h hashMap.h
	cc -c main.c
linkList.o : linkList.h
	cc -c linkList.c
hashMap.o : hashMap.h
	cc -c hashMap.c
