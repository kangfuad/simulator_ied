# src/cswi/Dockerfile
FROM libiec61850-base:latest

WORKDIR /app/src/cswi

COPY src/cswi/cswi_simulator.c .
COPY src/cswi/static_model.* ./

RUN gcc -o cswi_simulator \
    cswi_simulator.c \
    static_model.c \
    -I/usr/local/include/libiec61850 \
    -L/usr/local/lib \
    -liec61850 \
    -lpthread \
    -lm \
    -std=gnu99

CMD ["./cswi_simulator"]

