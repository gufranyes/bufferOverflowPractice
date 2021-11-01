FROM gcc:4.9
COPY . /usr/src/hw1
WORKDIR /usr/src/hw1
RUN gcc -o hw1 homework1.c
RUN apt-get update
RUN apt-get install gdb -y
RUN ls -l